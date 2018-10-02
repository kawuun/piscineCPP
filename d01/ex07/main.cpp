// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/01 11:23:10 by skavunen          #+#    #+#             //
//   Updated: 2017/11/01 11:23:10 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <fstream>

void        replace_cont(std::string& content, std::string find, std::string replace)
{
    size_t  pos;

    pos = 0;
    if (find.length() > 0 && replace.length() > 0)
    {
        while ((pos = content.find(find, pos)) != std::string::npos) {
            content.replace(pos, find.length(), replace);
            pos += replace.length();
        }
    }
    else
    {
        std::cout << "Invalid find and/or replace string." << std::endl;
        exit(0);
    }
}

void        write_to_file(std::string content, char* filename)
{
    std::string file(filename);
    file += ".replace";
    std::ofstream output(file);
    if (output)
    {
        output << content;
        output.close();
    }
    else
    {
        std::cout << "Error creating output file!" << std::endl;
        exit(0);
    }
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Bad num of args!" << std::endl;
        exit(0);
    }
    std::ifstream ifs(av[1]);
    std::string find(av[2]);
    std::string replace(av[3]);
    std::string content( (std::istreambuf_iterator<char>(ifs) ),
                         (std::istreambuf_iterator<char>() ));
    if (!ifs)
    {
        std::cout << "No such file!" << std::endl;
        exit(0);
    }
    replace_cont(content, find, replace);
    write_to_file(content, av[1]);
}