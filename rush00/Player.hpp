/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsamarsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 18:59:11 by dsamarsk          #+#    #+#             */
/*   Updated: 2019/12/08 21:22:34 by dsamarsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_HPP
# define PLAYER_HPP
# include "Object.hpp"

class		Player : public Object
{
public:
    Player(void);
    Player(Point pos);
    Player(Player const & src);
    virtual ~Player(void);

    Player &  operator=(Player const & src);
	virtual void   move(void);
	virtual void	draw();	
	virtual void	e_move(int i);

};

#endif
