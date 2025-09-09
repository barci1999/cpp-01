/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 17:21:17 by pablo             #+#    #+#             */
/*   Updated: 2025/09/09 18:38:28 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    functions[0] = &Harl::debug;
    functions[1] = &Harl::info;
    functions[2] = &Harl::warning;
    functions[3] = &Harl::error;
}

Harl::~Harl()
{
}
void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger." <<std::endl;
    std::cout << "I really do!" << std::endl;
}
void Harl::info()
{
    std::cout <<  "I cannot believe adding extra bacon costs more money." << std::endl;
    std::cout <<  "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}
void Harl::warning()
{
    std::cout <<  "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I've been coming for years, where as you started working here just last month." << std::endl;
}
void Harl::error()
{
    std::cout << "This is unacceptable!"<< std::endl;
    std::cout <<  "I want to speak to the manager now." << std::endl;
}
void Harl::complain( std::string level )
{
    std::string levels[] = {"DEBUG","INFO","WARNING","ERROR"};
    for (size_t i = 0; i < 5; i++)
    {
        if (levels[i] == level)
        {
            std::cout << "[ " << levels[i] << " ]" << std::endl;
            (this->*functions[i])();
            return;
        }
    }
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
