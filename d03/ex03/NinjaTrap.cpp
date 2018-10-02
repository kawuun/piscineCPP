// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NinjaTrap.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/03 21:04:59 by skavunen          #+#    #+#             //
//   Updated: 2017/11/03 22:30:50 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap( void ) : ClapTrap ()
{
    _hp = 60;
    _maxhp = 60;
    _energy = 120;
    _maxenergy = 120;
    _level = 1;
    _meleeDmg = 60;
    _rangDmg = 5;
    _armor = 0;
    _name = "DefaultNinja";
    std::cout << _name << " : Ninja here!" << std::endl;
}

NinjaTrap::NinjaTrap( std::string const & name ) : ClapTrap ( name )
{
    _hp = 60;
    _maxhp = 60;
    _energy = 120;
    _maxenergy = 120;
    _level = 1;
    _meleeDmg = 60;
    _rangDmg = 5;
    _armor = 0;
    std::cout << _name << " : Hey everybody! U can't see ninja." << std::endl;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & copy )
{
    std::cout << "Adding new Ninja!" << std::endl;
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


NinjaTrap::~NinjaTrap( void )
{
    std::cout << _name << " : Ninja's don't died!" << std::endl;
}

void NinjaTrap::ninjaShoebox( FragTrap const & frag)
{
    std::cout << "Hah! I see FragTrap: " << frag.getName() << ", but he can't see me! I kick his ass!" << std::endl;
}

void NinjaTrap::ninjaShoebox( ClapTrap const & clap)
{
    std::cout << "Hah! I see ClapTrap: " << clap.getName() << ", but he can't see me! Ooops, he lost his wallet!" << std::endl;
}

void NinjaTrap::ninjaShoebox( NinjaTrap const & ninja)
{
    std::cout << "Hmm! Smells like other ninja is here! I think it's a: " << ninja.getName() << "!" << std::endl;
}

void NinjaTrap::ninjaShoebox( ScavTrap const & scav)
{
    std::cout << "Hah! I see ScavTrap: " << scav.getName() << ", but he can't see me! From now he is my slave!" << std::endl;
}
