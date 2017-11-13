//
//  Node.hpp
//  SearchBinaryTree
//
//  Created by Louis Le brun on 08/11/2017.
//  Copyright © 2017 Louis Le brun. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

#include <stdio.h>

#include "Element.hpp"

struct Node {
    
public:
    
    Node();
    
    Node( const Element& anElement );
    
    Node( Node leftNode, const Element& anElement, Node rightNode );
    
    Node *leftNode;
    
    Element element;
    
    Node *rightNode;
    
    friend bool operator==( const Node& aNode, const Node& anOtherNode );
    
    friend bool operator!=( const Node& aNode, const Node& anOtherNode );
    
    friend bool operator<( const Node& aNode, const Node& anOtherNode );
    
    friend bool operator>( const Node& aNode, const Node& anOtherNode );
    
};

#endif /* Node_hpp */
