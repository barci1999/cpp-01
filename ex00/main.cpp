/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 13:21:22 by pablo             #+#    #+#             */
/*   Updated: 2025/09/03 13:51:36 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"
#include"Zombie.h"
int main(void)
{
    Zombie *z1 = newZombie("Pepe");
    z1->Announce();
    delete(z1);
    randomChump("Alex");
    return(0);
}