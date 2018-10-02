// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/01 13:40:47 by skavunen          #+#    #+#             //
//   Updated: 2017/11/01 16:56:22 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Logger.hpp"

int         main( void )
{
    std::string action;
    std::string filename;
    std::string mess;

    std::cout << "Enter filename: ";
    std::getline(std::cin, filename);
    Logger logg(filename);
    std::cout << "Enter func: ";
    std::getline(std::cin, action);
    std::cout << "Enter message: ";
    std::getline(std::cin, mess);
    logg.log(action, mess);
}
