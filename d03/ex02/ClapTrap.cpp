// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/03 20:29:10 by skavunen          #+#    #+#             //
//   Updated: 2017/11/03 20:29:10 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
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
    std::cout <<  _name << " : ok! let's go." << std::endl;
}

ClapTrap::ClapTrap( std::string const & name ) : _name(name)
{
    _hp = 100;
    _maxhp = 100;
    _energy = 100;
    _maxenergy = 100;
    _level = 1;
    _meleeDmg = 30;
    _rangDmg = 20;
    _armor = 5;
    std::cout <<  _name << " : hello world!" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & copy )
{
    std::cout << _name << " : reloading bytes." << std::endl;
    *this = copy;
}

ClapTrap::~ClapTrap( void )
{
    std::cout << _name << " : died." << std::endl;
}

ClapTrap &          ClapTrap::operator=( ClapTrap const & copy )
{
    std::cout << _name << " : operator =" << std::endl;
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

void                ClapTrap::rangedAttack(std::string const & target)
{
    std::cout << "fighting: " << _name << " attacks " <<
    target << " at range, causing " << _rangDmg << " points of damage !" << std::endl;

}

void                ClapTrap::meleeAttack(std::string const & target)
{
    std::cout << "fighting: " << _name << " attacks " <<
    target << " at melee, causing " << _meleeDmg << " points of damage !" << std::endl;
}

void                ClapTrap::takeDamage(unsigned int amount)
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

void                ClapTrap::beRepaired(unsigned int amount)
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

int             ClapTrap::getHP( void ) const
{
    return _hp;
}

int             ClapTrap::getMHP( void ) const
{
    return _maxhp;
}

int             ClapTrap::getEN( void ) const
{
    return _energy;
}

int             ClapTrap::getMEN( void ) const
{
    return _maxenergy;
}

int             ClapTrap::getLVL( void ) const
{
    return _level;
}

int             ClapTrap::getMDam( void ) const
{
    return _meleeDmg;
}

int             ClapTrap::getRDam( void ) const
{
    return _rangDmg;
}

int             ClapTrap::getArm( void ) const
{
    return _armor;
}

std::string     ClapTrap::getName( void ) const
{
    return _name;
}

void            ClapTrap::setHP( int value )
{
    _hp = value;
}

void            ClapTrap::setMHP( int value )
{
    _maxhp = value;
}

void            ClapTrap::setEN( int value )
{
    _energy = value;
}

void            ClapTrap::setMEN( int value )
{
    _maxenergy = value;
}

void            ClapTrap::setLVL( int value )
{
    _level = value;
}

void            ClapTrap::setMDam(int value)
{
    _meleeDmg = value;
}

void            ClapTrap::setRDam( int value )
{
    _rangDmg = value;
}

void            ClapTrap::setArm( int value )
{
    _armor = value;
}

void            ClapTrap::setName( std::string const & name )
{
    _name = name;
}