// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Intern.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/07 18:39:47 by skavunen          #+#    #+#             //
//   Updated: 2017/11/07 18:39:48 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Intern.hpp"

Intern::Intern( void )
{

}

Intern::~Intern( void )
{

}

Intern::Intern( Intern const & copy )
{
    *this = copy;
}

Intern & Intern::operator=( Intern const & copy )
{
    if (this != &copy)
        ;

    return (*this);
}


Form *      Intern::makeForm( std::string const & forma, std::string const & name )
{
    if (forma == "robotomy request")
    {
        std::cout << "Intern creates Robotomy Request!" << std::endl;
        return new RobotomyRequestForm(name);
    }
    else if (forma == "presidential pardon")
    {
        std::cout << "Intern creates Presidential Pardon!" << std::endl;
        return new PresidentialPardonForm(name);
    }
    else if (forma == "shrubbery creation")
    {
        std::cout << "Intern creates Shrubbery Creation!" << std::endl;
        return new ShrubberyCreationForm(name);
    }
    else
    {
        std::cout << "I can't create this form!" << std::endl;
        return (NULL);
    }
}
