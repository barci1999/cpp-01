/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 16:25:54 by pablo             #+#    #+#             */
/*   Updated: 2025/09/05 17:05:30 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEREPLACER_HPP
# define FILEREPLACER_HPP

#include<iostream>
#include<string>
# include<fstream>

class FileReplacer
{
private:
    std::string input_file;
    std::string output_file;
    std::string search_string;
    std::string replace_string;
    std::ifstream in;
    std::ofstream out;
    
public:
    FileReplacer(std::string input_file,std::string search_string,std::string replace_string);
    ~FileReplacer();
    bool OpenFile();
    bool CopyFile();
    bool CloseFile();
    
};

#endif

