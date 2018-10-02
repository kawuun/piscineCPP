// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/10/31 12:54:00 by skavunen          #+#    #+#             //
//   Updated: 2017/10/31 12:54:01 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieEvent.hpp"


ZombieEvent::ZombieEvent ( std::string basetype )
{
    this->_type = basetype;
    return;
}

ZombieEvent::~ZombieEvent ( void )
{
    return ;
}

void        ZombieEvent::setZombieType( std::string newtype )
{
    std::cout << "ZombieEvent: type has beed changed: " << this->_type << "->"
    << newtype << "." << std::endl;
    this->_type = newtype;
}

Zombie*     ZombieEvent::newZombie( std::string name )
{
    Zombie  *newZ = new Zombie();
    newZ->setName(name);
    newZ->setType(this->_type);
    newZ->announce();
    return (newZ);
}

Zombie*      ZombieEvent::randomChump( void )
{
    std::string randNames[] = {"Olexiy", "Daniel", "Diana", "Lolka",
    "Arnold", "Vasya", "Cheater", "Bones"};

    srand(time(NULL));
    Zombie  *newZRand = new Zombie;
    newZRand->setName(randNames[rand() % 8]);
    newZRand->setType(this->_type);
    newZRand->announce();
    return (newZRand);
}          