// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/10/31 17:07:03 by skavunen          #+#    #+#             //
//   Updated: 2017/10/31 17:07:08 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"
#include <sstream>

Human::Human( void )
{
    return ;
}

Human::~Human( void )
{
    return;
}

std::string     Human::identify( void )
{
    return (this->_myBrain.identify());
}

const Brain        &Human::getBrain( void ) const
{
    return (this->_myBrain);
}