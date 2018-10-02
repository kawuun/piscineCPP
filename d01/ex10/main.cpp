// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/01 15:56:58 by skavunen          #+#    #+#             //
//   Updated: 2017/11/01 17:31:17 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <fstream>

void        cat_from_input( void )
{
    std::string line;

    while (std::getline(std::cin,line))
    {
        std::cout << line << std::endl;
    }
}

void        cat_args(char **av)
{
    int     i = 0;

    while (av[i])
    {
        std::string file(av[i]);
        std::ifstream outfile(file);
        if (!outfile)
        {   
            std::cout << "cato9tails: " << file << ": no such file." << std::endl;
            i++;
            continue;
        }
        std::cout << outfile.rdbuf();
        i++;
    }
}

int         main( int ac, char **av )
{
    if (ac == 1)
    {
        cat_from_input();
    }
    else
    {
        cat_args(av + 1);
    }
    return (0);
}