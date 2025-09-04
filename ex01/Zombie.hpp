/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 12:57:41 by pablo             #+#    #+#             */
/*   Updated: 2025/09/04 11:48:35 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

class Zombie

{
private:
    std::string ZombieName;
public:

    Zombie();
    ~Zombie();
    void Announce();
    void setName(std::string Name);

};
