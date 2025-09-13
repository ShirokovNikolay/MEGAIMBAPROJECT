#pragma once
#include "user.h"

class Question{
    
};


class Pupil : public User {
public:
    std::vector<Question> history;

    Pupil();
    void getHistory();
    const virtual int showMainMenu() final;
    ~Pupil();
};
