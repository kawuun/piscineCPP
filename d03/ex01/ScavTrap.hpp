// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/03 20:03:51 by skavunen          #+#    #+#             //
//   Updated: 2017/11/03 20:03:52 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include <iostream>

class ScavTrap
{
public:
    ScavTrap( void );
    ScavTrap( std::string const & name);
    ScavTrap( ScavTrap const & copy );
    ~ScavTrap( void );
    ScavTrap & operator=(ScavTrap const & copy );
    void        beRepaired( unsigned int amount );
    void        takeDamage( unsigned int amount );
    void        meleeAttack( std::string const & target );
    void        rangedAttack( std::string const & target );
    void        challengeNewcomer( void );
    void        setArm( int value );
    void        setHP( int value );
    void        setMHP( int value );
    void        setEN( int value );
    void        setMEN( int value );
    void        setLVL( int value );
    void        setMDam( int value );
    void        setRDam( int value );
    void        setName( std::string const & name );
    int         getHP( void ) const;
    int         getMHP( void ) const;
    int         getEN( void ) const;
    int         getMEN( void ) const;
    int         getLVL( void ) const;
    int         getMDam( void ) const;
    int         getRDam( void ) const;
    int         getArm( void ) const;
    std::string getName( void ) const;

private:
    int _hp;
    int _maxhp;
    int _energy;
    int _maxenergy;
    int _level;
    int _meleeDmg;
    int _rangDmg;
    int _armor;
    std::string _name;
};

#endif