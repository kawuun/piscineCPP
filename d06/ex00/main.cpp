// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/08 15:51:36 by skavunen          #+#    #+#             //
//   Updated: 2017/11/08 15:51:37 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Conversion.class.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        std::cout << "usage: ./convert <num>" << std::endl;
    else
    {
        Conversion Conv( av[1]);
        std::string toCmp( av[1] );
        
        std::cout << "char: ";
        Conv.toChar();
        std::cout << std::endl;
        std::cout << "int: ";
        Conv.toInt();
        std::cout << std::endl;
        std::cout << "float: ";
        Conv.toFloat();
        std::cout << std::endl;
        std::cout << "double: ";
        Conv.toDouble();
        std::cout << std::endl;
    }
}