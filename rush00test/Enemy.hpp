
#ifndef ENEMY_HPP
#define ENEMY_HPP

#include "Point.hpp"

class Enemy
{
	public:
		Enemy(void);
	   Enemy(Enemy const & src);
		~Enemy(void);

	void	move();
	void	draw();
	Point _pos;
};

#endif
