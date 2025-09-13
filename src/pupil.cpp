#include "pupil.h"
#include <vector>

Pupil::Pupil() : User() {
    history = vector<Question*>;
    type = Type::PUPIL;
}

Pupil:: vector<Question> getHistory{
    
} 

Pupil::~Pupil() {
    
}

const int Pupil::showMainMenu() {
    std::cout<<"**** PUPIL MENU *****\n" << std::endl;
    std::cout<<"1. Join room"<<std::endl;
    std::cout<<"2. Leave room"<<std::endl;
    std::cout<<"3. Submit homework"<<std::endl;
    std::cout<<"4. See statistic"<<std::endl;
    int option;
    std::cin>>option;
    return option;
}