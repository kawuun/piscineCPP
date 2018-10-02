// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   megaphone.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/10/30 11:10:20 by skavunen          #+#    #+#             //
//   Updated: 2017/10/30 11:16:45 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

char		*toupp_str(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 96 && str[i] < 123)
			str[i] -= 32;
		i++;
	}
	return (str);
}

int			main(int ac, char **av)
{
	int		i;
	char	*str;

	i = 1;
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (av[i])
	{
		str = toupp_str(av[i]);
		std::cout << str;
		i++;
	}
	std::cout << std::endl;
	return (0);
}
