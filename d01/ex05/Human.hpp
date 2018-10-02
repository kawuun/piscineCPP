// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/10/31 17:07:23 by skavunen          #+#    #+#             //
//   Updated: 2017/10/31 17:07:23 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMAN_H
# define HUMAN_H
# include "Brain.hpp"
# include <iostream>

class Human{

public:
    const Brain     &getBrain( void ) const;
    std::string     identify( void );
    Human( void );
    ~Human( void );

private:
    const Brain _myBrain;
};

#endif