#include "user.h"

User::User
(
    std::string firtsName, 
    std::string lastName, 
    std::string email,
    std::string phoneNumber, 
    std::string login,
    std::string password
)
{
    this->firstName = firstName;
    this->lastName = lastName;
    this->email = email;
    this->phoneNumber = phoneNumber;
    this->login = login;
    this->password = password;
}


const std::string& User::getFirstName() {
    return firstName;
}

const std::string& User::getLastName() {
    return lastName;
}

bool User::isValidEmail(std::string email) {
    std::regex pattern(R"(^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$)");
    return std::regex_match(email, pattern);
}

bool User::isValidPhone(std::string phone) {
    std::regex pattern(R"(^(\+7|7|8)?[\s\-]?\(?[489][0-9]{2}\)?[\s\-]?[0-9]{3}[\s\-]?[0-9]{2}[\s\-]?[0-9]{2}$)");
    return std::regex_match(phone, pattern);
}

User::~User() {
    
}

