// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Game.class.cpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/04 13:23:48 by skavunen          #+#    #+#             //
//   Updated: 2017/11/04 13:23:48 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "mainGame.hpp"

Game::Game( void )
{
    _x = 2;
    _y = 1;
    _act = 0;
    _hp = 100;
    _dam = 10;
    _disp = ":::>>";
}

Game::Game( std::string typo ) : _disp( typo )
{
    _x = 2;
    _y = 1;
    _act = 0;
}

Game::Game( Game const & copy )
{
    *this = copy;
}

Game::~Game( void )
{
    
}

Game &      Game::operator=( Game const & copy )
{
    if ( this != &copy )
    {
        _x = copy.getX();
        _y = copy.getY();
        _disp = copy.display();
        _act = copy.isAct();
    }
    return (*this);
}


std::string     Game::display( void ) const
{
    return _disp;
}

int             Game::getX( void ) const
{
    return _x;
}

int             Game::getY( void ) const
{
    return _y;
}

int             Game::isAct( void ) const
{
    return _act;
}

void            Game::Act( void )
{
    _act = 1;
}

void            Game::deAct( void )
{
    _act = 0;
}

void            Game::moveX( int x )
{
    struct winsize size;
    ioctl(STDOUT_FILENO,TIOCGWINSZ,&size);

    if (x < 2 || x == size.ws_col - 2)
        deAct();
    else
        _x = x;
}

void            Game::moveY( int y )
{
    struct winsize size;
    ioctl(STDOUT_FILENO,TIOCGWINSZ,&size);

    if (y  <= 0 || y >= size.ws_row - 5)
        deAct();
    else
        _y = y;
}

void            Game::setDisp( std::string typo )
{
    _disp = typo;
}

int             Game::getHP( void ) const
{
    return _hp;
}

void            Game::takeDam( unsigned int amount )
{
    if ((int)amount >= _hp)
    {
        _hp = 0;
        deAct();
    }
    else
    {
        _hp -= amount;
    }
}

int         Game::getDam( void ) const
{
    return _dam;
}

void         Game::setDam( unsigned int amount )
{
    _dam = amount;
}

int         Game::getColorPair()
{
    return _color_pair;
}

void        Game::setColorPair(int p)
{
    _color_pair = p;
}

void        Game::setHP(int hp)
{
    _hp = hp;
}