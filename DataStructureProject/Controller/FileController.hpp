//
//  FileController.hpp
//  DataStructureProject
//
//  Created by Kuo, Sean on 1/31/18.
//  Copyright © 2018 Kuo, Sean. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include "../Data/CrimeData.hpp"
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

class FileController
{
public:
    static vector<CrimeData> readeCrimeDataToVector(string filename);
}

#endif /* FileController_hpp */
