// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/10/31 12:54:24 by skavunen          #+#    #+#             //
//   Updated: 2017/10/31 15:14:44 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main ( void ) {

    ZombieEvent EvZomb("base");

    
    Zombie *FirstZ = EvZomb.newZombie("serg");
    delete FirstZ;
    EvZomb.setZombieType("range");
    Zombie *RAND = EvZomb.randomChump();
    delete RAND;
    return (0);
}
