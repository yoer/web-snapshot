# wimage
convert web page to image


###Sample

		void image_progress_changed(wkhtmltoimage_converter * c, int p) {
			printf("%3d%%\r", p);
			fflush(stdout);
		}
		
		void pdf_progress_changed(wkhtmltopdf_converter * c, int p) {
			printf("%3d%%\r",p);
			fflush(stdout);
		}

		page_snap::page_default_data default_data;
		default_data.save_path(".");
		
		page_snap::page()
			.url("http://www.baidu.com")
			.img_fmt("jpeg")
			.to_image("baidu.jpg")
			.set_progress_changed_callback(image_progress_changed)
			.save();
			
		page_snap::page()
			.url("http://www.baidu.com")
			.to_pdf("baidu.pdf")
			.set_progress_changed_callback(pdf_progress_changed)
			.save();
