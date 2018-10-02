// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/01 12:21:34 by skavunen          #+#    #+#             //
//   Updated: 2017/11/01 12:21:34 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"

typedef void (Human::*method_func)(std::string const & target);

void            Human::meleeAttack(std::string const & target)
{
    std::cout << "Melee attack -> " << target << std::endl;
}

void            Human::rangedAttack(std::string const & target)
{
    std::cout << "Ranged attack -> " << target << std::endl;
}

void            Human::intimidatingShout(std::string const & target)
{
    std::cout << "Intimidating shout -> " << target << std::endl;
}

void            Human::action(std::string const & action_name, std::string const & target)
{
    std::string const names[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
    method_func array[3] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
    int i = 0;

    while (i < 3)
    {
        if (action_name == names[i])
        {
            (this->*array[i])(target);
            break;
        }
        i++;
    }
}