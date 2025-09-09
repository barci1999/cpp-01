/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 18:18:41 by pablo             #+#    #+#             */
/*   Updated: 2025/09/09 18:35:55 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"
int main(int argc,char **argv)
{
    Harl harl;
    std::string input;
    if(argc != 2)
    {
        std::cout << "invalid number of parameters" << std::endl;
        return(1);
    }
    input = argv[1];
    if(input.empty())
    {
        std::cout << "Please do not insert empty parameters." << std::endl;
        return(1);
    }
    harl.complain(input);
    return(0);
}