// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Player.class.cpp                                   :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 317/11/04 18:43:45 by skavunen          #+#    #+#             //
//   Updated: 2017/11/04 18:43:45 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "mainGame.hpp"

Player::Player( void ) : Game()
{
   _rock = new Game [3];
   _dam = 10;
   _points = 0;
   for (int i = 0; i < 3; i++)
   {
        _rock[i].setDisp("-->");

   }
}

Player::Player( Player const & copy ) : Game( copy )
{
    _rock = copy.getRArr();
}

Player::~Player( void )
{
    delete [] _rock;
}

Player &    Player::operator=( Player const & copy )
{
    if (this != &copy )
    {
        _x = copy.getX();
        _y = copy.getY();
        _disp = copy.display();
        _rock = copy.getRArr();
    }
    return (*this);
}

void        Player::attack( void )
{
    for (int i = 0; i < 3; i++)
    {
        if (!_rock[i].isAct())
        {
            _rock[i].Act();
            _rock[i].moveX(_x + 4);
            _rock[i].moveY(_y);
            break ;
        }
    }
}

void        Player::moveRock( void )
{
    for(int i = 0; i < 3; i++)
    {
        if (_rock[i].isAct())
        {
            _rock[i].moveX(_rock[i].getX() + 1);
        }
    }
}

void        Player::displayRock( void )
{
    for(int i = 0; i < 3; i++)
    {
        if (_rock[i].isAct())
        {
            if (_rock[i].getColorPair() == 3)
                attron(COLOR_PAIR(3));
            else if (_rock[i].getColorPair() == 2)
                attron(COLOR_PAIR(2));

            addStrWind(_rock[i].getY(), _rock[i].getX() + 1, _rock[i].display());

            if (_rock[i].getColorPair() == 3)
                attroff(COLOR_PAIR(3));
            else if (_rock[i].getColorPair() == 2)
                attroff(COLOR_PAIR(2));
        }
    }
}

Game*       Player::getRArr( void ) const
{
    return _rock;
}

void        Player::addPoints(unsigned int amount)
{
    _points += amount;
}

int         Player::getPoints( void ) const
{
    return _points;
}