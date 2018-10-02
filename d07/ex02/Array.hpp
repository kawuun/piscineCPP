// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Array.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/09 16:59:57 by skavunen          #+#    #+#             //
//   Updated: 2017/11/09 16:59:58 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ARRAY_H
# define ARRAY_H

# include <iostream>

template<typename T>

class Array
{
public:
    Array( void ) {

        _arr = new T[0];
        _len = 0;
    }

    Array( unsigned int n ) {

        if (n > 0)
        {
            _arr = new T[n];
            for ( unsigned int i = 0; i < n; i++ )
                _arr[i] = 0;
            _len = n;
        }
    }

    Array( Array const & copy ) {

        _len = copy.getLen();
        _arr = new T[_len];

        for( int i = 0; i < _len; i++ )
        {
            _arr[i] = copy[i];
        }
    }

    Array & operator=( Array const & copy ) {

        delete [] _arr;
        _len = copy.getLen();
        _arr = new T[_len];
    
        for( unsigned int i = 0; i < _len; i++ )
        {
            _arr[i] = copy[i];
        }
    }

    ~Array( void ) {

        delete [] _arr;
    }

    T & operator[]( unsigned int index) {

        if (index >= 0 && index < _len )
            return (_arr[index]);
        else
            throw std::exception();
    }

    unsigned int size( void ) const {

        return _len;
    }

private:
    T *             _arr;
    unsigned int    _len;
};

#endif