// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/07 13:24:35 by skavunen          #+#    #+#             //
//   Updated: 2017/11/07 13:24:36 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : Form(),
_success(145), _exec(137), _sign(false)
{

}

ShrubberyCreationForm::ShrubberyCreationForm( std::string const & target) : _success(145),
_exec(137), _sign(false)
{
    _target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & pres ) : Form( pres ), _success(145),
_exec(137), _sign(false)
{

}

ShrubberyCreationForm &    ShrubberyCreationForm::operator=( ShrubberyCreationForm const & copy)
{
    if (this != &copy)
    {
        _target = copy.getTarget();
        _sign = copy.isSigned();
    }
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{

}

std::string     ShrubberyCreationForm::getTarget( void ) const
{
    return _target;
}

void        ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    int grade = executor.getGrade();

    if (_sign)
    {
        if (grade > _exec || grade > _success)
            throw GradeTooLowException("Not enough for execute!");
        else
        {
            std::string ret(_target);
            ret += "_shrubbery";
            std::ofstream file (ret);
            file << "     $" << std::endl <<"    $$$" << std::endl
            << "   $o$o$" << std::endl << "  o$o$o$o" << std::endl << "     $" << std::endl 
            << "     $" << std::endl << "     $" << std::endl;
        }
    }
}