// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   span.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/10 19:32:23 by skavunen          #+#    #+#             //
//   Updated: 2017/11/10 19:32:23 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SPAN_H
# define SPAN_H

# include <iostream>

class Span
{
private:
    int _len;
    int _ind;
    int *_tab;
public:
    Span( void );
    Span( unsigned int num );
    Span( Span const & copy );
    Span & operator=( Span const & copy );
    ~Span( void );
    void    addNumber( int num );
    int     shortestSpan( void );
    int     longestSpan( void );
    int     getLen( void ) const ;
    int     getElem( int ind ) const ;
    int     getInd( void ) const;
};

#endif