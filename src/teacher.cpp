#include "teacher.h"

Teacher::Teacher() : User() {
    type = Type::TEACHER;
}


Teacher::~Teacher() {

}

const int Teacher::showMainMenu() {
    std::cout<<"**** TEACHER MENU *****\n" << std::endl;
    std::cout<<"1. Create room"<<std::endl;
    std::cout<<"2. Delete room"<<std::endl;
    std::cout<<"3. Create homework"<<std::endl;
    std::cout<<"4. See statistic"<<std::endl;
    int option;
    std::cin>>option;
    return option;
}