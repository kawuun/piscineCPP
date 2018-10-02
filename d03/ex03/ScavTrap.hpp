// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/03 20:03:51 by skavunen          #+#    #+#             //
//   Updated: 2017/11/03 20:03:52 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap( void );
    ScavTrap( std::string const & name);
    ScavTrap & operator=(ScavTrap const & copy );
    ~ScavTrap( void );


    void        challengeNewcomer( void );
};

#endif