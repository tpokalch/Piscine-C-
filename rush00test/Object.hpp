/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Object.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbesbes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 15:17:29 by abbesbes          #+#    #+#             */
/*   Updated: 2019/12/08 23:07:10 by dsamarsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPACEOBJECT_HPP
# define SPACEOBJECT_HPP

# include <string>
#include "Point.hpp"

class Object {
public:
    Object(void);
    Object(Point pos);
    Object(Object const & src);
    virtual ~Object(void);

    Object &  operator=(Object const & src);

	virtual void	e_move(int i) = 0;
	virtual	void	draw() = 0;
    virtual void   move(void) = 0;
    Point          getPos(void) const;

protected:
    Point            _pos;
};

#endif
