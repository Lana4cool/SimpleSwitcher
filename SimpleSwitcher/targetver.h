#pragma once

// ��������� SDKDDKVer.h ������������ ����������� ����� ��������� ��������� ��������� Windows.

// ���� ��������� ��������� ������ ���������� ��� ���������� ������ Windows, �������� WinSDKVer.h �
// ������� ��� ������� _WIN32_WINNT �������� �������������� ��������� ����� ���������� SDKDDKVer.h.

#include <SDKDDKVer.h>

#define SW_VER_1    1
#define SW_VER_2    0
#define SW_VER_3    1
#define SW_VER_4    409

#define _SW_QT(X) #X
#define SW_QT(X) _SW_QT(X)

#define _SW_UT(X) L##X
#define SW_UT(X) _SW_UT(X)

#define SW_VERSION    SW_QT(SW_VER_1.SW_VER_2.SW_VER_3.SW_VER_4) //"1.0.1.409"
#define SW_VERSION_L SW_UT(SW_VERSION)

#define SW_PROGRAM_NAME    "SimpleSwitcher"
#define SW_PROGRAM_NAME_L SW_UT(SW_PROGRAM_NAME)
