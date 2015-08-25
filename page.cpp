#include "page.h"



page_snap::page& page_snap::page::url(const std::string& val)
{
	m_page_data.url(val);
	return *this;
}

page_snap::page& page_snap::page::img_fmt(const std::string& val)
{
	m_page_data.img_fmt(val);
	return *this;
}


page_snap::pdf_x& page_snap::page::to_pdf(const std::string& val)
{
	m_page_data.save_name(val);
	return m_pdf.init_wk(m_page_data.to_wk_pdf_params());
}

page_snap::image_x& page_snap::page::to_image(const std::string& val)
{
	m_page_data.save_name(val);
	return m_image.init_wk(m_page_data.to_wk_image_params());
}
