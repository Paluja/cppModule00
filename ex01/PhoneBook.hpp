/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:22:08 by pjimenez          #+#    #+#             */
/*   Updated: 2024/11/26 16:32:29 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

class PhoneBook{
    private:
        Contact contacts[8];
        int     size;
        int     index;

    public:
        PhoneBook() : size (0), index(0) {}
        
        int get_size(void) const;
        void add_contact(std::string data[5]);
        void display_contact(int i) const;
        void display_book(void) const;
};