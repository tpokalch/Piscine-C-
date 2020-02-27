/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Object.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbesbes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 15:19:15 by abbesbes          #+#    #+#             */
/*   Updated: 2019/12/08 20:55:29 by dsamarsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Object.hpp"

Object::Object(void) : _pos(Point(0, 0)) {}

Object::Object(Point pos) : _pos(pos) {}

Object::Object(Object const& src) { *this = src; }

Object::~Object(void) {}

Object& Object::operator=(Object const& src) {
    this->_pos = src.getPos();
    return *this;
}
/*
void Object::move(void) {
    this->_pos.y++;
}
*/
Point Object::getPos(void) const {
    return this->_pos;
}
