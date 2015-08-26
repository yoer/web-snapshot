# wimage
convert web page to image


###Sample

		void progress_changed(wkhtmltoimage_converter * c, int p) {
			printf("%3d%%\r", p);
			fflush(stdout);
		}

		page_snap::page_default_data default_data;
		default_data.save_path(".");
		
		page_snap::page()
			.url("http://www.baidu.com")
			.img_fmt("jpeg")
			.set_progress_changed_callback(progress_changed)
			.to_image("baidu.jpg")
			.save();
			
		page_snap::page()
			.url("http://www.baidu.com")
			.set_progress_changed_callback(progress_changed)
			.to_pdf("baidu.pdf")
			.save();
