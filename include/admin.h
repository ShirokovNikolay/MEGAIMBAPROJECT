#pragma once
#include "user.h"

class Admin : public User {
public:
    Admin();

    ~Admin();

    const virtual int showMainMenu() final;
};