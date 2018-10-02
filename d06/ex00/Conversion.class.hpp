// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Conversion.class.hpp                               :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/08 15:51:50 by skavunen          #+#    #+#             //
//   Updated: 2017/11/08 15:51:50 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CONVERSION_CLASS_H
# define CONVERSION_CLASS_H

# include <iostream>

class Conversion
{
    char * _argv;
    Conversion( void );
public:
    ~Conversion( void );
    Conversion( char * string );
    void toInt( void );
    void toChar( void );
    void toFloat( void );
    void toDouble( void );
};

#endif