#pragma once
#include <string>
#include <vector>
#include <iomanip>
#include <Windows.h>
#include <mutex>

#include "GameStruct.h"

// ��ǰ�����汾
extern const std::wstring devVersion;

// Ŀ�����ID
extern DWORD targetPID;
// Ŀ���������
extern std::wstring targetProcName;
// Ŀ�괰������
extern std::wstring targetWndName;

// Ŀ�괰�ھ��
extern HWND hTargetWnd;
// Ŀ�괰��Rect
extern RECT targetRect;
// Ŀ�괰�ڿ��
extern unsigned int targetWndWidth;
// Ŀ�괰�ڳ���
extern unsigned int targetWndHeight;