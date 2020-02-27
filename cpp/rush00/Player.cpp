/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsamarsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 19:00:42 by dsamarsk          #+#    #+#             */
/*   Updated: 2019/12/08 21:23:04 by dsamarsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.hpp"
#include <ncurses.h>

Player::Player(void) : Object(Point(1, 15))
{}

Player::Player(Point pos)
{}

Player::Player(Player const & src)
{
	_pos = src._pos;
}

Player::~Player(void)
{
//	delete this;
}

Player &Player::operator=(Player const & src)
{
	if (this != &src)
	{
		Object::operator=(src);
	}
	return (*this);
}

void			Player::draw()
{
	mvprintw(getPos().y, getPos().x, ">xxo");
//	mvprintw(getPos().y + 1, getPos().x, ">--D");
//	mvprintw(getPos().y + 2, getPos().x, " <->");
}

void	Player::e_move(int i)
{


}

void   Player::move(void)
{
	int	key;

	key = getch();
	if (key)
	{
		if (key == KEY_LEFT)
			_pos.x -= 1;
		if (key == KEY_RIGHT)
			_pos.x += 1;
		if (key == KEY_UP)
			_pos.y -= 1;
		if (key == KEY_DOWN)
			_pos.y += 1;
	}
}
