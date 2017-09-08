#include "stdafx.h"
#include "ConsoleLib.h"


void ConsoleLib::SetCursor(short x, short y)
{
	COORD point = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), point);
}

void ConsoleLib::SetColor(int color, int bgcolor)
{
	color &= 0xf;
	bgcolor &= 0xf;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bgcolor << 4) | color);
}

void ConsoleLib::SetColor(char drawable)
{
	int color = COLOR::WHITE;
	int bgcolor = COLOR::BLACK;

	switch (drawable)
	{
	case '@':
		color = COLOR::DARK_RED & 0xf;
		bgcolor = COLOR::BLACK & 0xf;
		break;
	case 'l':
		color = COLOR::GRAY & 0xf;
		bgcolor = 0 & 0xf;
		break;
	case 'I':
		color = COLOR::YELLOW & 0xf;
		bgcolor = 0 & 0xf;
		break;
	case '&':
		color = COLOR::DARK_PURPLE & 0xf;
		bgcolor = 0 & 0xf;
		break;
	case '%':
		color = COLOR::SKY & 0xf;
		bgcolor = 0 & 0xf;
		break;
	default:
		break;
	}

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bgcolor << 4) | color);
}
