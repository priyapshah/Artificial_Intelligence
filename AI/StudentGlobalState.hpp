//
//  StudentGlobalState.hpp
//  AI
//
//  Created by Priya Shah on 12/24/20.
//

#ifndef StudentGlobalState_hpp
#define StudentGlobalState_hpp

#include <stdio.h>
#include "State.hpp"
#include "Student.hpp"

class StudentGlobalState : public State<Student> {
    private:
    StudentGlobalState(){}
    
    static StudentGlobalState* instance;

    public:
    static StudentGlobalState* getInstance();

    virtual void Enter(Student* student);

    virtual void Execute(Student* student);

    virtual void Exit(Student* student);
      
};

#endif /* StudentGlobalState_hpp */
