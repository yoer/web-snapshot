#include "pdf_x.h"

#include <map>
#include <algorithm>

#include "page_data.h"
#include "wk_setting.h"


page_snap::pdf_x::pdf_x()
:m_converter(nullptr)
{
	wkhtmltopdf_init(false);
}

page_snap::pdf_x::~pdf_x()
{
	if (nullptr != m_converter){
		wkhtmltopdf_destroy_converter(m_converter);
	}
	wkhtmltopdf_deinit();
}

page_snap::page_result page_snap::pdf_x::save()
{
	page_snap::page_result rs;
	if (!wkhtmltopdf_convert(m_converter))
	{
		rs.state(false);
		rs.error("Convertion failed");
	}

	rs.http_error_code(wkhtmltopdf_http_error_code(m_converter));

	return rs;
}

page_snap::pdf_x& page_snap::pdf_x::init_wk(const page_snap::wk_params& data)
{
	std::map<std::string, std::string> params;
	std::for_each(data.begin(), data.end(), [&](const page_snap::wk_param& param){
		params[param.first] = param.second;
	});

	m_object_setting = wkhtmltopdf_create_object_settings();
	auto obj_keys = object_setting_key();
	std::for_each(obj_keys.begin(), obj_keys.end(), [&](const std::string& key){
		auto iter = params.find(key);
		if (params.end() == iter){
			return;
		}
		wkhtmltopdf_set_object_setting(m_object_setting, key.c_str(), iter->second.c_str());
	});

	m_global_setting = wkhtmltopdf_create_global_settings();
	auto glb_keys = global_setting_key();
	std::for_each(glb_keys.begin(), glb_keys.end(), [&](const std::string& key){
		auto iter = params.find(key);
		if (params.end() == iter){
			return;
		}
		wkhtmltopdf_set_global_setting(m_global_setting, key.c_str(), iter->second.c_str());
	});

	m_converter = wkhtmltopdf_create_converter(m_global_setting);
	wkhtmltopdf_add_object(m_converter, m_object_setting, NULL);

	return *this;
}

std::vector<std::string> page_snap::pdf_x::object_setting_key() const
{
	static std::vector<std::string> keys;
	keys.push_back(page_snap::setting_pdf_object_in);

	return keys;
}

std::vector<std::string> page_snap::pdf_x::global_setting_key() const
{
	static std::vector<std::string> keys;
	keys.push_back(page_snap::setting_pdf_global_out);

	return keys;
}

page_snap::pdf_x& page_snap::pdf_x::set_warning_callback(wkhtmltopdf_str_callback cb)
{
	wkhtmltopdf_set_warning_callback(m_converter, cb);
	return *this;
}

page_snap::pdf_x& page_snap::pdf_x::set_error_callback(wkhtmltopdf_str_callback cb)
{
	wkhtmltopdf_set_error_callback(m_converter, cb);
	return *this;
}

page_snap::pdf_x& page_snap::pdf_x::set_phase_changed_callback(wkhtmltopdf_void_callback cb)
{
	wkhtmltopdf_set_phase_changed_callback(m_converter, cb);
	return *this;
}

page_snap::pdf_x& page_snap::pdf_x::set_progress_changed_callback(wkhtmltopdf_int_callback cb)
{
	wkhtmltopdf_set_progress_changed_callback(m_converter, cb);
	return *this;
}

page_snap::pdf_x& page_snap::pdf_x::set_finished_callback(wkhtmltopdf_int_callback cb)
{
	wkhtmltopdf_set_finished_callback(m_converter, cb);
	return *this;
}

