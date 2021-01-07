//
//  main.cpp
//  AI
//
//  Created by Priya Shah on 12/24/20.
//

#include <iostream>
#include "Student.hpp"
#include "TA.hpp"
#include <iostream>
int main () {
    std::cout << 12;
    Student priya(1, std::string("Priya"));
    TA mateo(2, std::string("Mateo"));
    for (int i = 0; i < 30; i++) {
        priya.Update();
        mateo.Update();
    }
    return 0;
}
