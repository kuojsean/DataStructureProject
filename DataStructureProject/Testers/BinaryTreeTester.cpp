//
//  BinaryTreeTester.cpp
//  DataStructureProject
//
//  Created by Kuo, Sean on 3/27/18.
//  Copyright © 2018 Kuo, Sean. All rights reserved.
//

#include "BinaryTreeTester.hpp"

void BinaryTreeTester :: doTreeStuff()
{
    testTree.insert(3);
    testTree.insert(1);
    testTree.insert(2);
    testTree.insert(-3246000);
    testTree.insert(-12);
    testTree.insert(7);
    testTree.insert(6);
    testTree.insert(8);
    testTree.insert(5000);
    testTree.insert(9001);
    testTree.insert(10);
    testTree.insert(420);
    testTree.insert(600);
    
    testTree.inOrderTraversal();
    testTree.preOrderTraversal();
    testTree.postOrderTraversal();
    
    stringTree.insert("ab");
    stringTree.insert("abc");
    stringTree.insert("aab");
    stringTree.insert("abcd");
    stringTree.insert("acde");
    stringTree.insert("adef");
    stringTree.insert("aefg");
    stringTree.insert("afgh");
    stringTree.insert("az");
    
    stringTree.inOrderTraversal();
    stringTree.preOrderTraversal();
    stringTree.postOrderTraversal();

}
