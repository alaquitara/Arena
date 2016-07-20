//
//  HarryPotter.hpp
//  assignment3
//
//  Created by Alexander Laquitara on 2/8/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  HarryPotter.hpp
 ** Author:    Alexander Laquitara
 ** Date:  2/2/2016
 ** Description: Header file for class HarryPotter
 ** Input:  Pointer to a character object
 ** Output:  HarryPotter object is created
 *********************************************************************/
#ifndef HarryPotter_hpp
#define HarryPotter_hpp

#include "Character.hpp"
#include <stdio.h>

class HarryPotter : public Character
{
    
public:
    HarryPotter() : Character("HarryPotter" , 0 , 10) {}
    int attack();
    int defend();
    std::string getName();
};

#endif /* HarryPotter_hpp */
