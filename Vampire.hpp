//
//  Vampire.hpp
//  assignment3
//
//  Created by Alexander Laquitara on 2/8/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Vampire.cpp
 ** Author:    Alexander Laquitara
 ** Date:  2/2/2016
 ** Description: Header file for class Vampire
 ** Input:  Pointer to a character object
 ** Output:  Vampire object is created
 *********************************************************************/
#ifndef Vampire_hpp
#define Vampire_hpp
#include "Character.hpp"
#include <stdio.h>

class Vampire : public Character
{
    
public:
    bool charm;
    Vampire() : Character("Vampire" , 1 , 18) {charm = false;}
    int attack();
    int defend();
    std::string getName();
};



#endif /* Vampire_hpp */
