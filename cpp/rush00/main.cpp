/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsamarsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 11:40:21 by dsamarsk          #+#    #+#             */
/*   Updated: 2019/12/08 23:18:02 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Display.hpp"
#include "Game.hpp"
#include "Player.hpp"
#include "Enemy.hpp"
#include <string>
#include <iostream>


int main()
{
	Game	game;
	Display	win;
	int		key;	
	Object *p = new Player;	
	Enemy e[10];
//	Object *enemy = new Enemy;
	int i;
	int k = 0;

	win.init();
	while (game.getStatus())
	{
		i = 0;
		erase();
		p->draw();
		p->move();
		while (i < 10)
		{
			e[i].move();
			i++;
		}
		system("leaks -q ft_retro");
		
		win.moveObjects(game);
	//	usleep(360000);
		k++;
	}
	endwin();			//End curses mode

	return (0);
}
