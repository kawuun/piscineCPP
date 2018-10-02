// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/06 12:00:52 by skavunen          #+#    #+#             //
//   Updated: 2017/11/07 15:35:19 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


int     main( void )
{
    Bureaucrat a(7);
    PresidentialPardonForm b("nfs");

    std::cout << a << std::endl;

    a.signForm(b);
    a.executeForm(b);

	RobotomyRequestForm v("peer-right");
	Bureaucrat z(25);

	std::cout << std::endl;
	std::cout << z << std::endl;

	z.signForm(v);
	z.executeForm(v);
}
