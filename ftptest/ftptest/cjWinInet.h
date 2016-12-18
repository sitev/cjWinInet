#pragma once

#include <windows.h> 
#include <wininet.h> 


class WinInet
{
public:
	HINTERNET hInternet;
	HINTERNET hFtpSession;
	LPCTSTR adressFTP, login, pass;
	

	void connectFTP(LPCTSTR adressFTP, LPCTSTR login, LPCTSTR pass);
	WinInet();
	~WinInet();
};

