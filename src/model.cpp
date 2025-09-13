#include "model.h"


User* Model::registerUser(std::string firstName, int role) {
    switch (role)
    {
    case 0:
        admins.push_back(new Admin());
        return *(admins.end() - 1);
    case 1:
        teachers.push_back(new Teacher());
        return *(teachers.end() - 1);
    case 2:
        pupils.push_back(new Pupil());
        return *(pupils.end() - 1);
    default:
        return nullptr;
    }  
}