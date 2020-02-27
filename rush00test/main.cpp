/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsamarsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 11:40:21 by dsamarsk          #+#    #+#             */
/*   Updated: 2019/12/08 23:19:52 by tpokalch         ###   ########.fr       */
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
			if (p->getPos().x == (115 - e[i]._pos.y) % 115 && p->getPos().y == e[i]._pos.x)
			{	
				system("leaks ft_retro");
				endwin();
				exit(1);
			}
			i++;			
		}
		
		win.moveObjects(game);
		usleep(36000);
		k++;
	}

	endwin();
	return (0);
}
