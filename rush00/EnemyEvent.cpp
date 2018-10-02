// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   EnemyEvent.cpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/04 18:44:21 by skavunen          #+#    #+#             //
//   Updated: 2017/11/04 18:44:21 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "mainGame.hpp"

EnemyEvent::EnemyEvent( void )
{
    int type, randCounter[2] = {0, 0};

    _enemies = new Game [100];

    for(int i = 0; i < 100; i++)
    {
        type = rand() % 3;

        switch (type)
        {
            case 1:
            {
                if (randCounter[0] != 2)
                {
                    randCounter[0]++;
                    _enemies[i].setColorPair(1);
                    _enemies[i].setDisp("@@");
                    _enemies[i].takeDam(90);
                    break;
                }
                _enemies[i].setColorPair(3);
                _enemies[i].setDisp("##");
                _enemies[i].takeDam(70);
                randCounter[0] = 0;
                break;
            }
            case 2:
            {
                if (randCounter[1] != 1)
                {
                    randCounter[1]++;
                    _enemies[i].setColorPair(1);
                    _enemies[i].setDisp("@@");
                    _enemies[i].takeDam(90);
                    break;
                }
                _enemies[i].setColorPair(2);
                _enemies[i].setDisp("$$");
                _enemies[i].takeDam(80);
                randCounter[1] = 0;
                break;
            }
            default:
            {
                _enemies[i].setColorPair(1);
                _enemies[i].setDisp("@@");
                _enemies[i].takeDam(90);
                break;
            }
        }
    }
}

EnemyEvent::EnemyEvent( EnemyEvent const & copy )
{
    *this = copy;
}

EnemyEvent::~EnemyEvent( void )
{
    delete [] _enemies;
}

EnemyEvent &      EnemyEvent::operator=( EnemyEvent const & copy )
{
    if ( this != &copy )
    {
       _enemies = copy.getEnem();
    }
    return (*this);
}

Game*           EnemyEvent::getEnem( void ) const
{
    return _enemies;
}

void            EnemyEvent::moveAll( void )
{
    for(int i = 0; i < 100; i++)
    {
        if (_enemies[i].isAct())
        {
            _enemies[i].moveX( _enemies[i].getX() - 1);
        }
    }
}

void            EnemyEvent::dispAll( void )
{
    for(int i = 0; i < 100; i++)
    {
        if (_enemies[i].isAct())
        {
            if (_enemies[i].getColorPair() == 3)
            {
                attron(COLOR_PAIR(_enemies[i].getColorPair()));
                addStrWind(_enemies[i].getY(), _enemies[i].getX() - 1, _enemies[i].display());
                attroff(COLOR_PAIR(_enemies[i].getColorPair()));
            }
            else if (_enemies[i].getColorPair() == 2)
            {
                attron(COLOR_PAIR(_enemies[i].getColorPair()));
                addStrWind(_enemies[i].getY(), _enemies[i].getX() - 1, _enemies[i].display());
                attroff(COLOR_PAIR(_enemies[i].getColorPair()));
            }
            else
                addStrWind(_enemies[i].getY(), _enemies[i].getX() - 1, _enemies[i].display());
        }
    }
}

void            EnemyEvent::init( void )
{
    int num;
    static int prevy;

    struct winsize size;
    ioctl(STDOUT_FILENO,TIOCGWINSZ,&size);

    for(int i = 0; i < 100; i++)
    {
        if (!_enemies[i].isAct())
        {
            _enemies[i].Act();
            num = rand()  % (size.ws_row - 5);
            if (!(num % 2))
                num += 1;
            while (num == prevy || !(num % 2))
                num = rand() % (size.ws_row - 5);
            _enemies[i].moveY(num);
            prevy = num;
            _enemies[i].moveX(size.ws_col - 3);
            if (_enemies[i].getColorPair() == 2)
                _enemies[i].setHP(20);
            else if (_enemies[i].getColorPair() == 3)
                _enemies[i].setHP(30);
            break ;
        }
    }
}

void            EnemyEvent::striked( Player & me)
{
    Game *rocks = me.getRArr();

    for ( int j = 0; j < 100; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            if (_enemies[j].isAct() && rocks[i].isAct())
            {
                if (rocks[i].getY() == _enemies[j].getY())
                {
                    if (rocks[i].getX() > _enemies[j].getX())
                    {
                        _enemies[j].takeDam(rocks[i].getDam());
                        rocks[i].deAct();
                        if (_enemies[j].getHP() == 0)
                            me.addPoints(_enemies[j].getColorPair() * 10);
                    }
                }
            }
        }
    }
}

int             EnemyEvent::killPlayer(int y, int x)
{
    if (x)
    ;
    for ( int j = 0; j < 100; j++)
    {
        if (_enemies[j].isAct())
        {
            if (_enemies[j].getY() == y)
            {
                if (_enemies[j].getX() == 4)
                {
                    return (0);
                }
            }
        }
    }
    return (1);
}