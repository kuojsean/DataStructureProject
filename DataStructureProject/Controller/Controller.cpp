//
//  controller.cpp
//  DataStructureProject
//
//  Created by Kuo, Sean on 1/31/18.
//  Copyright © 2018 Kuo, Sean. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

void Controller :: start()
{
    cout << "Testing the Timer class" << endl;
    Timer codeTimer;
    codeTimer.startTimer();
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/skuo7320/Documents/DataStructures2018/DataStructureProject/DataStructureProject/Data/crime.csv");
    for (int loop = 200; loop < 216 ; loop ++)
    {
        cout << "Spot # " << loop << ": " << myData[loop] << endl;
    }
    codeTimer.stopTimer();
    codeTimer.displayInformation();
}
