/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 13:10:15 by pablo             #+#    #+#             */
/*   Updated: 2025/09/05 12:26:36 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"
#include<iostream>

HumanB::HumanB(std::string name)
{
    this->name = name;
}

HumanB::~HumanB()
{
    
}

void HumanB::setWeapon(Weapon& w)
{
    this->weapon = &w;
}

void HumanB::attack() const
{
    std::cout << name << " attacks with their ";
    if (weapon)
        std::cout << weapon->getType();
    else
        std::cout << "bare hands";
    std::cout << std::endl;
}