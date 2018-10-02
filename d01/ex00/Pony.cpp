// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/10/31 11:53:06 by skavunen          #+#    #+#             //
//   Updated: 2017/10/31 11:53:06 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Pony.hpp"
#include <iostream>

Pony::Pony ( int alloc_zone ) {

    if ((this->_where_alloc = alloc_zone) == 1) {
        std::cout << "Created new Pony on the Heap" << std::endl;
    }
    else if (alloc_zone == 0) {
        std::cout << "Created new Pony on the Stack" << std::endl;
    }
    else {
        std::cout << "Created new Pony in the blackhole!" << std::endl;
    }
    return ;
}

Pony::~Pony ( void ) {

    if (this->_where_alloc == 1) {
        std::cout << "Destroyed Pony from the Heap" << std::endl;
    }
    else if (this->_where_alloc == 0) {
        std::cout << "Destroyed Pony from the Stack" << std::endl;
    }
    else {
        std::cout << "Blackhole destroyed our Pony!" << std::endl;
    }
    return ;
}

void            Pony::sayHello( void )
{
    if (this->_where_alloc == 1) {
        std::cout << "Hello World! I am Pony from the Heap" << std::endl;
    }
    else if (this->_where_alloc == 0) {
        std::cout << "Hello World! I am Pony from the Stack" << std::endl;
    }
    else {
        std::cout << "Hello World! I am Pony from the blackhole!s" << std::endl;
    }
    return ;
}