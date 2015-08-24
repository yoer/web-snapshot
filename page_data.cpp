#include "page_data.h"


//////////////////////////////////////////////////////////////////////////
page_snap::page_data::page_data() 
: m_save_path(page_snap::page_default_data::save_path())
{

}

void page_snap::page_data::save_path(std::string val)
{
	m_save_path = val;
}

const std::string& page_snap::page_data::save_path() const
{
	return m_save_path;
}

void page_snap::page_data::save_name(std::string val)
{
	m_save_name = val;
}

const std::string& page_snap::page_data::save_name() const
{
	return m_save_name;
}

void page_snap::page_data::url(std::string val)
{
	m_url = val;
}

const std::string& page_snap::page_data::url() const
{
	return m_url;
}

void page_snap::page_data::height(int val)
{
	m_height = val;
}

int page_snap::page_data::height() const
{
	return m_height;
}

void page_snap::page_data::width(int val)
{
	m_width = val;
}

int page_snap::page_data::width() const
{
	return m_width;
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
