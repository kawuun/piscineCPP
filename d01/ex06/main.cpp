// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/10/31 18:45:32 by skavunen          #+#    #+#             //
//   Updated: 2017/10/31 18:45:33 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Weapon.hpp"
#include "HumanB.hpp"
#include "HumanA.hpp"

int main()
{

    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();


    Weapon lol = Weapon("crude spiked lol");
    HumanB jim("Jim");
    jim.setWeapon(lol);
    jim.attack();
    lol.setType("some other type of lol");
    jim.attack();

}