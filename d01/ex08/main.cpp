// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/01 12:21:46 by skavunen          #+#    #+#             //
//   Updated: 2017/11/01 12:21:46 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"

int         main( void )
{
    std::string action;
    Human killer;
    std::cout << "Enter command: ";
    std::getline(std::cin, action);
    killer.action(action, "lexa");
}