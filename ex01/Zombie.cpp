/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 12:57:39 by pablo             #+#    #+#             */
/*   Updated: 2025/09/04 11:49:40 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"
Zombie::Zombie()
{
    this->ZombieName = "noName";
}
Zombie::~Zombie()
{
    return;
}
void Zombie::Announce()
{
    std::cout << this->ZombieName <<": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::setName(std::string Name)
{
    this->ZombieName = Name;
}
