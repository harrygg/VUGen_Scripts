//"'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
//" Script Title       : 
//"                      
//" Script Date        : Wed May 18 14:49:17 2016
//"                       
//"'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''

function Action()
{
	lr.startTransaction('1_Landing');

	web.regFind(
		{
			text : '???? ??? ????? ????????', 
			search : 'Body'
		}
	);

	web.url(
		{
			name : 'kodibg.org', 
			url : 'https://kodibg.org/', 
			targetFrame : '', 
			resource : 0, 
			recContentType : 'text/html', 
			referer : '', 
			snapshot : 't1.inf', 
			mode : 'HTML', 
			extraRes :  [
				{url : '/forum/images/square/bodybg.png', referer : 'https://kodibg.org/forum/'},
				{url : '/forum/images/square/font-awesome/fonts/fontawesome-webfont.woff?v=4.2.0', referer : 'https://kodibg.org/forum/'},
				{url : 'https://fonts.gstatic.com/s/exo2/v3/L7cKReMyy06lvTzTWfUEtfesZW2xOQ-xsNqO47m55DA.woff', referer : 'https://kodibg.org/forum/'},
				{url : 'https://fonts.gstatic.com/s/exo2/v3/8C2PVL2WIMUnPF90ukjrZQ.woff', referer : 'https://kodibg.org/forum/'},
				{url : '/forum/images/kodi-logo.png', referer : 'https://kodibg.org/forum/'},
				{url : '/forum/images/forum_icon_sprite.png', referer : 'https://kodibg.org/forum/'}
			]
		}
	);

	lr.endTransaction('1_Landing', lr.AUTO);

	return 0;
}

