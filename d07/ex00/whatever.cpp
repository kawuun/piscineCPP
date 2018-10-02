// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   whatever.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/09 13:05:43 by skavunen          #+#    #+#             //
//   Updated: 2017/11/09 13:05:43 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //


# include <iostream>

template<typename T>

void       swap( T & x, T & y )
{
    T     tmp;

    tmp = x;
    x = y;
    y = tmp;

}

template<typename T>

T const &       max( T const & x, T const & y )
{
    return y >= x ? y : x;
}

template<typename T>

T const &       min( T const & x, T const & y )
{
    return y <= x ? y : x;
}

int             main()
{
    int a = 42;
    int b = 21;

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    ::swap(a, b);
    std::cout << a << std::endl;
    std::cout << b << std::endl;

    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
}