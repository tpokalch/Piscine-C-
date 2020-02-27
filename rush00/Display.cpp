/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Display.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsamarsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 14:09:30 by dsamarsk          #+#    #+#             */
/*   Updated: 2019/12/08 20:55:24 by dsamarsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Display.hpp"

Display::Display()
{}

Display::Display(Display const &src)
{}

Display &Display::operator=(Display const &rhs)
{
	if (this != &rhs)
	{
		//copy params
	}
	return (*this);
}

Display::~Display()
{
//delwin(m_win);
}

void	Display::update()
{
	


}

void	Display::moveObjects(Game &game)
{
	m_key = getch();
	if (m_key)
	{
		if (m_key == KEY_LEFT)
		{
			std::cout << "LEFT PRESS" << std::endl;
		}
		if (m_key == KEY_RIGHT)
		{
			std::cout << "RIGHT PRESS" << std::endl;
		}
		if (m_key == KEY_UP)
		{
			std::cout << "UP PRESS" << std::endl;
		}
		if (m_key == KEY_DOWN)
		{
			std::cout << "DOWN PRESS" << std::endl;
		}
		if (m_key == 27)
		{
			std::cout << "ESC" << std::endl;
			game.setStatus(false);
		}
	}
}

void	Display::init()
{
	std::cout << "\e[8;" << getH() << ";" << getW() << "t" << std::endl;
	initscr();
	clear();
	cbreak();
	noecho();
	nodelay(stdscr, TRUE);	
	keypad(stdscr, TRUE);
	curs_set(0);
	erase();
}

int		Display::getH()
{
	return (m_win_h);
}

int		Display::getW()
{
	return (m_win_w);
}

int		Display::m_win_h = 30;
int		Display::m_win_w = 115;
