// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/03 20:03:47 by skavunen          #+#    #+#             //
//   Updated: 2017/11/03 20:03:48 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap ()
{
    _hp = 100;
    _maxhp = 100;
    _energy = 50;
    _maxenergy = 50;
    _level = 1;
    _meleeDmg = 20;
    _rangDmg = 15;
    _armor = 3;
    _name =  "DefaultScav";
    std::cout << _name << " : Glitching weirdness is a term of endearment, right?" << std::endl;
}

ScavTrap::ScavTrap( std::string const & name ) : ClapTrap (name)
{
    _hp = 100;
    _maxhp = 100;
    _energy = 50;
    _maxenergy = 50;
    _level = 1;
    _meleeDmg = 20;
    _rangDmg = 15;
    _armor = 3;
    std::cout << _name << " : Hey everybody! I'm ScavTrap!" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & copy )
{
    std::cout << "Adding new Scav!" << std::endl;
    if (this != &copy)
    {
        _hp = copy.getHP();
        _maxhp = copy.getMHP();
        _energy = copy.getEN();
        _maxenergy = copy.getMEN();
        _level = copy.getLVL();
        _meleeDmg = copy.getMDam();
        _rangDmg = copy.getRDam();
        _armor = copy.getArm();
        _name = copy.getName();
    }
    return (*this);
}

ScavTrap::~ScavTrap( void )
{
    std::cout << _name << " : I'm done." << std::endl;
}


void                ScavTrap::challengeNewcomer( void )
{
    std::string arr[4] = {"Exam00: ", "Exam01: ", "Rush00: ", "Rush01: "};
    std::string anw[4] = {"Crazy?! I don't have enough hp.", "Activating god mode...",
    "Now? But I... I just... okay...", "Switch with me... uh, please?"};

    srand(time(NULL));
    int random = rand() % 4;
    std::cout << arr[random];
    if (random % 2)
        random += 1;
    else
        random += 2;
    
    if (random > 3)
    {
        if (random % 2)
            random -= 2;
        else
            random -= 1;
    }
    if (!random)
        random++;
    if (random < 0 && random > 3)
        random = 1;
    std::cout << anw[random] << std::endl;


}

