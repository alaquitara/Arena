//
//  Test.hpp
//  assignment3
//
//  Created by Alexander Laquitara on 2/10/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Test.hpp
 ** Author:    Alexander Laquitara
 ** Date:  2/2/2016
 ** Description: Header file for class Test
 ** Input:  2 pointers to Character object
 ** Output:  results of the character battle
 *********************************************************************/
#include "Character.hpp"
#ifndef Test_hpp
#define Test_hpp

#include <stdio.h>
#include <iostream>
#include <stdio.h>
#include <algorithm>

class Test
{
private:
    //removed static lives for test because many Objects of HarryPotter are created.
    int dmg, p1, p2, lives;
    
public:
    
    void assessDMG(Character*, Character*);
    void applyDMG(Character*, Character*);
    void resurrect(Character* player1);
    void runTest(Character* player1, Character* player2);
    bool isDead(Character* player1);
    
    
};

#endif /* Test_hpp */
