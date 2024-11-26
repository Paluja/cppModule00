#include "PhoneBook.hpp"


void print_name(std::string str)
{
    int i = 0;

    if(str.length() > 10)
    {
        std::cout << str.substr(0, 9);
        std::cout << ".";
    }
    else 
    {
        while ( i < (10 - str.length()) )
            std::cout << " ";
        std::cout << str;
    }
}

int PhoneBook::get_size(void) const
{
    return (this->size);
}

void PhoneBook::add_contact(std::string data[5])
{
    int index = this->index;
    
    this->contacts[index].set_name(data[0]);
    this->contacts[index].set_lastname(data[1]);
    this->contacts[index].set_nickname(data[2]);
    this->contacts[index].set_number(data[3]);
    this->contacts[index].set_secret(data[4]);
    
    this->index = (index + 1) % 8;
    
    if (this->size < 8)
    {
        this->size++;
    }
}

void PhoneBook::display_contact(int i) const
{
    std::cout << "-----------------------------------------------------------"<< std::endl;
    std::cout << "                  Contact Information                     "<< std::endl;
    std::cout << "-----------------------------------------------------------"<< std::endl;
    
    std::cout << "First name" << this->contacts[i].get_name() << std::endl;
    std::cout << "Last name"<< this->contacts[i].get_lastname() << std::endl;
    std::cout << "Nickname"<< this->contacts[i].get_nickname() << std::endl;
    std::cout << "Secret"<< this->contacts[i].get_secret() << std::endl;
    std::cout << "Number"<< this->contacts[i].get_number() << std::endl;

}

void PhoneBook::display_book() const
{
    int i = 0;

    std::cout << "" << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    std::cout << "|     Index|First name| Last name| Nickname|" << std::endl;
    std::cout << "--------------------------------------------" << std::endl;

    while(i < size )
    {
        std::cout  << "|         ";
		std::cout << i;
		std::cout << "|";
		print_name(this->contacts[i].get_name());
		std::cout << "|";
		print_name(this->contacts[i].get_lastname());
		std::cout << "|";
		print_name(this->contacts[i].get_nickname());
		std::cout << "|"<< std::endl;
        i++;
    }
}
