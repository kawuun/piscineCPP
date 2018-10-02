// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Phone.class.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/10/30 13:05:51 by skavunen          #+#    #+#             //
//   Updated: 2017/10/30 16:06:03 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PHONE_CLASS_H
#define PHONE_CLASS_H

class Phone {

public:
	int act;
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string login;
	std::string postAddr;
	std::string email;
	std::string phone;
	std::string birthDate;
	std::string favMeal;
	std::string unwearCol;
	std::string darkSecret;

	Phone( void );
	~Phone( void );
	void showInfo( void );
};

#endif
