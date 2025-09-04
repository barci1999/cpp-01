/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 11:31:37 by pablo             #+#    #+#             */
/*   Updated: 2025/09/04 12:12:46 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.h"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* array = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        std::stringstream ss;
        ss << name << i;
        array[i].setName(ss.str());
    }
    return(array);    
}
