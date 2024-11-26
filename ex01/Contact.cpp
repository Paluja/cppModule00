#include "Contact.hpp"

const std::string &Contact::get_name(void) const
{
    return (this->name);
}

const std::string &Contact::get_lastname(void) const
{
    return (this->lastname);
}

const std::string &Contact::get_nickname(void) const
{
    return (this->nickname);
}

const std::string &Contact::get_number(void) const
{
    return (this->number);
}

const std::string &Contact::get_secret(void) const
{
    return (this->secret);
}

void Contact::set_name(const std::string name) {
    this->name = name;
}

void Contact::set_lastname(const std::string lastname) {
    this->lastname = lastname; 
}

void Contact::set_nickname(const std::string nickname) {
    this->nickname = nickname; 
}

void Contact::set_number(const std::string number) {
    this->number = number; 
}

void Contact::set_secret(const std::string secret) {
    this->secret = secret; 
}
