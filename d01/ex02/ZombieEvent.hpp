// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/10/31 12:54:11 by skavunen          #+#    #+#             //
//   Updated: 2017/10/31 12:54:11 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H 
# include <iostream>
# include "Zombie.hpp"

class ZombieEvent {

public:

    ZombieEvent( std::string basetype );
    ~ZombieEvent( void );
    Zombie*  newZombie(std::string name);
    void    setZombieType ( std::string newtype );
    Zombie* randomChump( void );

private:
    std::string _type;
};

#endif