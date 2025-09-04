/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 12:15:41 by pablo             #+#    #+#             */
/*   Updated: 2025/09/04 12:27:53 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
int main(void)
{
    std::string str =  "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;
    
    std::cout << "str address -> " << &str << std::endl;
    std::cout << "stringPTR address -> " << stringPTR << std::endl;
    std::cout << "stringREF address -> " << &stringPTR << std::endl;
    std::cout << std::endl;
    std::cout << "str value -> " << str << std::endl;
    std::cout << "stringPTR value -> " << *stringPTR << std::endl;
    std::cout << "stringREF -> " << stringREF << std::endl;
    return(0);
}