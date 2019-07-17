#pragma once
#include <iostream>
#include <conio.h>

using namespace std;
class Ball
{
private:
	static Ball* instance;
public:
	static Ball* getInstance();
	Ball() = default;
	~Ball() = default;
	Ball(const Ball&) = delete;
	Ball& operator=(const Ball&) = delete;



};


class Game
{
private:
	Ball* m_ball = Ball::getInstance();
public:
	Game() = default;
	void play();
};

