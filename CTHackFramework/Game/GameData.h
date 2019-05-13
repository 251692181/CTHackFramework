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
extern const std::wstring targetProcName;
// Ŀ�괰������
extern const std::wstring targetWndName;

// Ŀ�괰�ھ��
extern HWND hTargetWnd;
// Overlay���ھ��
extern HWND hOverlayWnd;
// Ŀ�괰��Rect
extern RECT targetRect;
// Ŀ�괰�ڿ��
extern unsigned int targetWndWidth;
// Ŀ�괰�ڳ���
extern unsigned int targetWndHeight;