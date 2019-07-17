#include "Header.h"

Ball* Ball::instance = nullptr;

Ball* Ball::getInstance()
{
	if (!instance)
		instance = new Ball;
	return instance;
}

void Game::play()
{
	cout << "Ready!" << endl;
}