// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/10/31 15:56:37 by skavunen          #+#    #+#             //
//   Updated: 2017/10/31 15:56:37 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde( int num )
{
    std::string randNames[] = {"Olexiy", "Daniel", "Diana", "Lolka",
    "Arnold", "Vasya", "Cheater", "Bones"};
    int i = 0;

    if (num < 0)
    {
        std::cout << "too small num of Zombies!" << std::endl;
        exit(0);
    }
    this->horde = new Zombie[num];
    this->num = num;
    srand(time(NULL));
    while (i < num)
    {
        this->horde[i].setName(randNames[rand() % 8]);
        this->horde[i].setType("horde");
        i++;
    }
}

ZombieHorde::~ZombieHorde( void )
{
    delete [] this->horde;
    std::cout << "All horde deleted!" << std::endl;
    return ;
}

void        ZombieHorde::announce( void )
{
    int i = 0;

    while (i < this->num)
    {
        this->horde[i].announce();
        i++;
    }
    return ;
}