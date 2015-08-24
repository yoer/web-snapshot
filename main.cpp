
#include <iostream>

#include "page.h"
#include "page_data.h"
#include "wkconst.h"

int main(int argc, char *argv[])
{
	page_snap::page_default_data default_data;
	default_data.save_path(".");

	page_snap::page().url("http://www.baidu.com").img_fmt("jpeg").save_image("baidu.jpg");
	page_snap::page().url("http://www.baidu.com").save_pdf("baidu.pdf");

	return 1;
}