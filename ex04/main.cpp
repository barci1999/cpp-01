/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:33:17 by pablo             #+#    #+#             */
/*   Updated: 2025/09/05 17:43:00 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<sstream>
#include<string>
#include"Parser.hpp"
#include"FileReplacer.hpp"
int main(int argc ,char **argv)
{
    Parser Program(argc,argv);
    if(!Program.isValid())
    return(1);
    FileReplacer execute(Program.getFilename(),Program.getSearch(),Program.getChange());
    if(!execute.OpenFile())
        return(1);
    execute.CopyFile();
    execute.CloseFile();
    return(0);
}