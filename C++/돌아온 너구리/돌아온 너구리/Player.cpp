#include "Player.h"



Player::Player()
{
}


Player::~Player()
{
}

void Player::Update()
{
	int key = Lib->GetKey();
	if (key != NULL)
	{
		switch (key)
		{
		case 72:
			Move(DIR::UP);
			break;
		case 75:
			Move(DIR::LEFT);
			break;
		case 77:
			Move(DIR::RIGHT);
			break;
		case 80:
			Move(DIR::DOWN);
			break;
		default:
			break;
		}
	}
}

void Player::Move(DIR dir)
{
}
