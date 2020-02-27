#include "Object.hpp"
#include "Point.hpp"
#include "Enemy.hpp"
#include "Game.hpp"

void Enemy::move()
{
	_pos.y--;
	draw();
}


void Enemy::draw()
{
	mvaddch(_pos.x, (115 - _pos.y) % 115,'*');
}


Enemy::~Enemy(void)
{
}


Enemy::Enemy()
{
	_pos.x = rand() % 30;
	_pos.y = rand() % 115;
}



