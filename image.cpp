#include "image.h"

#include <algorithm>

#include "page_data.h"

page_snap::image::image()
{
	wkhtmltoimage_init(false);
}

page_snap::image::~image()
{
	wkhtmltoimage_destroy_converter(m_converter);
	wkhtmltoimage_deinit();
}

page_snap::image& page_snap::image::init_wk(const page_snap::wk_params& params)
{
	m_global_setting = wkhtmltoimage_create_global_settings();

	std::for_each(params.begin(), params.end(), [&](const page_snap::wk_param& param){
		wkhtmltoimage_set_global_setting(m_global_setting, param.first.c_str(), param.second.c_str());
	});

	m_converter = wkhtmltoimage_create_converter(m_global_setting, NULL);
	return *this;
}

page_snap::page_result page_snap::image::save()
{
	page_snap::page_result rs;
	if (!wkhtmltoimage_convert(m_converter))
	{
		rs.state(false);
		rs.error("Convertion failed");
	}

	rs.http_error_code(wkhtmltoimage_http_error_code(m_converter));

	return rs;
}

page_snap::image& page_snap::image::set_warning_callback(wkhtmltoimage_str_callback cb)
{
	wkhtmltoimage_set_warning_callback(m_converter, cb);
	return *this;
}

page_snap::image& page_snap::image::set_error_callback(wkhtmltoimage_str_callback cb)
{
	wkhtmltoimage_set_error_callback(m_converter, cb);
	return *this;
}

page_snap::image& page_snap::image::set_phase_changed_callback(wkhtmltoimage_void_callback cb)
{
	wkhtmltoimage_set_phase_changed_callback(m_converter, cb);
	return *this;
}

page_snap::image& page_snap::image::set_progress_changed_callback(wkhtmltoimage_int_callback cb)
{
	wkhtmltoimage_set_progress_changed_callback(m_converter, cb);
	return *this;
}

page_snap::image& page_snap::image::set_finished_callback(wkhtmltoimage_int_callback cb)
{
	wkhtmltoimage_set_finished_callback(m_converter, cb);
	return *this;
}
