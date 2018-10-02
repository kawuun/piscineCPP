// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/06 12:00:52 by skavunen          #+#    #+#             //
//   Updated: 2017/11/06 17:56:45 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"

int     main( void )
{
    try
    {
        std::cout << "Trying creat Bureaucrat with 0" << std::endl;
        Bureaucrat a(0);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    try
    {
        std::cout << "Trying creat Bureaucrat with 150" << std::endl;
        Bureaucrat a(150);
        std::cout << a << std::endl;
        std::cout << "Trying decrement Bureaucrat with 150 to 151" << std::endl;
        a.deCre();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}
