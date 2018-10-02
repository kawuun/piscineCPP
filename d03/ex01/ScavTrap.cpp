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

ScavTrap::ScavTrap( void )
{
    _hp = 100;
    _maxhp = 100;
    _energy = 50;
    _maxenergy = 50;
    _level = 1;
    _name = "DefaultScav";
    _meleeDmg = 20;
    _rangDmg = 15;
    _armor = 3;
    std::cout << "Glitching weirdness is a term of endearment, right?" << std::endl;
}

ScavTrap::ScavTrap( std::string const & name ) : _name(name)
{
    _hp = 100;
    _maxhp = 100;
    _energy = 50;
    _maxenergy = 50;
    _level = 1;
    _meleeDmg = 20;
    _rangDmg = 15;
    _armor = 3;
    std::cout << "Hey everybody! I'm ScavTrap!" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & copy )
{
    std::cout << "ScavTrap: bytes copied!" << std::endl;
    *this = copy;
}

ScavTrap::~ScavTrap( void )
{
    std::cout << "I'm done." << std::endl;
}

ScavTrap &          ScavTrap::operator=( ScavTrap const & copy )
{
    std::cout << "I'm here!" << std::endl;
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

void                ScavTrap::rangedAttack(std::string const & target)
{
    std::cout << "ScavTrap fighting: " << _name << " attacks " <<
    target << " at range, causing " << _rangDmg << " points of damage !" << std::endl;

}

void                ScavTrap::meleeAttack(std::string const & target)
{
    std::cout << "ScavTrap fighting " << _name << " attacks " <<
    target << " at melee, causing " << _meleeDmg << " points of damage !" << std::endl;
}

void                ScavTrap::takeDamage(unsigned int amount)
{
    if (amount)
    {
        if (_hp >= ((int)amount - _armor))
        {
            _hp -= amount - _armor;
            std::cout << "Poison!" << std::endl;
        }
        else
        {
            _hp = 0;
            std::cout << "WOW, what a punch!" << std::endl;
        }
    }
}

void                ScavTrap::beRepaired(unsigned int amount)
{
    if (amount)
    {
        if (_hp < _maxhp)
        {
            _hp += amount;
            if(_hp > _maxhp)
                _hp = _maxhp;
            std::cout << "hp....hp....hp...." << std::endl;
        }
        else
        {
            std::cout << "FULL HP!!!" << std::endl;
        }
    }
}

int             ScavTrap::getHP( void ) const
{
    return _hp;
}

int             ScavTrap::getMHP( void ) const
{
    return _maxhp;
}

int             ScavTrap::getEN( void ) const
{
    return _energy;
}

int             ScavTrap::getMEN( void ) const
{
    return _maxenergy;
}

int             ScavTrap::getLVL( void ) const
{
    return _level;
}

int             ScavTrap::getMDam( void ) const
{
    return _meleeDmg;
}

int             ScavTrap::getRDam( void ) const
{
    return _rangDmg;
}

int             ScavTrap::getArm( void ) const
{
    return _armor;
}

std::string     ScavTrap::getName( void ) const
{
    return _name;
}

void            ScavTrap::setHP( int value )
{
    _hp = value;
}

void            ScavTrap::setMHP( int value )
{
    _maxhp = value;
}

void            ScavTrap::setEN( int value )
{
    _energy = value;
}

void            ScavTrap::setMEN( int value )
{
    _maxenergy = value;
}

void            ScavTrap::setLVL( int value )
{
    _level = value;
}

void            ScavTrap::setMDam(int value)
{
    _meleeDmg = value;
}

void            ScavTrap::setRDam( int value )
{
    _rangDmg = value;
}

void            ScavTrap::setArm( int value )
{
    _armor = value;
}

void            ScavTrap::setName( std::string const & name )
{
    _name = name;
}