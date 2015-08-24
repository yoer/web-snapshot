#pragma once

#include "page_data.h"

namespace page_snap
{
	class page
	{
	public:
		page& url(const std::string& val);
		page& width(int val);
		page& height(int val);
		bool save_image(const std::string& val);
		bool save_pdf(const std::string& val);
	
	private:
		page_data m_page_data;
	};
}

