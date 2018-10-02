// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/10/31 12:53:49 by skavunen          #+#    #+#             //
//   Updated: 2017/10/31 12:53:50 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIE_H
# define ZOMBIE_H
#include <iostream>

class Zombie {

public:
    void        announce( void );
    void        setName( std::string newname );
    void        setType( std::string newtype );
    std::string getName( void );
    std::string getType( void );
    Zombie( void );
    ~Zombie( void );
private:
    std::string _type;
    std::string _name;
};

#endif