//
//  HashTable.hpp
//  DataStructureProject
//
//  Created by Kuo, Sean on 4/27/18.
//  Copyright © 2018 Kuo, Sean. All rights reserved.
//

#ifndef Hashtable_h
#define Hashtable_h


#include "../Nodes/HashNode.hpp"

template <class Type>
class Hashtable
{
private:
    HashNode<Type> * internalStorage;
    long size;
    double loadFactor;
public:
    Hashtable();
    ~Hashtable();
};

template <class Type>
Hashtable<Type> :: Hashtable()
{
    internalStorage = new HashNode<Type>[101];
    size = 0;
    loadFactor = .80
}

template <class Type>
Hashtable<Type> :: ~Hashtable()
{
    delete [] internalStorage;
}

template <class Type>
long Hashtable<Type> :: getNextPrime()
{
    long nextPrime = (this->capacity * 2) + 1;
    
    while(!isPrime(nextPrime))
    {
        nextPrime += 2
    }
    
    return nextPrime;
}

template <class Type>
bool Hashtable<Type> :: isPrime(long current)
{
    if(candidateNumber <= 1)
    {
        return false;
    }
    else if(current == 2 || current == 3)
    {
        return true;
    }
    else if(current % 2 == 0)
    {
        return false;
    }
    else
    {
        for(int next = 3; next <= sqrt(current) + 1; next += 2)
        {
            if(current % next == 0)
            {
                return false;
            }
        }
        return true;
    }
}

template <class Type>
void Hashtable<Type> :: resize()
{
    
}

template <class Type>
void Hashtable<Type> :: insert(Type value)
{
    
}

#endif /* Hashtable_h */
