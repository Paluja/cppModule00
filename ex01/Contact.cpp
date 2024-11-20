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
