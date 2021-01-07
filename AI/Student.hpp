//
//  Student.hpp
//  AI
//
//  Created by Priya Shah on 12/24/20.
//

#ifndef Student_hpp
#define Student_hpp

#include <stdio.h>
#include "EntityTemplate.hpp"
#include "State.hpp"
#include <string>
#include "StateMachine.hpp"

enum location_type {
    CLASS,
    DORM,
    DINING_HALL,
    PARTY
};


class Student : public EntityTemplate {
    private :
    
    location_type location;
    
    std::string name;

    int assignments;

    int hunger;

    int fatigue;

    public:

    Student(int ID, std::string name);
    
    StateMachine<Student> machine;

    void Update();

    location_type getLocation();

    std::string getName();

    void changeLocation(location_type newLocation);

    void addAssignment();
    
    void decreaseAssignment();
    
    bool doneAssignment();
    
    bool stressed();

    void increaseFatigue();

    bool classFinished();

    bool hungry();
    
    void resetHunger();
 
    ~Student(){}
    
   
};


#endif /* Student_hpp */
