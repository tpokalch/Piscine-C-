/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsamarsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 16:00:13 by dsamarsk          #+#    #+#             */
/*   Updated: 2019/12/08 17:33:47 by dsamarsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Game.hpp"

Game::Game()
{
	m_game_loop = true;
	m_obj = NULL;
}

Game::Game(Game const &src)
{}

Game &Game::operator=(Game const &rhs)
{}

Game::~Game()
{
//del??
//endwin();
}

bool	Game::getStatus() const
{
	return (m_game_loop);
}


void	Game::setStatus(bool status)
{
	m_game_loop = status;
	std::cout << m_game_loop << std::endl;
}
