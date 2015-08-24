#pragma once

#include <string>

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
		int width() const;
		void width(int val);

		int height() const;
		void height(int val);

		const std::string& url() const;
		void url(std::string val);

		const std::string& save_name() const;
		void save_name(std::string val);

		const std::string& save_path() const;
		void save_path(std::string val);

	private:
		int m_width;
		int m_height;
		std::string m_url;
		std::string m_save_name;
		std::string m_save_path;
	};
}
