//
//  Controller.hpp
//  DataStructureProject
//
//  Created by Kuo, Sean on 1/31/18.
//  Copyright © 2018 Kuo, Sean. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include "FileController.hpp"
#include "Tools/Timer.hpp"
#include "../Model/Structures/Linear/Array.hpp"
#include "../Testers/ArrayTester.hpp"
#include "../Testers/RecursionTester.hpp"

#include <iostream>
#include <vector>


class Controller
{
private:
    void findMaxAndMin();
    void testArray();
public:
    void start();
};

#endif /* Controller_hpp */
