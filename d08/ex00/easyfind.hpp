// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   easyfind.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/09 18:42:28 by skavunen          #+#    #+#             //
//   Updated: 2017/11/09 18:42:29 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef EASYFIND_H
# define EASYFIND_H

# include <iostream>
# include <vector>

template<typename T>

typename T::iterator    easyfind( T  & cont, int find )
{
    typename T::iterator it = std::find( cont.begin(), cont.end(), find );
    if (it != cont.end())
        return (it);
    throw std::exception();
}

#endif