//
//  HashNode.h
//  DataStructureProject
//
//  Created by Kuo, Sean on 4/27/18.
//  Copyright © 2018 Kuo, Sean. All rights reserved.
//

#ifndef HashNode_h
#define HashNode_h

#include "Node.hpp"
template <class Type>
class HashNode : public Node<Type>
{
private:
    long key;
public:
    HashNode();
    HashNode(Type data);
    
    Type getData();
    long getKey() const;
    void setData(Type data);
};

template <class Type>
HashNode<Type> :: HashNode()
{
    this->key = 0;
}

template <class Type>
HashNode<Type> :: HashNode(Type data) : Node<Type>(data)
{
    this->key = (long) &data;
}

template <class Type>
long HashNode<type> :: getKey() const
{
    return this->key
}

#endif /* HashNode_h */
