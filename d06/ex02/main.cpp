// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/08 20:32:08 by skavunen          #+#    #+#             //
//   Updated: 2017/11/08 20:32:08 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base            *generate( void )
{
    int         ret;

    srand(time(NULL));

    ret = rand() % 3;

    if (ret == 1)
        return new A;
    else if (ret == 2)
        return new C;
    else
        return new B;
}

void            identify_from_pointer( Base * p )
{
    Base        *test;

    test = dynamic_cast<A*>(p);
    if (test)
        std::cout << "A" << std::endl;
    else
    {
        test = dynamic_cast<B*>(p);
        if (test)
            std::cout << "B" << std::endl;
        else
            std::cout << "C" << std::endl;
    }
}

void            identify_from_reference( Base & p )
{
    Base        *test;
    
    try
    {
        test = &dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch (std::exception & e)
    {
        try
        {
            test = &dynamic_cast<B&>(p);
            std::cout << "B" << std::endl;
        }
        catch (std::exception & e)
        {
            std::cout << "C" << std::endl;
        }
    }
}

int             main( void )
{
    Base        *base;

    base = generate();
    identify_from_pointer(base);
    identify_from_reference(*base);
    return (0);
}