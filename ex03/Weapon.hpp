/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 13:10:01 by pablo             #+#    #+#             */
/*   Updated: 2025/09/05 12:23:53 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include<iostream>

class Weapon {
private:
    std::string type;

public:
    Weapon(std::string type);
    ~Weapon();
    const std::string& getType() const;
    void setType(const std::string& new_type);
};
#endif

