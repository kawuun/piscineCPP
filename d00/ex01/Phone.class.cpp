// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Phone.class.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/10/30 13:15:07 by skavunen          #+#    #+#             //
//   Updated: 2017/10/30 16:05:13 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "phone.hpp"

Phone::Phone( void ) {

	this->act = 0;
	return;
}

Phone::~Phone( void ) {

	return;
}

void Phone::showInfo( void )
{
	write_book("first name: ", this->firstName);
	write_book("last name: ", this->lastName);
	write_book("nickname: ", this->nickName);
	write_book("login: ", this->login);
	write_book("postal adress: ", this->postAddr);
	write_book("email: ", this->email);
	write_book("phone number: ", this->phone);
	write_book("birthday date: ", this->birthDate);
	write_book("favorite meal: ", this->favMeal);
	write_book("underwear color: ", this->unwearCol);
	write_book("darkest secret: ", this->darkSecret);
}
