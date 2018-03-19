//
//  SortingTester.hpp
//  DataStructureProject
//
//  Created by Kuo, Sean on 3/15/18.
//  Copyright © 2018 Kuo, Sean. All rights reserved.
//

#ifndef SortingTester_hpp
#define SortingTester_hpp

#include <iostream>
#include "../Controller/FileController.hpp"
#include "../Controller/Tools/Timer.hpp"

class SortingTester
{
private:
    void quickSort(vector<CrimeData> dat, int low, int high);
    int partition(vector<CrimeData> data, int low, int high);
    void swap(vector<CrimeData> info, int small, int large);
public:
    void testSorts();
    int swapCount = 0;
};

#endif /* SortingTester_hpp */
