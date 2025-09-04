/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 11:30:17 by pablo             #+#    #+#             */
/*   Updated: 2025/09/04 12:13:00 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.h"

int main (void)
{
    Zombie* array = zombieHorde(10,"zombie ");
    for (size_t i = 0; i < 10; i++)
        array[i].Announce();
    delete [] array;
    return(0);
}