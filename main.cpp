
#include <iostream>

#include "page.h"
#include "page_data.h"
#include "wkconst.h"

int main(int argc, char *argv[])
{
	page_snap::page_default_data default_data;
	default_data.save_path(".");

	page_snap::page().url("http://www.baidu.com").img_fmt("jpeg").to_image("baidu.jpg").save();
	page_snap::page().url("http://www.baidu.com").to_pdf("baidu.pdf").save();

	return 1;
}