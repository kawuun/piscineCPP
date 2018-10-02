// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Intern.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/07 18:39:44 by skavunen          #+#    #+#             //
//   Updated: 2017/11/07 18:39:44 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef INTERN_H
# define INTERN_H

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

class Form;

class Intern
{
public:
    Intern( void );
    Intern( Intern const & copy );
    ~Intern( void );
    Intern &  operator=( Intern const & copy );
    Form *     makeForm(std::string const & forma, std::string const & name );
};


#endif