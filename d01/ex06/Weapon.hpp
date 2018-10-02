// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/10/31 18:45:20 by skavunen          #+#    #+#             //
//   Updated: 2017/10/31 18:45:20 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef WEAPON_H
# define WEAPON_H
# include <iostream>

class Weapon 
{
public:
    Weapon( std::string starttype );
    ~Weapon( void );
    const std::string   &getType( void );
    void                setType(std::string newtype);

private:
    std::string _type;
};

#endif