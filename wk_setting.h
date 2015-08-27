#pragma once

#include <string>

namespace page_snap
{
	//	Pdf global settings
	//	The wkhtmltopdf_global_settings structure contains the following settings :
	//////////////////////////////////////////////////////////////////////////
	static const std::string setting_pdf_global_out = "out";	//	The path of the output file, if "-" output is sent to stdout, if empty the output is stored in a buffer.
	static const std::string setting_pdf_global_size_paperSize = "size.paperSize";	//	The paper size of the output document, e.g. "A4".
	static const std::string setting_pdf_global_size_width = "size.width";	//	The with of the output document, e.g. "4cm".
	static const std::string setting_pdf_global_size_height = "size.height";	//	The height of the output document, e.g. "12in".
	static const std::string setting_pdf_global_orientation = "orientation";	//	The orientation of the output document, must be either "Landscape" or "Portrait".
	static const std::string setting_pdf_global_colorMode = "colorMode";	//	Should the output be printed in color or gray scale, must be either "Color" or "Grayscale"
	static const std::string setting_pdf_global_resolution = "resolution";	//	Most likely has no effect.
	static const std::string setting_pdf_global_dpi = "dpi";	//	What dpi should we use when printing, e.g. "80".
	static const std::string setting_pdf_global_pageOffset = "pageOffset";	//	A number that is added to all page numbers when printing headers, footers and table of content.
	static const std::string setting_pdf_global_copies = "copies";	//	How many copies should we print ? .e.g. "2".
	static const std::string setting_pdf_global_collate = "collate ";	//	Should the copies be collated ? Must be either "true" or "false".
	static const std::string setting_pdf_global_outline = "outline";	//	Should a outline(table of content in the sidebar) be generated and put into the PDF ? Must be either "true" or false".
	static const std::string setting_pdf_global_outlineDepth = "outlineDepth";	//	The maximal depth of the outline, e.g. "4".
	static const std::string setting_pdf_global_dumpOutline = "dumpOutline";	//	If not set to the empty string a XML representation of the outline is dumped to this file.
	static const std::string setting_pdf_global_documentTitle = "documentTitle";	//	The title of the PDF document.
	static const std::string setting_pdf_global_useCompression = "useCompression";	//	Should we use loss less compression when creating the pdf file ? Must be either "true" or "false".
	static const std::string setting_pdf_global_margin_top = "margin.top";	//	Size of the top margin, e.g. "2cm"
	static const std::string setting_pdf_global_margin_bottom = "margin.bottom";	//	Size of the bottom margin, e.g. "2cm"
	static const std::string setting_pdf_global_margin_left = "margin.left";	//	Size of the left margin, e.g. "2cm"
	static const std::string setting_pdf_global_margin_right = "margin.right";	//	Size of the right margin, e.g. "2cm"
	static const std::string setting_pdf_global_imageDPI = "imageDPI";	//	The maximal DPI to use for images in the pdf document.
	static const std::string setting_pdf_global_imageQuality = "imageQuality";	//	The jpeg compression factor to use when producing the pdf document, e.g. "92".
	static const std::string setting_pdf_global_load_cookieJar = "load.cookieJar";	//	Path of file used to load and store cookies.

	//	Pdf object settings
	//	The wkhtmltopdf_object_settings structure contains the following settings :
	//////////////////////////////////////////////////////////////////////////
	static const std::string setting_pdf_object_in = "page";	//	The URL or path of the web page to convert, if "-" input is read from stdin.
	static const std::string setting_pdf_object_toc_useDottedLines = "toc.useDottedLines";	//	Should we use a dotted line when creating a table of content ? Must be either "true" or "false".
	static const std::string setting_pdf_object_toc_captionText = "toc.captionText";	//	The caption to use when creating a table of content.
	static const std::string setting_pdf_object_toc_forwardLinks = "toc.forwardLinks";	//	Should we create links from the table of content into the actual content ? Must be either "true or "false.
	static const std::string setting_pdf_object_toc_backLinks = "toc.backLinks";	//	Should we link back from the content to this table of content.
	static const std::string setting_pdf_object_toc_indentation = "toc.indentation";	//	The indentation used for every table of content level, e.g. "2em".
	static const std::string setting_pdf_object_toc_fontScale = "toc.fontScale";	//	How much should we scale down the font for every toc level ? E.g. "0.8"
	static const std::string setting_pdf_object_useExternalLinks = "useExternalLinks";	//	Should external links in the HTML document be converted into external pdf links ? Must be either "true" or "false.
	static const std::string setting_pdf_object_useLocalLinks = "useLocalLinks";	//	Should internal links in the HTML document be converted into pdf references ? Must be either "true" or "false"
	static const std::string setting_pdf_object_replacements = "replacements";	//	TODO
	static const std::string setting_pdf_object_produceForms = "produceForms";	//	Should we turn HTML forms into PDF forms ? Must be either "true" or file".
	static const std::string setting_pdf_object_includeInOutline = "includeInOutline";	//	Should the sections from this document be included in the outline and table of content ?
	static const std::string setting_pdf_object_pagesCount = "pagesCount";	//	Should we count the pages of this document, in the counter used for TOC, headers and footers ?
	static const std::string setting_pdf_object_tocXsl = "tocXsl";	//	If not empty this object is a table of content object, "page" is ignored and this xsl style sheet is used to convert the outline XML into a table of content.


