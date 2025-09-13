#include "admin.h"

Admin::Admin() : User() {
    type = Type::ADMIN;
}


Admin::~Admin() {

}

const int Admin::showMainMenu() {
    std::cout<<"**** ADMIN MENU *****\n" << std::endl;
    std::cout<<"1. Delete user"<<std::endl;
    std::cout<<"2. Delete room"<<std::endl;
    int option;
    std::cin>>option;
    return option;
}