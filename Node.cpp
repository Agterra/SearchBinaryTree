//
//  Node.cpp
//  SearchBinaryTree
//
//  Created by Louis Le brun on 08/11/2017.
//  Copyright © 2017 Louis Le brun. All rights reserved.
//

#include "Node.hpp"

Node::Node()
{
    
    this->leftNode = nullptr;
    
    this->element = Element();
    
    this->rightNode = nullptr;
    
}

Node::Node( const Element& anElement )
{
    
    this->leftNode = nullptr;
    
    this->element = anElement;
    
    this->rightNode = nullptr;
    
}

Node::Node( Node leftNode, const Element& anElement, Node rightNode)
{
    
    this->leftNode = &leftNode;
    
    this->element = anElement;
    
    this->rightNode = &rightNode;
    
}

bool operator==( const Node& aNode, const Node& anOtherNode )
{
    
    return ( aNode.element == anOtherNode.element );
    
}

bool operator!=( const Node& aNode, const Node& anOtherNode )
{
    
    return !( aNode == anOtherNode );
    
}

bool operator<( const Node& aNode, const Node& anOtherNode )
{
    
    return ( aNode.element < anOtherNode.element );
    
}

bool operator>( const Node& aNode, const Node& anOtherNode )
{
    
    return ( aNode.element > anOtherNode.element );
    
}
