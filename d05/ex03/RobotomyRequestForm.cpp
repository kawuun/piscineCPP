// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RobotomyRequestForm.cpp                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/07 13:24:53 by skavunen          #+#    #+#             //
//   Updated: 2017/11/07 13:24:53 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : Form(),
_success(72), _exec(45), _sign(false)
{

}

RobotomyRequestForm::RobotomyRequestForm( std::string const & target) : _success(72),
_exec(45), _sign(false)
{
    _target = target;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & pres ) : Form( pres ), _success(72),
_exec(45), _sign(false)
{

}

RobotomyRequestForm &    RobotomyRequestForm::operator=( RobotomyRequestForm const & copy)
{
    if (this != &copy)
    {
        _target = copy.getTarget();
        _sign = copy.isSigned();
    }
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{

}

std::string RobotomyRequestForm::getTarget( void ) const
{
    return _target;
}

void        RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    int grade = executor.getGrade();

    if (_sign)
    {
        if (grade > _exec || grade > _success)
          throw GradeTooLowException("Not enough for execute!");
        else
        {
            std::cout << "\a \a";
            std::cout << _target << "has been robotomized successfully" << std::endl;
            std::cout << "\a \a";
            std::cout << _target << "has not been robotomized successfully" << std::endl;
        }
    }
}