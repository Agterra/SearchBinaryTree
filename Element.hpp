//
//  Element.hpp
//  SearchBinaryTree
//
//  Created by Louis Le brun on 08/11/2017.
//  Copyright © 2017 Louis Le brun. All rights reserved.
//

#ifndef Element_hpp
#define Element_hpp

#include <stdio.h>

struct Element {
    
public:
    
    Element() = default;
    
    int value;

    friend bool operator==( const Element &anElement, const Element &anOther );
    
    friend bool operator!=( const Element &anElement, const Element &anOtherElement );
    
    friend bool operator>( const Element &anElement, const Element &anOtherElement );
    
    friend bool operator<( const Element &anElement, const Element &anOtherElement );
    
};

#endif /* Element_hpp */
