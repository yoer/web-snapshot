#include "page.h"

#include "image.h"
#include "pdf.h"


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


page_snap::page_result page_snap::page::save_pdf(const std::string& val)
{
	m_page_data.save_name(val);
	return page_snap::pdf().init_wk(m_page_data.to_wk_pdf_params()).save();
}

page_snap::page_result page_snap::page::save_image(const std::string& val)
{
	m_page_data.save_name(val);
	return page_snap::image().init_wk(m_page_data.to_wk_image_params()).save();
}
