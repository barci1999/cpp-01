/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 13:10:21 by pablo             #+#    #+#             */
/*   Updated: 2025/09/05 12:25:41 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weaponREF) : name(name), weapon(weaponREF) {}
HumanA::~HumanA(){}

void HumanA::attack() const
{
    std::cout << HumanA::name << " attacks with their " << weapon.getType() << std::endl;
}