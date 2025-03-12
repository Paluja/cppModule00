/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:23:07 by pjimenez          #+#    #+#             */
/*   Updated: 2024/11/19 14:48:31 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void toUpper(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        i++;
    }
    
}


int main (int ac, char **av)
{
    int i = 1;
    
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    } 
    else {
        while (av[i])
        {
            toUpper(av[i]);
            std::cout << av[i];
            i++;
        }
        std::cout << "\n";
            
    }
}