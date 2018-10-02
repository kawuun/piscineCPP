// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/01 12:21:21 by skavunen          #+#    #+#             //
//   Updated: 2017/11/01 12:21:21 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMAN_H
# define HUMAN_H
# include <iostream>

class Human
{
private:
    void meleeAttack(std::string const & target);
    void rangedAttack(std::string const & target);
    void intimidatingShout(std::string const & target);
public:
    void action(std::string const & action_name, std::string const & target);
};

#endif