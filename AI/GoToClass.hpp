//
//  GoToClass.hpp
//  AI
//
//  Created by Priya Shah on 12/24/20.
//

#ifndef GoToClass_hpp
#define GoToClass_hpp

#include <stdio.h>
#include "State.hpp"
#include "Student.hpp"

class GoToClass : public State<Student> {
    private:
    GoToClass(){}
    
    static GoToClass* instance;

    public:
    static GoToClass* getInstance();

    virtual void Enter(Student* student);

    virtual void Execute(Student* student);

    virtual void Exit(Student* student);
      
};

#endif /* GoToClass_hpp */
