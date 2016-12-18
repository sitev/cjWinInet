#include "stdafx.h"
#include "cjWinInet.h"
#include <windows.h> 
#include <iostream>
using namespace std;


WinInet::WinInet()
{
}


WinInet::~WinInet()
{
}

void WinInet::connectFTP(LPCTSTR adressFTP, LPCTSTR login, LPCTSTR pass){
	hInternet = InternetOpen(NULL, INTERNET_OPEN_TYPE_DIRECT, NULL, NULL, 0);
	if (hInternet == NULL)
	{
		cout << "ErrorInternetOpen: " << GetLastError();
	}
	else
	{
		hFtpSession = InternetConnect(hInternet, adressFTP, INTERNET_DEFAULT_FTP_PORT, login, pass, INTERNET_SERVICE_FTP, 0, 0);
		if (hFtpSession != NULL)
		{
			cout << "Connected! " << endl;
		}
		else
		{
			cout << "ErrorInternetConnect: " << GetLastError();
		}
	}
};
