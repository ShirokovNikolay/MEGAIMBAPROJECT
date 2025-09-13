#include <iostream>
#include <vector>
#include <string>
#include "model.h"



int main() {
    Model model;
    User* user;

    std::cout<<"Hello!\n" << std::endl;
    int selectedOption;
    while (selectedOption!=1 && selectedOption!=2) {
        std::cout<<"1. To login enter 'l'" << std::endl;
        std::cout<<"2. To Register enter 'r'" << std::endl;
        std::cin>>selectedOption;
    }
    // handle login option
    if (selectedOption==1) {
        std::string firstName;
        std::cout<<"FirstName: ";
        std::cin>>firstName;
        // TODO
    }
    // handle registration
    else if (selectedOption==2) {
        std::string firstName;
        int role;

        std::cout<<"FirstName: ";
        std::cin>>firstName;
        std::cout<<std::endl;
        std::cout<<"Type:"<<std::endl;
        std::cout<<"\t0. Admin\n\t1. Teacher\n\t2. Pupil\nEnter 0-2 to pick your role"<<std::endl;
        std::cin>>role;
        std::cout<<std::endl;
        // Other properties

        //
        user = model.registerUser(firstName, role);
    }
    while (1) {
        int option = user->showMainMenu();
    }
}


//  g++ src/main.cpp -o project
