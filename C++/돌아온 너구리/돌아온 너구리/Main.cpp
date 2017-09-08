#pragma once
#include "stdafx.h"
#include "Map.h"
#include "ConsoleLib.h"

// Define
#define Lib ConsoleLib::GetInstance()


int main(void)
{
	for (auto y : map)
	{
		for (auto x : y)
		{
			Lib->SetColor(x);
			cout << x;
		}

		cout << endl;
	}
}