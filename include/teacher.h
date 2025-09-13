#pragma once
#include "user.h"
#include <iostream>

class Teacher : public User {
public:
    Teacher();
    ~Teacher();

    const virtual int showMainMenu() final;
};

