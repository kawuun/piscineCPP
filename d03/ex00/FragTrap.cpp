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

FragTrap::FragTrap( void )
{
    _hp = 100;
    _maxhp = 100;
    _energy = 100;
    _maxenergy = 100;
    _level = 1;
    _name = "Defaultname";
    _meleeDmg = 30;
    _rangDmg = 20;
    _armor = 5;
    std::cout << "Let's get this party started!" << std::endl;
}

FragTrap::FragTrap( std::string const & name ) : _name(name)
{
    _hp = 100;
    _maxhp = 100;
    _energy = 100;
    _maxenergy = 100;
    _level = 1;
    _meleeDmg = 30;
    _rangDmg = 20;
    _armor = 5;
    std::cout << "Hey everybody! Check out my package!" << std::endl;
}

FragTrap::FragTrap( FragTrap const & copy )
{
    std::cout << "Recompiling my combat code!" << std::endl;
    *this = copy;
}

FragTrap::~FragTrap( void )
{
    std::cout << "Argh arghargh death gurgle gurglegurgle urgh... death." << std::endl;
}

FragTrap &          FragTrap::operator=( FragTrap const & copy )
{
    std::cout << "This time it'll be awesome, I promise!" << std::endl;
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

void                FragTrap::rangedAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << _name << " attacks " <<
    target << " at range, causing " << _rangDmg << " points of damage !" << std::endl;

}

void                FragTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << _name << " attacks " <<
    target << " at melee, causing " << _meleeDmg << " points of damage !" << std::endl;
}

void                FragTrap::takeDamage(unsigned int amount)
{
    if (amount)
    {
        if (_hp >= ((int)amount - _armor))
        {
            _hp -= amount - _armor;
            std::cout << "My robotic flesh! AAHH!" << std::endl;
        }
        else
        {
            _hp = 0;
            std::cout << "OUCH!" << std::endl;
        }
    }
}

void                FragTrap::beRepaired(unsigned int amount)
{
    if (amount)
    {
        if (_hp < _maxhp)
        {
            _hp += amount;
            if(_hp > _maxhp)
                _hp = _maxhp;
            std::cout << "Health over here!" << std::endl;
        }
        else
        {
            std::cout << "Healsies!" << std::endl;
        }
    }
}

void                FragTrap::critStrike(std::string const & target)
{
    std::cout << "Crit-i-cal! -> " << target << std::endl;
}

void                FragTrap::airStrike(std::string const & target)
{
    std::cout << "Step right up, to the Bulletnator 9000!" << "air_strike -> " << target << std::endl;
}

void                FragTrap::rocketStrike(std::string const & target)
{
    std::cout << "Ha ha ha! Fall before your robot overlord!" << "rocket_strike -> " << target << std::endl;
}

void                FragTrap::throwGrenade(std::string const & target)
{
    std::cout << "Exploooooosions! -> " << target << std::endl;
}

void                FragTrap::frozEnemy(std::string const & target)
{
    std::cout << "Ice to meet you. ->" << target << std::endl;
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

int             FragTrap::getHP( void ) const
{
    return _hp;
}

int             FragTrap::getMHP( void ) const
{
    return _maxhp;
}

int             FragTrap::getEN( void ) const
{
    return _energy;
}

int             FragTrap::getMEN( void ) const
{
    return _maxenergy;
}

int             FragTrap::getLVL( void ) const
{
    return _level;
}

int             FragTrap::getMDam( void ) const
{
    return _meleeDmg;
}

int             FragTrap::getRDam( void ) const
{
    return _rangDmg;
}

int             FragTrap::getArm( void ) const
{
    return _armor;
}

std::string     FragTrap::getName( void ) const
{
    return _name;
}

void            FragTrap::setHP( int value )
{
    _hp = value;
}

void            FragTrap::setMHP( int value )
{
    _maxhp = value;
}

void            FragTrap::setEN( int value )
{
    _energy = value;
}

void            FragTrap::setMEN( int value )
{
    _maxenergy = value;
}

void            FragTrap::setLVL( int value )
{
    _level = value;
}

void            FragTrap::setMDam(int value)
{
    _meleeDmg = value;
}

void            FragTrap::setRDam( int value )
{
    _rangDmg = value;
}

void            FragTrap::setArm( int value )
{
    _armor = value;
}

void            FragTrap::setName( std::string const & name )
{
    _name = name;
}