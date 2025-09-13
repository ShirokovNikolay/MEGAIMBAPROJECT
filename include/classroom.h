#pragma once
#include <vector>
#include <map>

#include "user.h"
#include "teacher.h"
#include "pupil.h"
#include "admin.h"


class ClassRoom {
    Teacher* teacher;
    std::vector<Pupil*> pupils;
    std::map<Pupil*, size_t> score; 
};

