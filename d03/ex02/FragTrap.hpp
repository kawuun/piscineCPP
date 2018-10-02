// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/03 11:01:41 by skavunen          #+#    #+#             //
//   Updated: 2017/11/03 11:01:41 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FRAGTRAP_H
# define FRAGTRAP_H
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap( void );
    FragTrap( std::string const & name);
    FragTrap & operator=(FragTrap const & copy );
    ~FragTrap( void );


    void        frozEnemy(std::string const & target);
    void        throwGrenade(std::string const & target);
    void        rocketStrike(std::string const & target);
    void        airStrike(std::string const & target);
    void        critStrike(std::string  const & target);
    void        vaulthunter_dot_exe(std::string const & target);
};

#endif 