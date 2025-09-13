#pragma once
#include <string>
#include <regex>
#include "classroom.h"


class User {
public:
enum class Type {
    ADMIN,
    PUPIL,
    TEACHER
};
protected:
    std::string firstName;
    std::string lastName;
    std::string email;
    std::string phoneNumber;
    std::string login;
    std::string password;
    Type type;
public:
    User(
        std::string firtsName, 
        std::string lastName, 
        std::string email, 
        std::string phoneNumber, 
        std::string login, 
        std::string password
    );

    // DELETE LATER!!!!!!!!!!!!
    User() {firstName = "testName";};
    
    bool isValidEmail(std::string email);
    bool isValidPhone(std::string phone);
    bool isValidLogin(std::string login);
    const std::string& getFirstName();
    const std::string& getLastName();
    
    const virtual int showMainMenu() = 0;

    virtual ~User();
};

class IClassroomMember {
protected:
    std::vector<ClassRoom*> classRooms;
public:
    virtual ~IClassroomMember() = default;
    virtual const std::vector<ClassRoom*>& getClassrooms() const = 0;
    virtual void joinClassroom(ClassRoom* classroom) = 0;
    virtual void leaveClassroom(ClassRoom* classroom) = 0;
};