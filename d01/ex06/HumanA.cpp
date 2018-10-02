// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/10/31 18:44:49 by skavunen          #+#    #+#             //
//   Updated: 2017/10/31 18:44:51 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& club ) : _weapon(club)
{
    this->_name = name;
}

HumanA::~HumanA( void )
{
    return;
}

void        HumanA::attack( void )
{
    std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}