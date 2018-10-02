// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/10/31 11:53:23 by skavunen          #+#    #+#             //
//   Updated: 2017/10/31 11:53:23 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Pony.hpp"
#include <iostream>

void        ponyOnTheHeap( void ) {

    Pony    *heapPony = new Pony(1);

    heapPony->sayHello();
    delete heapPony;
}

void        ponyOnTheStack ( void ) {

    Pony    stackPony(0);

    stackPony.sayHello();
    return;
}

int         main( void )
{
    ponyOnTheHeap();
    ponyOnTheStack();
    return (0);
}