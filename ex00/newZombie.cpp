/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 13:26:58 by pablo             #+#    #+#             */
/*   Updated: 2025/09/03 13:37:38 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"
#include"Zombie.h"

Zombie* newZombie( std::string name )
{
    Zombie *zombie = new Zombie(name);
    return(zombie);
}