//
//  N_AryTreeNode.hpp
//  DataStructureProject
//
//  Created by Kuo, Sean on 4/23/18.
//  Copyright © 2018 Kuo, Sean. All rights reserved.
//

#ifndef N_AryTreeNode_h
#define N_AryTreeNode_h

#include <vector>
#include "Node.hpp"
using namespace std;

template <calss Type>
class N_AryTreeNode : public Node<Type>
{
private:
    vector<N_AryTreeNode<Type>*> nodes;
    N_AryTreeNOde<Type> * root;
    
public:
    N_AryTreeNode<Type>();
    ~N_AryTreeNOde<Type>();
    N_AryTreeNode<Type>(Type data);
    
    vector<N_AryTreeNode<Type>*> getNodes();
    N_AryTreeNode<Type> * getRoot();
    int getChildCount();
    
    void setRoot(N_AryTreeNode<Type> * root);
    void addChild(Type data);
};

template<class Type>
N_AryTreeNode<Type> :: N_AryTreeNode()
{
    //unused
}

template <class Type>
N_AryTreeNode<Type> :: N_AryTreeNode(Type data) : Node<Type>(data)
{
}

template <class Type>
N_AryTreeNode<Type> :: ~N_AryTreeNode()
{
    for (int index =nodes.size() - 1; index >= 0; index --)
    {
        delete nodes[index];
    }
}

template <class Type>
N_AryTreeNode<Type> * N_AryTreeNode<Type> :: getRoot()
{
    return root;
}

template <class Type>
vector<N_aryTreeNode<Type>*> N_AryTreeNode<Type> :: getNodes()
{
    return nodes;
}

template<class Type>
int N_AryTreeNode<Type> :: getChildCount()
{
    return nodes.size();
}

template <class Type>
void N_AryTreeNode<type> :: setRoot(N_arytreeNode<Type> * root)
{
    this->root = root;
}

template <class Type>
void N_AryTreeNode<Type> :: addChild(Type data)
{
    N_AryTreeNode<Type> * node = new N_AryTreeNode<Type>(data);
    nodes.insert(node);
}
#endif /* N_AryTreeNode_h */
