// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ex04.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/10/31 16:53:58 by skavunen          #+#    #+#             //
//   Updated: 2017/10/31 16:53:58 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

int         main( void )
{
    std::string     str = "HI THIS IS BRAIN";
    std::string*    ptr = &str;
    std::string&    ref = str;

    std::cout << "Pointer: [" << *ptr << "]" << std::endl;
    std::cout << "Reference: [" << ref << "]" << std::endl;
    return (0); 
}