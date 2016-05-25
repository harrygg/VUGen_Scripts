Action()
{

	lr_start_transaction("1_Landing");

	web_reg_find("Text=???? ??? ????? ????????", 
		LAST);

	web_add_header("Accept-Language", 
		"en-US");

	web_url("kodibg.org", 
		"URL=https://kodibg.org/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/forum/images/square/bodybg.png", "Referer=https://kodibg.org/forum/", ENDITEM, 
		"Url=/forum/images/square/font-awesome/fonts/fontawesome-webfont.woff?v=4.2.0", "Referer=https://kodibg.org/forum/", ENDITEM, 
		"Url=/forum/images/kodi-logo.png", "Referer=https://kodibg.org/forum/", ENDITEM, 
		"Url=/forum/images/forum_icon_sprite.png", "Referer=https://kodibg.org/forum/", ENDITEM, 
		LAST);

	lr_end_transaction("1_Landing",LR_AUTO);

	return 0;
}