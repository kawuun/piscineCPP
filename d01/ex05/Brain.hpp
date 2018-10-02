// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/10/31 17:06:49 by skavunen          #+#    #+#             //
//   Updated: 2017/10/31 17:06:50 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef BRAIN_H
# define BRAIN_H
# include <iostream>

class Brain{

public:
    std::string identify( void ) const ;
    Brain( void );
    ~Brain( void );
};

#endif