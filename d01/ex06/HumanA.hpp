// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/10/31 18:45:10 by skavunen          #+#    #+#             //
//   Updated: 2017/10/31 18:45:11 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANA_H
# define HUMANA_H
# include "Weapon.hpp"
# include <iostream>

class HumanA
{
public:

    HumanA( std::string name, Weapon& club );
    ~HumanA( void );
    void    attack( void );
    
private:
    std::string _name;
    Weapon&     _weapon;
};

#endif