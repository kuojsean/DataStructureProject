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
    GraphTester graphTest;
    graphTest.testGraphs();
//    LinkedListTester listTest;
//    listTest.testListBasics();
//    listTest.testListWithData();
    
//    RecursionTester test;
//    test.testRecursionNumbers();
    
//    ArrayTester myTest;
//    myTest.testArrayUse();
//    myTest.testAdvancedArray();
    
//    findMaxAndMin();

//    testArray();
}

void Controller :: findMaxAndMin()
{
    Timer searchTimer;
    searchTimer.startTimer();
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/skuo7320/Documents/DataStructures2018/DataStructureProject/DataStructureProject/Data/crime.csv");
    
    int minIndex = 0;
    int maxIndex = 0;
    
    for (int index = 0; index < myData.size(); index++)
    {
        if (myData [minIndex] > myData [index])
        {
            minIndex = index;
        }
        else if (myData [maxIndex] < myData[index])
        {
            maxIndex = index;
        }
    }
    searchTimer.stopTimer();
    cout << " The smallest crime stat is at "<< minIndex << " and it is: " << myData[minIndex] << endl;
    cout << " The largest crime stat is at "<< maxIndex << " and it is: " << myData[maxIndex] << endl;
    searchTimer.displayInformation();
}

void Controller :: testArray()
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
