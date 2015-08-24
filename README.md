# wimage
convert web page to image


###Sample
		page_snap::page_default_data default_data;
		default_data.save_path(".");
		
		page_snap::page()
			.url("http://www.baidu.com")
			.img_fmt("jpeg")
			.save_image("baidu.jpg");
			
		page_snap::page()
			.url("http://www.baidu.com")
			.save_pdf("baidu.pdf");