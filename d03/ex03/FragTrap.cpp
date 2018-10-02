// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/03 11:01:37 by skavunen          #+#    #+#             //
//   Updated: 2017/11/03 11:01:38 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap ()
{
    _hp = 100;
    _maxhp = 100;
    _energy = 100;
    _maxenergy = 100;
    _level = 1;
    _meleeDmg = 30;
    _rangDmg = 20;
    _armor = 5;
    _name = "Default Frag";
    std::cout << _name << " : Let's get this party started!" << std::endl;
}

FragTrap::FragTrap( std::string const & name ) : ClapTrap ( name )
{
    _hp = 100;
    _maxhp = 100;
    _energy = 100;
    _maxenergy = 100;
    _level = 1;
    _meleeDmg = 30;
    _rangDmg = 20;
    _armor = 5;
    std::cout << _name << " : Hey everybody! Check out my package!" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & copy )
{
    std::cout << "Adding new Flag!" << std::endl;
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


FragTrap::~FragTrap( void )
{
    std::cout << _name << " : Argh arghargh death gurgle gurglegurgle urgh... death." << std::endl;
}



void                FragTrap::critStrike(std::string const & target)
{
    std::cout << _name << " : Crit-i-cal! -> " << target << std::endl;
}

void                FragTrap::airStrike(std::string const & target)
{
    std::cout << _name << " : Step right up, to the Bulletnator 9000!" << " air_strike -> " << target << std::endl;
}

void                FragTrap::rocketStrike(std::string const & target)
{
    std::cout << _name << " : Ha ha ha! Fall before your robot overlord!" << " rocket_strike -> " << target << std::endl;
}

void                FragTrap::throwGrenade(std::string const & target)
{
    std::cout << _name << " : Exploooooosions! -> " << target << std::endl;
}

void                FragTrap::frozEnemy(std::string const & target)
{
    std::cout << _name << " : Ice to meet you. ->" << target << std::endl;
}

void                FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    typedef         void (FragTrap::*method_func)(std::string const & target);

    method_func array[5] = {&FragTrap::critStrike, &FragTrap::airStrike, &FragTrap::rocketStrike, &FragTrap::throwGrenade, &FragTrap::frozEnemy};
    if (_energy)
    {
        srand(time(NULL));
        (this->*array[rand() % 5])(target);
        _energy -= 25;
    }
    else
    {
        std::cout << "Crap, no more shots left!" << std::endl;
    }

}

