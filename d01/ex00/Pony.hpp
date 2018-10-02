// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/10/31 11:53:16 by skavunen          #+#    #+#             //
//   Updated: 2017/10/31 11:53:16 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PONY_H
#define PONY_H

class Pony {

public:
    
    Pony (int where_alloc);
    ~Pony ( void );

    void sayHello ( void );

private:
    int _where_alloc;
};

#endif