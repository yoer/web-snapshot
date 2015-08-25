#pragma once

#include "page_data.h"
#include "image_x.h"
#include "pdf_x.h"

namespace page_snap
{
	class page
	{
	public:
		page& url(const std::string& val);
		page& img_fmt(const std::string& val);

	public:
		image_x& to_image(const std::string& val);
		pdf_x& to_pdf(const std::string& val);
	
	private:
		page_data m_page_data;
		pdf_x m_pdf;
		image_x m_image;
	};
}

