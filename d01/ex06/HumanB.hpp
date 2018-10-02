// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/10/31 18:45:04 by skavunen          #+#    #+#             //
//   Updated: 2017/10/31 18:45:05 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANB_H
# define HUMANB_H
# include "Weapon.hpp"
# include <iostream>

class HumanB
{
public:

    HumanB( std::string name);
    ~HumanB( void );
    void    attack( void );
    void    setWeapon(Weapon &club);

private:
    std::string _name;
    Weapon*     _weapon;
};

#endif