// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bureaucrat.cpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/06 12:00:44 by skavunen          #+#    #+#             //
//   Updated: 2017/11/06 12:00:44 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name("CRATYO")
{
    _maxgrade = 1;
    _mingrade = 150;
    _grade = 150;
}

Bureaucrat::Bureaucrat( int const grade ) : _name("CRATYO")
{
    _mingrade = 150;
    _maxgrade = 1;
    
    if (grade < _maxgrade)
        throw GradeTooHighException("Grade is too high!");
    else if ( grade > _mingrade)
        throw GradeTooLowException("Grade is too low!");
    else
        _grade = grade;
}

Bureaucrat::~Bureaucrat( void )
{

}

Bureaucrat::Bureaucrat( Bureaucrat const & copy )
{
    *this = copy;
}

Bureaucrat &    Bureaucrat::operator=( Bureaucrat const & copy )
{
    if (this != &copy)
    {
        _grade = copy.getGrade();
    }
    return (*this);
}

int             Bureaucrat::getGrade( void ) const
{
    return _grade;
}

std::string     Bureaucrat::getName( void ) const
{
    return _name;
}

void            Bureaucrat::inCre( void )
{
    if ( (_grade - 1) < _maxgrade )
        throw GradeTooHighException("increment grade: too high!");
    else
        _grade -= 1;
}

void            Bureaucrat::deCre( void )
{
    if ( (_grade + 1) > _mingrade )
        throw GradeTooLowException("increment grade: too low!");
    else
        _grade += 1;
}

std::ostream &      operator<<( std::ostream & o, Bureaucrat const & crat )
{
    o << crat.getName() << ", bureaucrat grade -> " << crat.getGrade();

    return (o);
}

Bureaucrat::GradeTooHighException::GradeTooHighException( void )
{

}

Bureaucrat::GradeTooLowException::GradeTooLowException( void )
{
    
}

Bureaucrat::GradeTooHighException::~GradeTooHighException( void ) throw()
{

}

Bureaucrat::GradeTooLowException::~GradeTooLowException( void ) throw()
{
    
}

Bureaucrat::GradeTooHighException::GradeTooHighException( GradeTooHighException const & copy )
{
    *this = copy;
}

Bureaucrat::GradeTooHighException &     Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const & copy )
{
    if (this != &copy)
    {
        _msg = copy.getMsg();
    }
    return (*this);
}

Bureaucrat::GradeTooHighException::GradeTooHighException( const std::string & msg ) : _msg(msg)
{

}

const char*     Bureaucrat::GradeTooHighException::what( void ) const throw()
{
    return _msg.c_str();
}

const std::string & Bureaucrat::GradeTooHighException::getMsg( void ) const
{
    return _msg;
}


Bureaucrat::GradeTooLowException::GradeTooLowException( GradeTooLowException const & copy )
{
    *this = copy;
}

Bureaucrat::GradeTooLowException &     Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const & copy )
{
    if (this != &copy)
    {
        _msg = copy.getMsg();
    }
    return (*this);
}

Bureaucrat::GradeTooLowException::GradeTooLowException( const std::string & msg ) : _msg(msg)
{

}

const char*     Bureaucrat::GradeTooLowException::what( void ) const throw()
{
    return _msg.c_str();
}

const std::string & Bureaucrat::GradeTooLowException::getMsg( void ) const
{
    return _msg;
}