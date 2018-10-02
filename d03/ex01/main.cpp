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
#include "ScavTrap.hpp"

int main( void )
{
    FragTrap killah;
    ScavTrap forcer;

    killah.meleeAttack("nfs");

    forcer.meleeAttack("FragTrap");

    killah.rangedAttack("nfs");

    killah.takeDamage(15);
    forcer.takeDamage(95);
    killah.beRepaired(5);

    killah.vaulthunter_dot_exe("nfs");
    forcer.challengeNewcomer();

    killah.takeDamage(120);
    forcer.takeDamage(1111);
}