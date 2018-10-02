// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/03 11:01:47 by skavunen          #+#    #+#             //
//   Updated: 2017/11/03 11:01:48 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"

int main( void )
{
    FragTrap killah;

    killah.meleeAttack("nfs");
    killah.rangedAttack("nfs");

    killah.takeDamage(15);
    killah.beRepaired(5);

    killah.vaulthunter_dot_exe("nfs");

    killah.takeDamage(120);
}