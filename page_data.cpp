#include "page_data.h"

#include "wkconst.h"
#include "wk_setting.h"

//////////////////////////////////////////////////////////////////////////
page_snap::page_data::page_data() 
: m_save_path(page_snap::page_default_data::save_path())
{

}

void page_snap::page_data::save_path(const std::string& val)
{
	m_save_path = val;
}

const std::string& page_snap::page_data::save_path() const
{
	return m_save_path;
}

void page_snap::page_data::save_name(const std::string& val)
{
	m_save_name = val;
}

const std::string& page_snap::page_data::save_name() const
{
	return m_save_name;
}

void page_snap::page_data::url(const std::string& val)
{
	m_url = val;
}

const std::string& page_snap::page_data::url() const
{
	return m_url;
}

void page_snap::page_data::img_fmt(const std::string& val)
{
	m_img_fmt = val;
}

const std::string& page_snap::page_data::img_fmt() const
{
	return m_img_fmt;
}

page_snap::wk_params page_snap::page_data::to_wk_image_params() const
{
	page_snap::wk_params params;
	params.push_back(std::make_pair(page_snap::setting_img_in, url()));
	params.push_back(std::make_pair(page_snap::setting_img_out, save_path() + "/" + save_name()));
	params.push_back(std::make_pair(page_snap::setting_img_fmt, img_fmt()));

	return params;
}

page_snap::wk_params page_snap::page_data::to_wk_pdf_params() const
{
	page_snap::wk_params params;
	params.push_back(std::make_pair(page_snap::setting_pdf_object_in, url()));
	params.push_back(std::make_pair(page_snap::setting_pdf_global_out, save_path() + "/" + save_name()));

	return params;
}

//////////////////////////////////////////////////////////////////////////
std::string page_snap::page_default_data::g_save_path = ".";
void page_snap::page_default_data::save_path(const std::string& val)
{
	g_save_path = val;
}

const std::string& page_snap::page_default_data::save_path() 
{
	return g_save_path;
}

//////////////////////////////////////////////////////////////////////////
void page_snap::page_result::result(std::string val)
{
	m_result = val;
}

std::string page_snap::page_result::result() const
{
	return m_result;
}

void page_snap::page_result::error(std::string val)
{
	m_error = val;
}

std::string page_snap::page_result::error() const
{
	return m_error;
}

void page_snap::page_result::state(bool val)
{
	m_state = val;
}

bool page_snap::page_result::state() const
{
	return m_state;
}
