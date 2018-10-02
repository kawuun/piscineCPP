// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   EnemyEvent.hpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/04 18:44:18 by skavunen          #+#    #+#             //
//   Updated: 2017/11/04 18:44:18 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ENEMYEVENT_H
# define ENEMYEVENT_H

# include "mainGame.hpp"

class EnemyEvent
{
public:
    EnemyEvent( void );
    EnemyEvent( EnemyEvent const & copy);
    ~EnemyEvent( void );
    EnemyEvent & operator=( EnemyEvent const & copy );
    Game    *getEnem( void ) const ;
    void    moveAll( void );
    void    dispAll( void );
    void    init( void );
    void    striked( Player & me);
    int     killPlayer(int y, int x);

private:
    Game *_enemies;
};

#endif