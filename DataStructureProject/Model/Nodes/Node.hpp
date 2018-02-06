//
//  Node.hpp
//  DataStructureProject
//
//  Created by Kuo, Sean on 2/6/18.
//  Copyright © 2018 Kuo, Sean. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

using namespace std;

template <class Type>
class Node
{
// This section is avaialble to All the subclasses of Node
protected:
    Type data;
public:
    Node();
    Node(Type data);
    void setData(Type data);
    Type getData();
};


    
#endif /* Node_hpp */
