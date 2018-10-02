// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Conversion.class.cpp                               :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/08 15:51:47 by skavunen          #+#    #+#             //
//   Updated: 2017/11/08 15:51:47 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Conversion.class.hpp"

Conversion::Conversion( void )
{

}

Conversion::~Conversion( void )
{

}

Conversion::Conversion( char * string ) : _argv(string)
{

}

void            Conversion::toInt( void )
{
    int         ret;

    try
    {
        ret = std::atoi(_argv);
        if (!errno)
            std::cout << static_cast<int>(ret);
        else
            std::cout << "impossible";
    }
    catch ( std::exception & e)
    {
        std::cout << "impossible";
    }
}

void            Conversion::toChar( void )
{
    char         ret;

    try
    {
        ret = std::atoi(_argv);
        if (isprint(ret))
            std::cout << static_cast<char>(ret);
        else if (!errno)
            std::cout << "Non displayable";
        else
            std::cout << "impossible";
    }
    catch ( std::exception & e)
    {
        std::cout << "impossible";
    }
}

void            Conversion::toFloat( void )
{
    float         ret;

    try
    {
        ret = std::atof(_argv);
        std::cout << std::fixed;
        std::cout.precision(1);
        std::cout << static_cast<float>(ret) << "f";
    }
    catch ( std::exception & e )
    {
        std::cout << "impossible";
    }
}

void            Conversion::toDouble( void )
{
    double       ret;

    try
    {
        ret = std::strtod(_argv, NULL);
        std::cout << static_cast<double>(ret);
    }
    catch ( std::exception & e )
    {
        std::cout << "impossible";
    }
}