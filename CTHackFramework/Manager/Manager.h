#pragma once

#include <string>
#include <vector>

#include "../Process/Process.h"
#include "../Game/GameStruct.h"
#include "../Game/GameData.h"

class Manager
{
public:
	// ���캯��
	Manager();
	// ��ֹ���Ƴ�ʼ���븳ֵ����
	Manager(const Manager&) = delete;
	Manager& operator = (const Manager&) = delete;
	// ��������
	~Manager();

public:
	void HandleKeyBoardInput();
	void HandleMouseInput();
	void UpdateFromConfigFile();

private:
};