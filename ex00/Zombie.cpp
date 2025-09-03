/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 12:57:39 by pablo             #+#    #+#             */
/*   Updated: 2025/09/03 13:51:36 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"
Zombie::Zombie(std::string Name)
{
    this->ZombieName = Name;
}
Zombie::~Zombie()
{
    return;
}
void Zombie::Announce()
{
    std::cout << this->ZombieName <<": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
