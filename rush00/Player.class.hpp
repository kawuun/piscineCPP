// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Player.class.hpp                                   :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/04 18:43:41 by skavunen          #+#    #+#             //
//   Updated: 2017/11/04 18:43:42 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PLAYER_CLASS_H
# define PLAYER_CLASS_H

# include "mainGame.hpp"

class Player : public Game
{
public:
    Player( void );
    Player( Player const & copy);
    ~Player( void );
    Player & operator=( Player const & copy );
    void        moveRock();
    Game      * getRArr( void) const;
    void        attack( void );
    void        displayRock( void );
    int         getPoints( void ) const;
    void        addPoints( unsigned int amount );


private:
    Game *_rock;
    int _points;
};

#endif