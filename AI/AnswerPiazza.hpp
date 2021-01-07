//
//  AnswerPiazza.hpp
//  AI
//
//  Created by Priya Shah on 12/26/20.
//

#ifndef AnswerPiazza_hpp
#define AnswerPiazza_hpp

#include <stdio.h>
#include "State.hpp"
#include "TA.hpp"

class AnswerPiazza : public State<TA> {
    private:
    AnswerPiazza(){}
    
    static AnswerPiazza* instance;

    public:
    static AnswerPiazza* getInstance();

    virtual void Enter(TA* TA);

    virtual void Execute(TA* TA);

    virtual void Exit(TA* TA);
    
    int numPostsAnswered = 0;
    
      
};


#endif /* AnswerPiazza_hpp */
