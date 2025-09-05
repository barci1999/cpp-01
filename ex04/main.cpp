/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:33:17 by pablo             #+#    #+#             */
/*   Updated: 2025/09/05 13:42:24 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<sstream>
#include<string>
#include"Parser.hpp"
int main(int argc ,char **argv)
{
    Parser Program(argc,argv);
    if(!Program.isValid())
        return(1);
          
}