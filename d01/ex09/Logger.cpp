// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Logger.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/01 13:40:38 by skavunen          #+#    #+#             //
//   Updated: 2017/11/01 13:40:38 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Logger.hpp"

typedef void (Logger::*method_func)(std::string const & message);

Logger::Logger(std::string const & file) : _filename(file)
{
    return;
}

Logger::~Logger( void )
{
    return;
}

void Logger::logToConsole(std::string const & message)
{
    std::string msg;

    msg = this->makeLogEntry(message);
    std::cout << msg << std::endl;
}

void Logger::logToFile(std::string const & message)
{
    std::ofstream output(this->_filename);
    std::string msg = this->makeLogEntry(message);
    if (output)
    {
        output << msg;
        output.close();
    }
    else
    {
        std::cout << "Error creating output file!" << std::endl;
        exit(0);
    }
}

std::string Logger::makeLogEntry(std::string const & message)
{
    char buf[80];
    time_t sec = time(NULL);
    tm* timeinfo = localtime(&sec);

    strftime(buf, 80, "[%Y%m%d_%H%M%S] ", timeinfo);
    std::string ret(buf);
    ret += "Some cheater log in with message: [";
    ret += message;
    ret += "]";
    return (ret);
}

void Logger::log(std::string const & dest, std::string const & message)
{
    std::string const names[2] = {"logToFile", "logToConsole"};
    method_func array[2] = {&Logger::logToFile, &Logger::logToConsole};
    
    int i = 0;
    
    while (i < 2)
    {
        if (dest == names[i])
        {
            (this->*array[i])(message);
            break;
        }
        i++;
    }
}