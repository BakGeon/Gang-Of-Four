#pragma once
#include "Singleton.h"

class ConsoleLib : public Singleton<ConsoleLib>
{
public:
	void SetCursor(short x, short y);
	void SetColor(int color, int bgcolor = 0);
	void SetColor(char drawable);
};

