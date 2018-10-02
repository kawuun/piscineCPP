// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/07 13:24:33 by skavunen          #+#    #+#             //
//   Updated: 2017/11/07 13:24:33 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
private:
    const int _success;
    const int _exec;
    std::string _target;
    bool _sign;
    ShrubberyCreationForm( void );

public:
    ShrubberyCreationForm( std::string const & target );
    ShrubberyCreationForm( ShrubberyCreationForm const & pres );
    ShrubberyCreationForm &    operator=( ShrubberyCreationForm const & copy );
    ~ShrubberyCreationForm( void );
    std::string getTarget( void ) const;
    void    execute( Bureaucrat const & executor ) const;
};

#endif