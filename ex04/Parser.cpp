/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parser.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:58:32 by pablo             #+#    #+#             */
/*   Updated: 2025/09/05 17:49:06 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Parser.hpp"

Parser::Parser(int argc, char **argv)
{
    this->argc = argc;
    if(argc >= 2) this->filename = argv[1];
    if(argc >= 3) this->search = argv[2];
    if(argc >= 4) this->change = argv[3];
    this->valid = false;
}
Parser::~Parser()
{
}
std::string Parser::getFilename() const { return this->filename; }
std::string Parser::getSearch() const { return this->search; }
std::string Parser::getChange() const { return this->change; }
int Parser::getArgc() const {return this->argc; }
bool Parser::getValid() const {return this->valid;}
bool Parser::isValid()
{
    if (this->argc != 4)
    {
        this->valid = false;
        std::cout << "invalid number of parameters" << std::endl;
        std::cout << "./program <filename> <search string> <replace string>" << std::endl;
        return(false);
    }
    if (this->filename.empty() || this->search.empty() || this->change.empty())
    {
        std::cout << "Please do not insert empty parameters." << std::endl;
        std::cout << "./program <filename> <search string> <replace string>" << std::endl;
        this->valid = false;
        
        return(false);
    }
    this->valid = true;
    return(true);
    
}