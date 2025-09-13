#pragma once
#include <vector>
#include <map>

#include "user.h"
#include "teacher.h"
#include "pupil.h"
#include "admin.h"
#include "classroom.h"



class Model {
    std::vector<ClassRoom*> classes;
    std::vector<Pupil*> pupils;
    std::vector<Teacher*> teachers;
    std::vector<Admin*> admins;
public:
    User *registerUser(std::string firstName, int role);
    void deleteUser(std::string id);
};
