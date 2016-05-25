Action()
{

	lr_start_transaction("1_Landing");

	web_add_cookie("_ga=GA1.2.78849990.1452871857; DOMAIN=kodibg.org");

	web_add_cookie("mybb[lastvisit]=1457424468; DOMAIN=kodibg.org");

	web_add_cookie("mybb[lastactive]=1459782674; DOMAIN=kodibg.org");

	web_add_cookie("loginattempts=1; DOMAIN=kodibg.org");

	web_add_cookie("mybbuser=2_JTnCmPVPAO23wOWp7HEUNpgWpBpyhj7JDvq686nJcBCklPsyLl; DOMAIN=kodibg.org");

	web_add_cookie("sid=edafd115805a4bb739d65bc63e0d95f7; DOMAIN=kodibg.org");

	web_add_cookie("_gat=1; DOMAIN=kodibg.org");

	web_reg_find("Text=???? ??? ????? ????????", 
		LAST);

	web_add_header("Accept-Language", 
		"en-US");

	web_add_header("DNT", 
		"1");

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
		"Url=https://fonts.gstatic.com/s/exo2/v3/L7cKReMyy06lvTzTWfUEtfesZW2xOQ-xsNqO47m55DA.woff", "Referer=https://kodibg.org/forum/", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/exo2/v3/8C2PVL2WIMUnPF90ukjrZQ.woff", "Referer=https://kodibg.org/forum/", ENDITEM, 
		"Url=/forum/images/kodi-logo.png", "Referer=https://kodibg.org/forum/", ENDITEM, 
		"Url=/forum/images/forum_icon_sprite.png", "Referer=https://kodibg.org/forum/", ENDITEM, 
		"Url=https://www.google-analytics.com/analytics.js", "Referer=https://kodibg.org/forum/", ENDITEM, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		"Url=https://www.google-analytics.com/r/collect?v=1&_v=j43&a=1674409753&t=pageview&_s=1&dl=https%3A%2F%2Fkodibg.org%2Fforum%2F&ul=en-us&de=utf-8&dt=%D0%9A%D0%BE%D0%B4%D0%B8%20%D0%A4%D0%B5%D0%BD%20%D0%A4%D0%BE%D1%80%D1%83%D0%BC%20%D0%91%D1%8A%D0%BB%D0%B3%D0%B0%D1%80%D0%B8%D1%8F&sd=24-bit&sr=1829x1143&vp=1812x1061&je=1&fl=21.0%20r0&_u=AACAAEQAI~&jid=1003885813&cid=78849990.1452871857&tid=UA-69227003-1&_r=1&z=788536190", "Referer=https://kodibg.org/forum/", ENDITEM, 
		LAST);

	lr_end_transaction("1_Landing",LR_AUTO);

	return 0;
}