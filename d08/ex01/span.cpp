// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   span.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/10 19:32:25 by skavunen          #+#    #+#             //
//   Updated: 2017/11/10 19:32:26 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Span.hpp"

Span::Span( void )
{
    _tab = new int[0];
    _len = 0;
    _ind = 0;
}

Span::Span( unsigned int num )
{
    _tab = new int[num];
    _len = num;
    _ind = 0;
}

Span::Span( Span const & copy )
{
    *this = copy;
}

Span &      Span::operator=( Span const & copy )
{
    if (_len >= 0)
        delete [] _tab;
    _len = copy.getLen();
    _ind = copy.getInd();
    
    int i = 0;
    _tab = new int[_len];
    while ( i < _len )
    {
        _tab[i] = getElem(i);
    }
    return (*this);
}

Span::~Span( void )
{
    if (_len >= 0)
        delete [] _tab;
}

int         Span::getElem( int ind ) const
{
    if (ind < _len)
        return _tab[ind];
    else
        throw std::exception();
}

int         Span::getInd( void ) const
{
    return _ind;
}

int         Span::getLen( void ) const
{
    return _len;
}

void        Span::addNumber( int num )
{
    if (_ind < _len)
        _tab[_ind++] = num;
    else
        throw std::exception();
}

int         Span::shortestSpan( void )
{
    int     tmp;
    int     ret;
    int *arr = new int[_len];

    if (_len > 0)
    {
        ret = 2147483645;
        for (int i = 0; i < _len; i++)
            arr[i] = _tab[i];

        std::sort( arr, arr + _len );

        for( int i = 0; i < _len; i++ )
        {
            for( int j = 0; j < _len; j++ )
            {
                tmp = arr[j] - arr[i];
                if ( (tmp < ret && tmp > 0) || (tmp < ret && tmp == 0 && i !=j))
                    ret = tmp;
            }
        }
        delete [] arr;
        return ret;
    }
    else
        throw std::exception();
}

int         Span::longestSpan( void )
{
    if (_len >= 0)
    {
        int *tmp = new int[_len];

        for (int i = 0; i < _len; i++)
            tmp[i] = _tab[i];

        std::sort( tmp, tmp + _len );
        int ret = tmp[_len - 1] - tmp[0];
        delete [] tmp;
        return ret;
    }
    throw std::exception();
}