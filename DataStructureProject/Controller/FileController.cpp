//
//  FileController.cpp
//  DataStructureProject
//
//  Created by Kuo, Sean on 1/31/18.
//  Copyright © 2018 Kuo, Sean. All rights reserved.
//

#include "FileController.hpp"

vector<CrimeData> FileController :: readCrimeDataToVector(string fileName)
{
    std :: vector<CrimeData> crimeVector;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(fileName);
    
    //If the file exists at that path.
    if (dataFile.is_open())
    {
        //Keep reading until tou are at the end of the file
        while(!dataFile.eof())
        {
            //Grab each line from the CSV separated by the carriage return character
            getline(dataFile, currentCSVLine, '\n');
            //Exclude header row
            if (rowCount != 0)
            {
                //Create a CrimeData instance from the line.
                if(currentCSVLine.length() != 0)
                {
                    CrimeData row(currentCSVLine);
                    crimeVector.push_back(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return crimeVector;
}

LinkedList<CrimeData> FileController :: readDataToList(string fileName)
{
    LinkedList<CrimeData> crimes;
    
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(fileName);
    
    if(dataFile.is_open())
    {
        while (!dataFile.eof())
        {
            getline(dataFile, currentCSVLine, '\r');
            if(rowCount != 0)
            {
                if(currentCSVLine.length() != 0)
                {
                    CrimeData row(currentCSVLine);
                    crimes.add(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return crimes;
}
