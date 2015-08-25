#pragma once

#include "wkhtmltox/pdf.h"

#include "wkconst.h"
#include "page_data.h"

namespace page_snap
{
	class pdf_x
	{
	public:
		pdf_x();;
		virtual ~pdf_x();

	public:
		pdf_x& init_wk(const page_snap::wk_params& data);
		page_result save();

	public:
		pdf_x& set_warning_callback(wkhtmltopdf_str_callback cb);
		pdf_x& set_error_callback(wkhtmltopdf_str_callback cb);
		pdf_x& set_phase_changed_callback(wkhtmltopdf_void_callback cb);
		pdf_x& set_progress_changed_callback(wkhtmltopdf_int_callback cb);
		pdf_x& set_finished_callback(wkhtmltopdf_int_callback cb);


	private:
		std::vector<std::string> object_setting_key() const;
		std::vector<std::string> global_setting_key() const;

	private:
		wkhtmltopdf_converter* m_converter;
		wkhtmltopdf_object_settings* m_object_setting;
		wkhtmltopdf_global_settings* m_global_setting;
	};

}