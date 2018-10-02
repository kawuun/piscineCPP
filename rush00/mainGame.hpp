// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   mainGame.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/04 13:41:54 by skavunen          #+#    #+#             //
//   Updated: 2017/11/04 13:41:54 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef MAINGAME_H
# define MAINGAME_H

# include <iostream>
# include <ncurses.h>
# include <unistd.h>
# include "Game.class.hpp"
# include "Player.class.hpp"
# include "EnemyEvent.hpp"
# include <sys/ioctl.h>

void        addStrWind(int y, int x, std::string str);
void        run();
void        close();

#endif