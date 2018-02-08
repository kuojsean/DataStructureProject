//
//  DoublyLinkedList.hpp
//  DataStructureProject
//
//  Created by Kuo, Sean on 2/8/18.
//  Copyright © 2018 Kuo, Sean. All rights reserved.
//

#ifndef DoublyLinkedList_hpp
#define DoublyLinkedList_hpp

#include <assert.h>
#include "../../Nodes/LinearNode.hpp"

using namespace std;

template <class Type>
class DoublyLinkedList
{
protected:
    int size;
public:
    //Structure
    virtual void add(Type item) = 0;
    virtual void addAtIndex(int index, Type item) = 0;
    virtual Type remove(Type item) = 0;
    virtual Type getFromIndex(int index) = 0;
    //Helper
    virtual int getSize) const = 0;
    virtual LinearNode<Type> * getFront() = 0;
    virtual LinearNode<Type> * getEnd() = 0;
};

#endif /* DoublyLinkedList_hpp */
