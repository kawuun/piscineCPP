// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NinjaTrap.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/03 21:05:02 by skavunen          #+#    #+#             //
//   Updated: 2017/11/03 21:05:02 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef NINJATRAP_H
# define NINJATRAP_H
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
public:
    NinjaTrap( void );
    NinjaTrap( std::string const & name);
    NinjaTrap & operator=(NinjaTrap const & copy );
    ~NinjaTrap( void );
    void ninjaShoebox( FragTrap const & frag);
    void ninjaShoebox( ScavTrap const & scav);
    void ninjaShoebox( ClapTrap const & clap);
    void ninjaShoebox( NinjaTrap const & ninja);

};

#endif