#pragma once

#include <string>
#include <vector>

#include "wkhtmltox/image.h"
#include "wkhtmltox/pdf.h"

namespace page_snap
{
	typedef std::pair<std::string, std::string> wk_param;
	typedef std::vector<wk_param> wk_params;

	class wk_setting_name{
	public:
		static const std::string pdf_in;
		static const std::string pdf_out;
		static const std::string img_in;
		static const std::string img_out;
		static const std::string img_fmt;

	};
}