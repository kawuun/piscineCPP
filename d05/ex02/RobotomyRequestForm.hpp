// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RobotomyRequestForm.hpp                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/07 13:24:49 by skavunen          #+#    #+#             //
//   Updated: 2017/11/07 13:24:51 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    const int _success;
    const int _exec;
    std::string _target;
    bool _sign;
    RobotomyRequestForm( void );

public:
    RobotomyRequestForm( std::string const & target );
    RobotomyRequestForm( RobotomyRequestForm const & pres );
    RobotomyRequestForm &    operator=( RobotomyRequestForm const & copy );
    ~RobotomyRequestForm( void );
    std::string getTarget( void ) const;
    void    execute( Bureaucrat const & executor ) const;
};

#endif