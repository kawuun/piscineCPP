// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PresidentialPardonForm.hpp                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/07 13:25:04 by skavunen          #+#    #+#             //
//   Updated: 2017/11/07 13:25:04 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    const int _success;
    const int _exec;
    std::string _target;
    bool _sign;
    PresidentialPardonForm( void );

public:
    PresidentialPardonForm( std::string const & target );
    PresidentialPardonForm( PresidentialPardonForm const & pres );
    PresidentialPardonForm &    operator=( PresidentialPardonForm const & copy );
    ~PresidentialPardonForm( void );
    std::string getTarget( void ) const;
    void    execute( Bureaucrat const & executor ) const;
};

#endif