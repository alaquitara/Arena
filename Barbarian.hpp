//
//  Barbarian.hpp
//  assignment3
//
//  Created by Alexander Laquitara on 2/3/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Barbarian.hpp
 ** Author:    Alexander Laquitara
 ** Date:  2/2/2016
 ** Description: Header file for class Barbarian
 ** Input:  Pointer to a character object
 ** Output:  Barbarian object is created
 *********************************************************************/
#ifndef Barbarian_hpp
#define Barbarian_hpp
#include "Character.hpp"
#include <stdio.h>

class Barbarian : public Character
{

public:
    Barbarian() : Character("Barbarian" , 0 , 12){}
    int attack();
    int defend();
    std::string getName();
};
#endif /* Barbarian_hpp */
