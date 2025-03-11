/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:56:21 by pjimenez          #+#    #+#             */
/*   Updated: 2025/01/31 14:33:41 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"


int	main() {
	PhoneBook	PhoneBook;

	str			line;
	str			add = "ADD";
	str			search = "SEARCH";
	str			exit = "EXIT";
	
	system("clear");
	std::cout << "Hello ! Welcome to your new contact manager." << std::endl;
	while (1)
	{
		std::cout << "Type ADD, SEARCH or EXIT : ";
		std::getline(std::cin, line);
		if (!line.compare(add))
			PhoneBook.add_contact();
		else if (!line.compare(search))
			PhoneBook.search_contact();
		else if (!line.compare(exit))
		{
			std::cout << "Goodbye !" << std::endl;
			break;
		}
		system("clear");
	}
	sleep(1);
	return 0;
}