	//	Image settings
	//	The wkhtmltoimage_global_settings structure contains the following settings :
	//////////////////////////////////////////////////////////////////////////
	static const std::string setting_img_in = "in";	//	The URL or path of the input file, if "-" stdin is used. E.g. "http://google.com"
	static const std::string setting_img_out = "out";	//	The path of the output file, if "-" stdout is used, if empty the content is stored to a internalBuffer.
	static const std::string setting_img_fmt = "fmt";	//	The output format to use, must be either "", "jpg", "png", "bmp" or "svg".
	static const std::string setting_img_width = "screenWidth";	//	The with of the screen used to render is pixels, e.g "800".
	static const std::string setting_img_auto_width = "smartWidth";	//	Should we expand the screenWidth if the content does not fit? must be either "true" or "false".
	static const std::string setting_img_quality = "quality ";	//	The compression factor to use when outputting a JPEG image. E.g. "94". 
	static const std::string setting_img_crop_left = "crop.left";	//	left / x coordinate of the window to capture in pixels.E.g. "200"
	static const std::string setting_img_crop_top = "crop.top";  //	top / y coordinate of the window to capture in pixels.E.g. "200"
	static const std::string setting_img_crop_width = "crop.width"; //	Width of the window to capture in pixels.E.g. "200"
	static const std::string setting_img_crop_height = "crop.height";	//	Height of the window to capture in pixels.E.g. "200"
	static const std::string setting_img_load_cookieJar = "load.cookieJar";	//	Path of file used to load and store cookies.
	static const std::string setting_img_transparent = "transparent";	//	transparent When outputting a PNG or SVG, make the white background transparent.Must be either "true" or "false"

	//	Header and footer settings
	//	The same settings can be applied for headers and footers, here there are explained in terms of the header.
	static const std::string setting_header_fontSize = "header.fontSize";	//	The font size to use for the header, e.g. "13"
	static const std::string setting_header_fontName = "header.fontName";	//	The name of the font to use for the header.e.g. "times"
	static const std::string setting_header_left = "header.left";	//	The string to print in the left part of the header, note that some sequences are replaced in this string, see the wkhtmltopdf manual.
	static const std::string setting_header_center = "header.center";	//	The text to print in the center part of the header.
	static const std::string setting_header_right = "header.right";	//	The text to print in the right part of the header.
	static const std::string setting_header_line = "header.line";	//	Whether a line should be printed under the header(either "true" or "false").
	static const std::string setting_header_spacing = "header.spacing";	//	The amount of space to put between the header and the content, e.g. "1.8".Be aware that if this is too large the header will be printed outside the pdf document.This can be corrected with the margin.top setting.
	static const std::string setting_header_htmlUrl = "header.htmlUrl";	//	Url for a HTML document to use for the header.

	//	Object Specific loading settings
	//	The following settings apply for object loading.
	static const std::string setting_load_username = "load.username";	//	The user name to use when loging into a website, E.g. "bart"
	static const std::string setting_load_password = "load.password";	//	The password to used when logging into a website, E.g. "elbarto"
	static const std::string setting_load_jsdelay = "load.jsdelay";	//	The mount of time in milliseconds to wait after a page has done loading until it is actually printed.E.g. "1200".We will wait this amount of time or until, javascript calls window.print().
	static const std::string setting_load_zoomFactor = "load.zoomFactor";	//	How much should we zoom in on the content ? E.g. "2.2".
	static const std::string setting_load_customHeaders = "load.customHeaders";	//	TODO
	static const std::string setting_load_repertCustomHeaders = "load.repertCustomHeaders";	//	Should the custom headers be sent all elements loaded instead of only the main page ? Must be either "true" or "false".
	static const std::string setting_load_cookies = "load.cookies";	//	TODO
	static const std::string setting_load_post = "load.post";	//	TODO
	static const std::string setting_load_blockLocalFileAccess = "load.blockLocalFileAccess";	//	Disallow local and piped files to access other local files.Must be either "true" or "false".
	static const std::string setting_load_stopSlowScript = "load.stopSlowScript";	//	Stop slow running javascript.Must be either "true" or "false".
	static const std::string setting_load_debugJavascript = "load.debugJavascript";	//	Forward javascript warnings and errors to the warning callback.Must be either "true" or "false".
	static const std::string setting_ = "load.loadErrorHandling";	//	How should we handle obejcts that fail to load.Must be one of :
	//	"abort" Abort the convertion process
	//	"skip" Do not add the object to the final output
	//	"ignore" Try to add the object to the final output.
	static const std::string setting_load_proxy = "load.proxy";	//	String describing what proxy to use when loading the object.
	static const std::string setting_load_runScript = "load.runScript";	//	TODO


	//	Web page specific settings
	//	The following web page specific settings apply
	static const std::string setting_web_background = "web.background";	//	Should we print the background ? Must be either "true" or "false".
	static const std::string setting_web_loadImages = "web.loadImages";	//	Should we load images ? Must be either "true" or "false".
	static const std::string setting_web_enableJavascript = "web.enableJavascript";	//	Should we enable javascript ? Must be either "true" or "false".
	static const std::string setting_web_enableIntelligentShrinking = "web.enableIntelligentShrinking";	//	Should we enable intelligent shrinkng to fit more content on one page ? Must be either "true" or "false".Has no effect for wkhtmltoimage.
	static const std::string setting_web_minimumFontSize = "web.minimumFontSize";	//	The minimum font size allowed.E.g. "9"
	static const std::string setting_web_printMediaType = "web.printMediaType";	//	Should the content be printed using the print media type instead of the screen media type.Must be either "true" or "false".Has no effect for wkhtmltoimage.
	static const std::string setting_web_defaultEncoding = "web.defaultEncoding";	//	What encoding should we guess content is using if they do not specify it properly ? E.g. "utf-8"
	static const std::string setting_web_userStyleSheet = "web.userStyleSheet";	//	Url er path to a user specified style sheet.
	static const std::string setting_web_enablePlugins = "web.enablePlugins";	//	Should we enable NS plugins, must be either "true" or "false".Enabling this will have limited success.



}