#include "page.h"

#include "image.h"
#include "pdf.h"


page_snap::page& page_snap::page::height(int val)
{
	m_page_data.height(val);
	return *this;
}

page_snap::page& page_snap::page::width(int val)
{
	m_page_data.width(val);
	return *this;
}

page_snap::page& page_snap::page::url(const std::string& val)
{
	m_page_data.url(val);
	return *this;
}

bool page_snap::page::save_pdf(const std::string& val)
{
	m_page_data.save_name(val);
	return page_snap::image::save(m_page_data);
}

bool page_snap::page::save_image(const std::string& val)
{
	m_page_data.save_name(val);
	return page_snap::pdf::save(m_page_data);
}
