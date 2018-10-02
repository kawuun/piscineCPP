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
# include <cmath>

class Fixed
{
public:
    Fixed( void );
    Fixed( Fixed const & copy);
    Fixed( const int num);
    Fixed( const float num);
    ~Fixed( void );
    Fixed & operator=( Fixed const & copy);

    bool    operator>( Fixed const &cmp ) const ;
    bool    operator<( Fixed const &cmp ) const ;
    bool    operator>=( Fixed const &cmp ) const ;
    bool    operator<=( Fixed const &cmp ) const ;
    bool    operator==( Fixed const &cmp ) const ;
    bool    operator!=( Fixed const &cmp ) const ;
    Fixed   &operator++(void);
    Fixed   operator++(int);
    Fixed   &operator--(void);
    Fixed   operator--(int);
    Fixed   operator*( Fixed const & cmp );
    Fixed   operator/( Fixed const & cmp );
    Fixed   operator+( Fixed const & cmp );
    Fixed   operator-( Fixed const & cmp );

    static Fixed &               max( Fixed & f1, Fixed & f2);
    static Fixed &               min( Fixed & f1, Fixed & f2);
    static Fixed const    &min( Fixed const & f1, Fixed const & f2 );
    static Fixed const    &max( Fixed const & f1, Fixed const & f2 );

    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
    float   toFloat( void ) const;
    int     toInt( void ) const;

private:
    int                 _val;
    static const int    factbits = 8;
};

std::ostream &      operator<<( std::ostream & o, Fixed const & i);

#endif