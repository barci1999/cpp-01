/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parser.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:56:34 by pablo             #+#    #+#             */
/*   Updated: 2025/09/05 13:33:32 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_HPP
# define PARSER_HPP

#include<iostream>
#include<string>

class Parser
{
private:
    int argc;
    std::string filename;
    std::string search;
    std::string change;
    bool valid;
public:
    Parser(int argc, char **argv);
    ~Parser();
    int getArgc() const;
    std::string getFilename() const;
    std::string getSearch() const;
    std::string getChange() const;
    bool getValid() const;
    bool isValid();
};


#endif


