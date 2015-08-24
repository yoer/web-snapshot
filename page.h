#pragma once

#include "page_data.h"

namespace page_snap
{
	class page
	{
	public:
		page& url(const std::string& val);
		page& img_fmt(const std::string& val);

	public:
		page_result save_image(const std::string& val);
		page_result save_pdf(const std::string& val);
	
	private:
		page_data m_page_data;
	};
}

