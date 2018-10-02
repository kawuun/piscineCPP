// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/06 12:00:52 by skavunen          #+#    #+#             //
//   Updated: 2017/11/06 12:41:12 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"
#include "Form.hpp"



int     main( void )
{
    Bureaucrat a(15);
    Form        b;


    std::cout << a << std::endl;
    std::cout << b << std::endl;

    a.signForm(b);

    std::cout << "NEXT WILL BE ERR:" << std::endl << std::endl;

    Bureaucrat z(75);
    std::cout << z << std::endl;

    Form alpha;

    std::cout << alpha << std::endl;

    z.signForm(alpha);
}
