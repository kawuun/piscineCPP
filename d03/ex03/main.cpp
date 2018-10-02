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
#include "NinjaTrap.hpp"

int main( void )
{
    FragTrap killah("FRAGKILLER");
    ScavTrap forcer("SCAVFORCER");
    NinjaTrap ninja("MASTER NINJA");

    std::cout << std::endl;

    killah.meleeAttack("nfs");

    forcer.meleeAttack("FragTrap");

    killah.rangedAttack("nfs");

    ninja.ninjaShoebox( killah );

    std::cout << std::endl;

    ninja.takeDamage(19);
    killah.takeDamage(15);
    forcer.takeDamage(95);
    killah.beRepaired(5);

    std::cout << std::endl;

    killah.vaulthunter_dot_exe("nfs");
    forcer.challengeNewcomer();
    ninja.ninjaShoebox(forcer);

    std::cout << std::endl;

    NinjaTrap othernin("LOOSER NINJA");

    ninja.ninjaShoebox(othernin);

    killah.takeDamage(120);
    forcer.takeDamage(1111);
}