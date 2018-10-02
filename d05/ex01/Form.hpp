// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Form.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/06 12:52:40 by skavunen          #+#    #+#             //
//   Updated: 2017/11/06 12:52:41 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FORM_H
# define FORM_H

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string _name ;
    bool _sign;
    const int _success;
public:
    Form( void );
    ~Form( void );
    Form( Form const & copy );
    Form &  operator=( Form const & copy );
    bool    isSigned( void ) const;
    void    beSigned( Bureaucrat const & crat );
    std::string getName( void ) const;
    int     getMinSucc( void ) const;

    class GradeTooHighException : public std::exception
    { 
        std::string _msg;
    public:
        GradeTooHighException( void );
        GradeTooHighException( GradeTooHighException const & copy );
        GradeTooHighException &     operator=( GradeTooHighException const & copy );
        virtual ~GradeTooHighException( void ) throw();
        GradeTooHighException( const std::string & msg );
        const std::string & getMsg() const;
        virtual const char* what() const throw(); 
    };
    class GradeTooLowException : public std::exception
    {
        std::string _msg;
    public:
        GradeTooLowException( void );
        GradeTooLowException( GradeTooLowException const & copy );
        GradeTooLowException &     operator=( GradeTooLowException const & copy );
        virtual ~GradeTooLowException( void ) throw();
        GradeTooLowException( const std::string & msg );
        const std::string & getMsg() const;
        virtual const char* what() const throw(); 
    };
};

std::ostream &      operator<<( std::ostream & o , Form const & crat );

#endif