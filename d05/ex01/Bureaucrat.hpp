// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bureaucrat.hpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/06 12:00:38 by skavunen          #+#    #+#             //
//   Updated: 2017/11/06 12:00:39 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
public:
    Bureaucrat( void );
    Bureaucrat( const int grade );
    Bureaucrat( Bureaucrat const & copy );
    Bureaucrat &  operator=( Bureaucrat const & copy );
    ~Bureaucrat( void );
    std::string getName( void ) const;
    int         getGrade( void ) const;
    void        inCre( void );
    void        deCre( void );
    void        signForm( Form & forma ) const ;

    class GradeTooHighException : public std::exception
    { 
        std::string _msg;
    public:
        GradeTooHighException( void );
        GradeTooHighException( GradeTooHighException const & copy );
        virtual ~GradeTooHighException( void ) throw();
        GradeTooHighException &     operator=( GradeTooHighException const & copy );
        GradeTooHighException( const std::string & msg );
        const std::string & getMsg() const;
        virtual const char* what() const throw(); 
    };
    class GradeTooLowException : public std::exception
    {
        std::string _msg;
    public:
        GradeTooLowException( void );
        virtual ~GradeTooLowException( void ) throw();
        GradeTooLowException( GradeTooLowException const & copy );
        GradeTooLowException &     operator=( GradeTooLowException const & copy );
        GradeTooLowException( const std::string & msg );
        const std::string & getMsg() const;
        virtual const char* what() const throw(); 
    };

private:
    const std::string _name;
    int _grade;
    int _maxgrade;
    int _mingrade;
};

std::ostream &      operator<<( std::ostream & o , Bureaucrat const & crat );

#endif