// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/01 19:36:43 by skavunen          #+#    #+#             //
//   Updated: 2017/11/01 19:36:44 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.hpp"

Fixed::Fixed( void)
{
    std::cout << "Default constructor called" << std::endl;
    this->_val = 0;
    return;
}

Fixed::Fixed( Fixed const & copy )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;

    return;
}

Fixed::Fixed ( const int num )
{
    std::cout << "Int constructor called" << std::endl;
    setRawBits(num << this->factbits);
}

Fixed::Fixed ( const float num )
{
    std::cout << "Float constructor called" << std::endl;
    setRawBits((int)roundf(num * (1 << factbits)));
}

Fixed::~Fixed( void )
{
    std::cout << "Destructor called" << std::endl;

    return;
}

Fixed &     Fixed::operator=( Fixed const & copy )
{
    std::cout << "Assignation operator called" << std::endl;

    if (this != &copy)
        this->_val = copy.getRawBits();
    
    return (*this);
}

int         Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    
    return (_val);
}

void        Fixed::setRawBits( int const raw )
{
    _val = raw;
}

std::ostream &      operator<<( std::ostream & o, Fixed const & i)
{
    o << i.toFloat();

    return (o);
}

float             Fixed::toFloat( void ) const
{
    return ((float)_val / (1 << factbits));
}

int                 Fixed::toInt( void ) const
{
    return ((int)_val >> factbits);
}

bool                Fixed::operator>( Fixed const &cmp ) const
{
    return  (_val > cmp.getRawBits());
}

bool                Fixed::operator<( Fixed const & cmp ) const
{
    return  (_val < cmp.getRawBits());
}

bool                Fixed::operator>=( Fixed const & cmp ) const
{
    return  (_val >= cmp.getRawBits());
}

bool                Fixed::operator<=( Fixed const & cmp ) const
{
    return  (_val <= cmp.getRawBits());
}

bool                Fixed::operator==( Fixed const & cmp ) const
{
    return  (_val == cmp.getRawBits());
}

bool                Fixed::operator!=( Fixed const & cmp ) const
{
    return (_val != cmp.getRawBits());
}

Fixed &             Fixed::operator++(void)
{
    ++_val;
    return (*this);
}

Fixed               Fixed::operator++(int)
{
    Fixed tmp(*this);

    ++(*this);
    return (tmp);
}

Fixed &             Fixed::operator--(void)
{
    --_val;
    return (*this);
}

Fixed               Fixed::operator--(int)
{
    Fixed tmp(*this);

    --(*this);
    return (tmp);
}

Fixed               Fixed::operator*( Fixed const & cmp )
{
    return Fixed(this->toFloat() * cmp.toFloat());
}

Fixed               Fixed::operator/( Fixed const &cmp )
{
    return Fixed(this->toFloat() / cmp.toFloat());
    
}

Fixed   Fixed::operator+( Fixed const & cmp )
{
    return Fixed(this->toFloat() + cmp.toFloat());
}

Fixed   Fixed::operator-( Fixed const & cmp )
{
    return Fixed(this->toFloat() + cmp.toFloat());
}

Fixed &               min( Fixed & f1, Fixed & f2)
{
    if ( f2 < f1 )
    {
        return (f2);
    }
    else
    {
        return (f1);
    }

}

Fixed &               max( Fixed & f1, Fixed & f2)
{
    if ( f2 < f1 )
    {
        return (f2);
    }
    else
    {
        return (f1);
    }

}

Fixed const &         Fixed::min( Fixed const & f1, Fixed const &f2 )
{
    if (f2 < f1)
    {
        return (f2);
    }
    else
    {
        return (f1);
    }
}

Fixed const &        Fixed::max( Fixed const & f1, Fixed const & f2 )
{
    if (f2 > f1)
    {
        return (f2);
    }
    else
    {
        return (f1);
    }
}