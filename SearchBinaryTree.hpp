//
//  SearchBinaryTree.hpp
//  SearchBinaryTree
//
//  Created by Louis Le brun on 08/11/2017.
//  Copyright © 2017 Louis Le brun. All rights reserved.
//

#ifndef SearchBinaryTree_hpp
#define SearchBinaryTree_hpp

#include <stdio.h>

#include "Node.hpp"

class SearchBinaryTree
{
    
public:
    
    SearchBinaryTree();
    
    SearchBinaryTree( const SearchBinaryTree& anOtherSBT );
    
    ~SearchBinaryTree();
    
    SearchBinaryTree& operator=( const SearchBinaryTree& anOtherSBT );
    
    bool searchInBinaryTreeElement( const Element& anElement );
    
    bool insertInBinaryTreeElement( const Element& anElement );
    
    void displayTree();
    
    Node *rootNode;
    
};

#endif /* SearchBinaryTree_hpp */
