//
//  Element.cpp
//  SearchBinaryTree
//
//  Created by Louis Le brun on 08/11/2017.
//  Copyright © 2017 Louis Le brun. All rights reserved.
//

#include "Element.hpp"

bool operator==( const Element &anElement, const Element &anOtherElement )
{
    
    return (anElement.value == anOtherElement.value);
    
}

bool operator!=( const Element &anElement, const Element &anOtherElement )
{
    
    return !( anElement==anOtherElement );
    
}

bool operator>( const Element &anElement, const Element &anOtherElement )
{
    
    return ( anElement.value > anOtherElement.value);
    
}

bool operator<( const Element &anElement, const Element &anOtherElement )
{
    
    return ( anElement.value < anOtherElement.value);
    
}
