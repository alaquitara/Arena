//
//  Medusa.hpp
//  assignment3
//
//  Created by Alexander Laquitara on 2/3/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Medusa.hpp
 ** Author:    Alexander Laquitara
 ** Date:  2/2/2016
 ** Description: Header file for class Medusa
 ** Input:  Pointer to a character object
 ** Output:  Medusa object is created
 *********************************************************************/
#ifndef Medusa_hpp
#define Medusa_hpp
#include "Character.hpp"
#include <stdio.h>
class Medusa : public Character
{
    
public:
    bool glare;
    Medusa() : Character("Medusa" , 3 , 8) {glare = false;}
    int attack();
    int defend();
    std::string getName();
};
#endif /* Medusa_hpp */
