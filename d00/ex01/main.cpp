// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/10/30 13:03:36 by skavunen          #+#    #+#             //
//   Updated: 2017/10/30 16:21:27 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "phone.hpp"

void				add_contact(Phone book[8], int i)
{
	std::cout << "first name: ";
	std::getline(std::cin, book[i].firstName);
	std::cout << "last name: ";
	std::getline(std::cin, book[i].lastName);
	std::cout << "nickname: ";
	std::getline(std::cin, book[i].nickName);
	std::cout << "login: ";
	std::getline(std::cin, book[i].login);
	std::cout << "postal adress: ";
	std::getline(std::cin, book[i].postAddr);
	std::cout << "email adress: ";
	std::getline(std::cin, book[i].email);
	std::cout << "phone number: ";
	std::getline(std::cin, book[i].phone);
	std::cout << "birthday date: ";
	std::getline(std::cin, book[i].birthDate);
	std::cout << "favorite meal: ";
	std::getline(std::cin, book[i].favMeal);
	std::cout << "underwear color: ";
	std::getline(std::cin, book[i].unwearCol);
	std::cout << "darkest secret: ";
	std::getline(std::cin, book[i].darkSecret);
	std::cout << "\033[32;05m" << "Contact successfully created!" << "\033[0m" << std::endl;
	book[i].act = 1;
}

void				dis_wide_right(std::string str)
{
	if (str.length() > 10)
		std::cout << str.substr(0,9) << ".";
	else
		std::cout << std::setw(10) << std::right << str;
}

int					display_search(Phone book[8])
{
	int				i;
	int				ret;

	i = 0;
	ret = 0;
	while (i < 8)
	{
		if (book[i].act == 1)
		{
			ret++;
			std::cout << std::setw(10) << std::right << i << "|";
			dis_wide_right(book[i].firstName);
			std::cout << "|";
			dis_wide_right(book[i].lastName);
			std::cout << "|";
			dis_wide_right(book[i].nickName);
			std::cout << std::endl;
		}
		i++;
	}
	return (ret);
}

void				write_book(std::string str, std::string book)
{
	std::cout << std::setw(17) << std::right << str << std::setw(0) << book << std::endl;
}

void				search_book(Phone book[8])
{
	int				i;
	int				index;
	std::string		input;

	i = 0;
	std::cout << "\033[33m" << "Searching for contacts..." << "\033[0m" << std::endl;
	if (!display_search(book))
	{
		std::cout << "\033[31m" << "No contacts!" << "\033[0m" << std::endl;
	}
	else
	{
		std::cout << std::endl << "\033[32;05m" << "Enter index: " << "\033[0m";
		std::getline(std::cin, input);
		index = atoi(input.c_str());
		if (!isnumber(input[0]) || index < 0 || index > 7 || !book[index].act)
		{
			std::cout << "\033[31m" << "BAD INDEX!" << "\033[0m" << std::endl;
			return ;
		}
		else
			book[index].showInfo();
	}

}

int					main( void ) {

	Phone			book[8];
	int				cur;
	std::string		command;
	int				i;

	cur = 0;
	while (std::cout << "$> " && std::getline(std::cin, command))
	{
		if (command == "ADD")
		{
			if (i == 8)
				i = 0;
			add_contact(book, i);
			i++;
		}
		else if (command == "SEARCH")
			search_book(book);
		else if (command == "EXIT")
			exit(0);
		else
			std::cout << "usage: <ADD> || <SEARCH> || <EXIT>" << std::endl;

	}
}
