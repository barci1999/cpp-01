/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 16:31:10 by pablo             #+#    #+#             */
/*   Updated: 2025/09/05 17:55:52 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"FileReplacer.hpp"

FileReplacer::FileReplacer(std::string input_file,std::string search_string,std::string replace_string)
{
    this->input_file = input_file;
    this->output_file = input_file + ".replace";
    this->search_string = search_string;
    this->replace_string = replace_string;
}
FileReplacer::~FileReplacer()
{
}
bool FileReplacer::OpenFile()
{
    this->in.open(this->input_file.c_str());
    this->out.open(this->output_file.c_str());
    if(!this->in.is_open())
    {
        std::cout << "error to open infile"<<std::endl;
        return(false);
    }
    if(!this->out.is_open())
    {
        std::cout << "error to open outfile"<<std::endl;
        this->in.close();
        return(false);
    }
    return(true);
}
bool FileReplacer::CopyFile()
{
    std::ifstream in(this->input_file.c_str());
    std::ofstream out(this->output_file.c_str());
    std::string temp;
    while (std::getline(in,temp))
    {
        size_t start = 0;
        while ((start = temp.find(this->search_string, start)) != std::string::npos)
        {
            temp.erase(start, this->search_string.length());
            temp.insert(start, this->replace_string);
            start += this->replace_string.length();
        }
        this->out << temp << std::endl;
    }
    return(true);
}
bool FileReplacer::CloseFile()
{
    if(this->in.is_open())
        this->in.close();
    if(this->out.is_open())
        this->out.close();
    return(true);
}