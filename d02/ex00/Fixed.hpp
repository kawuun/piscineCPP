// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/01 19:36:36 by skavunen          #+#    #+#             //
//   Updated: 2017/11/01 19:36:36 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FIXED_H
# define FIXED_H
# include <iostream>

class Fixed
{
public:
    Fixed( void );
    Fixed( Fixed const & copy);
    ~Fixed( void );
    Fixed & operator=( Fixed const & copy);
    int     getRawBits( void ) const;
    void    setRawBits( int const raw );

private:
    int _val;
    static const int factbits = 8;
};

#endif