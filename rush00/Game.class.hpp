// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Game.class.hpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/04 13:23:45 by skavunen          #+#    #+#             //
//   Updated: 2017/11/04 13:23:45 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef GAME_CLASS_H
# define GAME_CLASS_H

class Game
{
public:
    Game( void );
    Game( Game const & copy);
    Game( std::string typo );
    ~Game( void );
    Game & operator=( Game const & copy);
    void                            moveX( int x );
    void                            moveY( int y );
    void                            setDisp( std::string typo );
    int                             isAct( void ) const ;
    void                            Act( void );
    void                            deAct( void );
    std::string                     display( void ) const ;
    int                             getX( void ) const ;
    int                             getY( void ) const ;
    int                             getHP( void ) const;
    void                            takeDam( unsigned int amount );
    int                             getDam( void ) const;
    void                            setDam( unsigned int amount );
    int                             getColorPair();
    void                            setColorPair(int p);
    void                            setHP(int hp);

protected:
    int _hp;
    int _dam;
    int _act;
    int _x;
    int _y;
    int _color_pair;
    std::string _disp;
};

#endif