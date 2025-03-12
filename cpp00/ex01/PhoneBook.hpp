/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 14:31:45 by pjimenez          #+#    #+#             */
/*   Updated: 2025/01/31 14:33:04 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "includes.hpp"

class	PhoneBook {
	private:
		const	int	max_contacts;
		int			current_nb;
		int			nb_contacts;
		Contact		array[8];
	public:
		PhoneBook();
		~PhoneBook();

		void	add_contact();
		void	search_contact();
		

};

#endif