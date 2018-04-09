//
//  BinaryTreeTester.hpp
//  DataStructureProject
//
//  Created by Kuo, Sean on 3/27/18.
//  Copyright © 2018 Kuo, Sean. All rights reserved.
//

#ifndef BinaryTreeTester_hpp
#define BinaryTreeTester_hpp

#include <iostream>
#include "../Model/Structures/Nodes/BinaryTreeNode.hpp"
#include "../Model/Structures/NonLinear/BinarySearchTree.hpp"

class BinaryTreeTester
{
private:
    BinarySearchTree<int> testTree;
    BinarySearchTree<string> stringTree;
public:
    void doTreeStuff();
};


#endif /* BinaryTreeTester_hpp */
