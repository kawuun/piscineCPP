// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PresidentialPardonForm.cpp                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/07 13:25:06 by skavunen          #+#    #+#             //
//   Updated: 2017/11/07 13:25:06 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : Form(), _success(25), _exec(5), _sign(false)
{

}

PresidentialPardonForm::PresidentialPardonForm( std::string const & target) : _success(25),
_exec(5), _sign(false)
{
    _target = target;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & pres ) : Form( pres ), _success(25),
_exec(5), _sign(false)
{

}

PresidentialPardonForm &    PresidentialPardonForm::operator=( PresidentialPardonForm const & copy)
{
    if (this != &copy)
    {
        _target = copy.getTarget();
        _sign = copy.isSigned();
    }
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{

}

std::string PresidentialPardonForm::getTarget( void ) const
{
    return _target;
}

void        PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    int grade = executor.getGrade();

    if (_sign)
    {
        if (grade > _exec || grade > _success)
            throw GradeTooLowException("Not enough for execute!");
        else
        {
            std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
        }
    }   
}