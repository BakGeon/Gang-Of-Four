#pragma once
#include "stdafx.h"
#include "ConsoleLib.h"
class Player
{
public:
	Player();
	~Player();

	void Update();

private:
	void Move(DIR dir);
};

