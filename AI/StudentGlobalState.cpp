//
//  StudentGlobalState.cpp
//  AI
//
//  Created by Priya Shah on 12/24/20.
//

#include "StudentGlobalState.hpp"
#include "Student.hpp"
#include <iostream>
#include "GoToDiningHall.hpp"
#include "GoToDorm.hpp"

StudentGlobalState* StudentGlobalState::instance = nullptr;

StudentGlobalState* StudentGlobalState::getInstance() {
    if (!instance) {
        instance = new StudentGlobalState();
    }
    return instance;
}

void StudentGlobalState::Enter(Student* student)
{
    
}

void StudentGlobalState::Execute(Student* student)
{
    if (student->hungry()) {
        student->machine.changeState(GoToDiningHall::getInstance());
    }
   
}

void StudentGlobalState::Exit(Student* student){

}
