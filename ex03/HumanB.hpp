/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 13:10:12 by pablo             #+#    #+#             */
/*   Updated: 2025/09/05 12:26:27 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include"Weapon.hpp"
#include"iostream"

class HumanB
{
private:
    std::string name;
    Weapon* weapon;
public:
    HumanB(std::string name);
    ~HumanB();
    void attack() const;
    void setWeapon(Weapon& w);
};
#endif


