// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   iter.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/09 14:17:48 by skavunen          #+#    #+#             //
//   Updated: 2017/11/09 16:59:33 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

template<typename T>

void        iter(T *arr, unsigned int length, void(*f)(T & arr))
{
    if ( length > 0 )
    {
        while ( length-- )
        {
            f(*arr);
            arr++;
        }
    }
}

template<typename T>

void        print_arr( T & arr)
{
    std::cout << arr << std::endl;
}

int         main()
{
    std::string test[3] = {"nfs", "42", "moulinette"};
    iter(test, 3, print_arr);

	int tab[3] = {42, 2016, 1488};
	iter(tab, 3, print_arr);
}
