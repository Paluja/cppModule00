/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:56:21 by pjimenez          #+#    #+#             */
/*   Updated: 2024/11/26 16:48:09 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool is_valid_num(std::string num)
{
    int i = 0;
    
    while (num[i])
    {
        if (num[i] == ' ')
            i++;
        if (num[i] < '0' || num[i] > '9')
            	return 0;
        i++;
    }
    return 1;
}   




int main()
{
    PhoneBook   phonebook;
    std::string data[5];
    std::string input;
    int         index;
    
    std::cout << "|-------- Welcome to the PhoneBook --------|"<< std::endl;
    std::cout << "|-- Permited commands: ADD, SEARCH, EXIT --|\n"<< std::endl;

    while (true)
    {
        std::cout << "Phonebook> ";
        std::getline(std::cin,input);

        if (input == "ADD")
        {
            std::cout << "--- Enter the contact information ---" << std::endl;
            std::cout << "First name: ";
            std::getline(std::cin,data[0]);
            std::cout << "Last name: ";
            std::getline(std::cin,data[1]);
            std::cout << "Nickname: ";
            std::getline(std::cin,data[2]);
            do
            {
                std::cout << "Number: ";
                std::getline(std::cin,data[3]);
                if (is_valid_num(data[3]))
                    break;
                std::cout << "Please enter a valid number";
            } while (!is_valid_num(data[3]));
            
            std::cout << "Secret: ";
            std::getline(std::cin, data[4]);
            std::cout << "--- Contact added successfuly ---" << std::endl;
        } else if (input == "SEARCH")
        {
            phonebook.display_book();
            std::cout << "Enter de index" << std::endl;
            std::cin >> index;
            if (std::cin.fail())
            {
                std::cout << "Bad index" << std::endl;
                std::cin.clear();
                std::getline(std::cin, input);
                continue ;
            }
            phonebook.display_contact(index);
            std::cin.clear();
			std::getline(std::cin, input);
			continue;
        }
        else if (input == "EXIT")
            break ;
        else
            std::cout << "Invalid command" << std::endl;
    }
    
}