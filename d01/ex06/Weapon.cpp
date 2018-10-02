// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/10/31 18:45:55 by skavunen          #+#    #+#             //
//   Updated: 2017/10/31 18:45:55 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Weapon.hpp"

Weapon::Weapon( std::string starttype )
{
    this->_type = starttype;
    return;
}

Weapon::~Weapon( void )
{
    return;
}
const std::string       &Weapon::getType( void )
{
    return (this->_type);
}

void                    Weapon::setType( std::string newtype)
{
    this->_type = newtype;
}