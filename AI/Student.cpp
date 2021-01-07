//
//  Student.cpp
//  AI
//
//  Created by Priya Shah on 12/24/20.
//

#include "Student.hpp"
#include <string>
#include "GoToClass.hpp"
#include <iostream>
#include "GoToDiningHall.hpp"
#include "StudentGlobalState.hpp"

using namespace std;

Student::Student(int id, string name) : machine(this)
{
    SetID(id);
    machine.setCurrState(GoToClass::getInstance());
    this->name = name;
    machine.setGlobalState(StudentGlobalState::getInstance());
}

void Student::Update()
{
    cout << endl << "Hunger: " << hunger << "  Assignments: " << assignments << endl;
    
    machine.Update();
    
    hunger += 1;
    
}

location_type Student::getLocation()
{
    return location;
}

string Student::getName()
{
    return name;
}

void Student::changeLocation(location_type newLocation){
    location = newLocation;
}


void Student::addAssignment(){
    assignments++;
}

void Student::decreaseAssignment(){
    assignments--;
}

bool Student::stressed(){
    return assignments >= 15;
}

bool Student::doneAssignment(){
    return !assignments;
}

void Student::increaseFatigue(){
    fatigue++;
}

bool Student::classFinished(){
    return assignments == 5;
}

bool Student::hungry(){
    return hunger >= 5;
}

void Student::resetHunger(){
    hunger = -1;
}
