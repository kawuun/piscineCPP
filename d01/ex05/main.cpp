// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/10/31 17:07:31 by skavunen          #+#    #+#             //
//   Updated: 2017/10/31 17:07:31 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"
#include "Brain.hpp"
#include <iostream>

int main()
{
    Human bob;
    std::cout << bob.identify() << std::endl;
    std::cout << bob.getBrain().identify() << std::endl;
}