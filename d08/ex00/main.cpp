// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/09 18:42:20 by skavunen          #+#    #+#             //
//   Updated: 2017/11/10 19:32:00 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Easyfind.hpp"

int     main( void )
{
    std::vector<int> lst(3, 24);

    lst.push_back(43);
    try
    {
		std::cout << *easyfind(lst, 24) << " - was found!" << std::endl;
        std::cout << *easyfind(lst, 42) << " - was found!" << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "Not found!" << std::endl;
    }
}
