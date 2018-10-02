// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Form.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/06 12:52:38 by skavunen          #+#    #+#             //
//   Updated: 2017/11/06 12:52:38 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Form.hpp"

Form::Form( void ) : _name("Moulinette"), _success(30), _exec(30)
{
    _sign = false;
}

Form::~Form( void )
{

}

Form::Form( Form const & copy ) : _name("Moulinette"), _success(30), _exec(30)
{
    *this = copy;
}

Form &      Form::operator=( Form const & copy )
{
    if ( this != &copy )
    {
        _sign = copy.isSigned();
        
    }
    return (*this);
}

void        Form::beSigned( Bureaucrat const & crat )
{
    int ret = crat.getGrade();
    if (ret > _success)
    {
        _sign = false;
        throw GradeTooLowException("Not enough for success!"); 
    }
    else
        _sign = true;
}

bool        Form::isSigned( void ) const
{
    return _sign;
}

void    Form::execute( Bureaucrat const & crat ) const
{
    if (crat.getGrade() < _exec)
    {
        std::cout << "Default form success execute!" << std::endl;
    }
}

std::string Form::getName( void ) const
{
    return _name;
}

int Form::getMinSucc( void ) const
{
    return _success;
}

Form::GradeTooHighException::GradeTooHighException( void )
{
    _msg = "Too hign grade!";
}

Form::GradeTooHighException::GradeTooHighException( GradeTooHighException const & copy )
{
    *this = copy;
}

Form::GradeTooHighException::~GradeTooHighException( void ) throw()
{

}

Form::GradeTooHighException &     Form::GradeTooHighException::operator=(GradeTooHighException const & copy )
{
    if (this != &copy)
    {
        _msg = copy.getMsg();
    }
    return (*this);
}

Form::GradeTooHighException::GradeTooHighException( const std::string & msg ) : _msg(msg)
{

}

const char*     Form::GradeTooHighException::what( void ) const throw()
{
    return _msg.c_str();
}

const std::string & Form::GradeTooHighException::getMsg( void ) const
{
    return _msg;
}

Form::GradeTooLowException::GradeTooLowException( void )
{
    _msg = "Too low grade!";
}

Form::GradeTooLowException::GradeTooLowException( GradeTooLowException const & copy )
{
    *this = copy;
}

Form::GradeTooLowException &     Form::GradeTooLowException::operator=(GradeTooLowException const & copy )
{
    if (this != &copy)
    {
        _msg = copy.getMsg();
    }
    return (*this);
}

Form::GradeTooLowException::~GradeTooLowException( void ) throw()
{

}

Form::GradeTooLowException::GradeTooLowException( const std::string & msg ) : _msg(msg)
{

}

const char*     Form::GradeTooLowException::what( void ) const throw()
{
    return _msg.c_str();
}

const std::string & Form::GradeTooLowException::getMsg( void ) const
{
    return _msg;
}

std::ostream &      operator<<( std::ostream & o, Form const & form )
{
    o << "Form \"" << form.getName() << "\"";

    return (o);
}