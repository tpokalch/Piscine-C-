/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsamarsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 15:59:09 by dsamarsk          #+#    #+#             */
/*   Updated: 2019/12/08 17:16:17 by dsamarsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_HPP
# define GAME_HPP
# include <iostream>
# include <string>
# include <ncurses.h>
# include <unistd.h>
# include "Object.hpp"

class		Game
{
public:
	Game();
	virtual ~Game();
	
	bool	getStatus() const;
	void	setStatus(bool);

private:
	Game(Game const &src);
	Game &operator=(Game const &rhs);

	bool		m_game_loop;
	Object		*m_obj;
};

#endif
