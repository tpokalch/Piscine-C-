/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Display.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsamarsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 14:08:02 by dsamarsk          #+#    #+#             */
/*   Updated: 2019/12/08 23:07:17 by dsamarsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_HPP
# define DISPLAY_HPP
# include "Game.hpp"

class		Display
{
public:
	Display();
	Display(Display const &src);
	Display &operator=(Display const &rhs);
	~Display();

	void	init();
	void	update();

	void	moveObjects(Game &g);
	
	int 	getH();
	int 	getW();

private:
	int				m_key;
	static int		m_win_h;
	static int		m_win_w;
};

#endif
