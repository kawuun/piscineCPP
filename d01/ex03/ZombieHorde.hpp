// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/10/31 15:56:41 by skavunen          #+#    #+#             //
//   Updated: 2017/10/31 15:56:41 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H
# include "Zombie.hpp"

class ZombieHorde {

public:

    ZombieHorde( int num );
    ~ZombieHorde ( void );
    void announce( void );

private:
    Zombie      *horde;
    int         num;
};

#endif