// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Logger.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/01 13:40:42 by skavunen          #+#    #+#             //
//   Updated: 2017/11/01 13:40:42 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef LOGGER_H
# define LOGGER_H
# include <iostream>
# include <fstream>

class Logger 
{
public:
    void log(std::string const & dest, std::string const & message);
    Logger(std::string const & file);
    ~Logger( void );

private:
    std::string const & _filename;
    void logToConsole(std::string const & message);
    void logToFile(std::string const & message);
    std::string makeLogEntry(std::string const & message);
};

#endif