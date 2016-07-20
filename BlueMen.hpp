//
//  BlueMen.hpp
//  assignment3
//
//  Created by Alexander Laquitara on 2/8/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  BlueMen.hpp
 ** Author:    Alexander Laquitara
 ** Date:  2/2/2016
 ** Description: Header file for class BlueMen
 ** Input:  Pointer to a character object
 ** Output:  BlueMen object is created
 *********************************************************************/
#ifndef BlueMen_hpp
#define BlueMen_hpp

#include "Character.hpp"
#include <stdio.h>

class BlueMen : public Character
{
    
public:

    BlueMen() : Character("BlueMen" , 3 , 12) {}
    int attack();
    int defend();
    std::string getName();
};


#endif /* BlueMen_hpp */
