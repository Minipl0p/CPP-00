#include "Contact.hpp"


void Contact::setFirstName(const std::string& value) { firstName = value; }

void Contact::setLastName(const std::string& value) { lastName = value; }

void Contact::setNickname(const std::string& value) { nickname = value; }

void Contact::setNumber(const std::string& value) { number = value; }

void Contact::setDarkestSecret(const std::string& value) { darkestSecret = value; }

const std::string& Contact::getFirstName() const { return (firstName); }

const std::string& Contact::getLastName() const { return (lastName); }

const std::string& Contact::getNickname() const { return (nickname); }

const std::string& Contact::getNumber() const { return (number); }

const std::string& Contact::getDarkestSecret() const { return (darkestSecret); }
