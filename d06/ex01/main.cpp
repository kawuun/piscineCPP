// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/08 19:45:02 by skavunen          #+#    #+#             //
//   Updated: 2017/11/08 19:45:03 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Data.hpp"

Data        *deserialize( void * raw )
{
    Data *data = new Data;
    std::string *str = static_cast<std::string*>(raw);

    data->s1 = str->substr(0, 8);
    data->n = atoi(str->c_str() + 8 );
    data->s2 = str->substr(str->length() - 8, 8);
    return (data);
}

void        *serialize( void )
{
    std::string arr = "abcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string *str = new std::string;
    std::string tmp;
    std::ostringstream of;
    int i = -1;

    srand(time(NULL));
    while (++i < 8)
        *str += arr[rand() % (sizeof(arr) - 1)];
    of << rand() % 2147483647;
    tmp = of.str();
    *str += tmp;
    i = -1;
    while (++i < 8)
        *str += arr[rand() % (sizeof(arr) - 1)];
    
    std::cout << *str << std::endl;
    
    return reinterpret_cast<void*>(str);

}

int         main( void )
{
    void    *raw;
    Data    *ret;

    raw = serialize();
    ret = deserialize( raw );
    std::cout << "s1: " << ret->s1 << std::endl;
    std::cout << "n: " << ret->n << std::endl;
    std::cout << "s2: " << ret->s2 << std::endl;
    return (0);
}