/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 13:10:05 by pablo             #+#    #+#             */
/*   Updated: 2025/09/05 12:24:17 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(std::string type)
{
    this->type = type;
}
Weapon::~Weapon()
{
}

const std::string& Weapon::getType() const
{
    return(Weapon::type);
}
void Weapon::setType(const std::string& new_type)
{
    this->type = new_type;
}
