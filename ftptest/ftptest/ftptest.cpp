// ftptest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h> 
#include <wininet.h> 
#include <iostream>
#include "cjWinInet.h"

using namespace std; 

#pragma comment(lib, "Wininet")


int _tmain(int argc, _TCHAR* argv[])
{
	WinInet *ftpConn = new WinInet();
	ftpConn->connectFTP("demo.wftpserver.com", "demo-user", "demo-user");
	Sleep(3000);
	return 0;
}

