#pragma once

#include <string>

#include "wkconst.h"

namespace page_snap
{
	class page_default_data{
	public:
		static const std::string& save_path();
		static void save_path(const std::string& val);
	private:
		static std::string g_save_path;
	};

	class page_data
	{
	public:
		page_data();

	public:
		const std::string& url() const;
		void url(const std::string& val);

		const std::string& save_name() const;
		void save_name(const std::string& val);

		const std::string& save_path() const;
		void save_path(const std::string& val);

		const std::string& img_fmt() const;
		void img_fmt(const std::string& val);

		wk_params to_wk_image_params() const;
		wk_params to_wk_pdf_params() const;

	private:
		std::string m_url;
		std::string m_img_fmt;
		std::string m_save_name;
		std::string m_save_path;
	};

	class page_result{
	public:
		bool state() const;
		void state(bool val);
		std::string error() const;
		void error(std::string val);
		std::string result() const;
		void result(std::string val);
		int http_error_code() const { return m_http_error_code; }
		void http_error_code(int val) { m_http_error_code = val; }
		
	private: 
		bool m_state;
		int m_http_error_code;
		std::string m_error;
		std::string m_result;
	};
}
