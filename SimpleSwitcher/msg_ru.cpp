#include "stdafx.h"
#include "resource.h"

void InitMessages_Ru()
{
	ZeroMemory(c_messages, sizeof(c_messages));

	c_messages[AM_COMMON] = L"�����";
	c_messages[AM_2] = L"�������������";
	c_messages[AM_3] = L"����� ���������";
	c_messages[AM_4] = L"����������� Alt �� �������������� ��-�� ������������ Windows";
	c_messages[AM_5] = L"[�� ������]";
	c_messages[AM_6] = L" (��������� ������������ Windows)";
	c_messages[AM_7] = L"������ 'Scancode Map' ��� ����������";
	c_messages[AM_ERROR] = L"������";
	c_messages[AM_LANG] = L"���������";
	c_messages[AM_ENG] = L"����������";
	c_messages[AM_RUS] = L"�������";
	c_messages[AM_NEED_REST] = L"��������� ���������� ���������";
	c_messages[AM_VERS] = L"������: ";
	c_messages[AM_CaptAb] = L"� ��������� - SimpleSwitcher";
	c_messages[AM_CLOSE] = L"�������";

	c_messages[AM_SHOW] = L"��������";
	c_messages[AM_ENABLE] = L"��������";
	c_messages[AM_ABOUT] = L"� ���������";
	c_messages[AM_EXIT] = L"�����";

}

void InitDialogs_Ru()
{
	ZeroMemory(c_dialogs, sizeof(c_dialogs));

	c_dialogs[SD_HOTKEY] = IDD_DIALOG_HOTKEY_RU;
	c_dialogs[SD_LAY] = IDD_DIALOG_PAGE_CHLAY_RU;
	c_dialogs[SD_ADV] = IDD_DIALOG_PAGEADV_RU;
	c_dialogs[SD_MAINMENU] = IDD_DIALOG_PAGEMAIN_RU;
}