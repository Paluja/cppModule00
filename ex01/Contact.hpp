/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:33:24 by pjimenez          #+#    #+#             */
/*   Updated: 2024/11/20 15:52:16 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Contact
{
    private:
        std::string name;
        std::string lastname;
        std::string nickname;
        std::string number;
        std::string secret;
    public :
        const std::string&  get_name(void) const;
        const std::string&  get_lastname(void) const;
        const std::string&  get_nickname(void) const;
        const std::string&  get_number(void) const;
        const std::string&  get_secret(void) const;

        void set_name(std::string name);
        void set_lastname(std::string lastname);
        void set_nickname(std::string nickname);
        void set_number(std::string number);
        void set_secret(std::string secret);
};