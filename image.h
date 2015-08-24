#pragma once

#include "wkhtmltox/image.h"

#include "wkconst.h"
#include "page_data.h"

namespace page_snap
{
	class image
	{
	public:
		image();
		virtual ~image();

	public:
		image& init_wk(const page_snap::wk_params& data);
		page_result save();

	public:
		image& set_warning_callback(wkhtmltoimage_str_callback cb);
		image& set_error_callback(wkhtmltoimage_str_callback cb);
		image& set_phase_changed_callback(wkhtmltoimage_void_callback cb);
		image& set_progress_changed_callback(wkhtmltoimage_int_callback cb);
		image& set_finished_callback(wkhtmltoimage_int_callback cb);

	private:
		wkhtmltoimage_converter* m_converter;
		wkhtmltoimage_global_settings * m_global_setting;
	};
}
