// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/10/31 12:53:37 by skavunen          #+#    #+#             //
//   Updated: 2017/10/31 12:53:37 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"
#include <iostream>

void            Zombie::announce( void ) {

    std::cout << "Zombie: " << this->getName() << "(" << this->getType() << ")"
    ": Braaaaaaaaiiiiiiiiiinsss" << std::endl;
}

Zombie::Zombie ( void ) {

    std::cout << "Zombie was reborn!" << std::endl;
    return ;
}

Zombie::~Zombie ( void ) {

    std::cout << "Zombie: " << this->getName() << "(" << this->getType() << ")"
    ": this is the end!" << std::endl;
    return ;
}

void            Zombie::setName( std::string newname )
{
    this->_name = newname;
}

void            Zombie::setType( std::string newtype )
{
    this->_type = newtype;
}

std::string     Zombie::getName( void )
{
    return  (this->_name);
}

std::string     Zombie::getType( void )
{
    return (this->_type);
}