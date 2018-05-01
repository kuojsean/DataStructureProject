//
//  runner.cpp
//  DataStructureProject
//
//  Created by Kuo, Sean on 1/31/18.
//  Copyright © 2018 Kuo, Sean. All rights reserved.
//

#include "Controller/Controller.hpp"
using namespace std;
int main()
{
    int sample = 7;
    cout << &sample << endl;
    unsigned long address = (unsigned long) &sample;
    cout << address << endl;
    
    return 0;
}
