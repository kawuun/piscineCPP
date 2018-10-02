// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/10/31 18:44:58 by skavunen          #+#    #+#             //
//   Updated: 2017/10/31 18:44:59 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "HumanB.hpp"

HumanB::HumanB( std::string name)
{
    this->_name = name;
    return;
}

HumanB::~HumanB( void )
{
    return;
}

void        HumanB::attack( void )
{
    std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

void        HumanB::setWeapon(Weapon &club)
{
    this->_weapon = &club;
}