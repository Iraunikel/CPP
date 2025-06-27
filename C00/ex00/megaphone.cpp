/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iunikel <marvin@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 21:20:09 by iunikel           #+#    #+#             */
/*   Updated: 2025/06/22 16:48:57 by iunikel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // for std::cout and std::endl
#include <string> // for std::string
#include <cctype> // for std::isalpha and std::toupper

int main(int argc, char **argv)
{
    
    if(argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    
    for(int i = 1; i < argc; i++)
    {
        std::string cpp_string = argv[i];
        for(size_t j = 0; j < cpp_string.length(); j++)
              cpp_string[j] = static_cast<char>(std::toupper(static_cast<unsigned char>(cpp_string[j])));
        std::cout << cpp_string;
        if(i < argc - 1 )
            std::cout << " ";
    }
    std::cout << std::endl;
    return 0;
} 