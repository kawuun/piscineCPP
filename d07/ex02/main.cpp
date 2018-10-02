// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/09 17:01:30 by skavunen          #+#    #+#             //
//   Updated: 2017/11/09 17:01:30 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Array.hpp"

int     main( void )
{
    Array<int> arr(12);

    std::cout << arr.size() << std::endl;
    try
    {
        std::cout << "arr:index[11]: " << arr[11] << std::endl;
        std::cout << "arr:index[15]: " << arr[15] << std::endl;
    }
    catch ( std::exception & e )
    {
        std::cout << "Bad index!" << std::endl;
    }
}