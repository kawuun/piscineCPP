// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/03 11:01:41 by skavunen          #+#    #+#             //
//   Updated: 2017/11/03 11:01:41 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FRAGTRAP_H
# define FRAGTRAP_H
# include <iostream>

class FragTrap
{
public:
    FragTrap( void );
    FragTrap( std::string const & name);
    FragTrap( FragTrap const & copy );
    ~FragTrap( void );
    FragTrap & operator=(FragTrap const & copy );
    void        beRepaired( unsigned int amount );
    void        takeDamage( unsigned int amount );
    void        meleeAttack( std::string const & target );
    void        rangedAttack( std::string const & target );
    void        frozEnemy(std::string const & target);
    void        throwGrenade(std::string const & target);
    void        rocketStrike(std::string const & target);
    void        airStrike(std::string const & target);
    void        critStrike(std::string  const & target);
    void        vaulthunter_dot_exe(std::string const & target);
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