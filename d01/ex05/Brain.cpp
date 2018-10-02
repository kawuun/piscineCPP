// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/10/31 17:06:36 by skavunen          #+#    #+#             //
//   Updated: 2017/10/31 17:06:36 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Brain.hpp"
#include <sstream>

Brain::Brain( void )
{
    return;
}

Brain::~Brain( void )
{
    return ;
}

std::string     Brain::identify( void ) const
{
    std::stringstream addrss;
    std::string       ret;
    
    addrss << this;
    ret = addrss.str();
    return (ret);
}