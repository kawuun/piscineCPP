// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ex01.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/10/31 12:48:17 by skavunen          #+#    #+#             //
//   Updated: 2017/11/01 17:20:50 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

void    memoryLeak()
{
        std::string* panthere = new std::string("String panthere");
        std::cout << *panthere << std::endl;
        delete panthere;
}
