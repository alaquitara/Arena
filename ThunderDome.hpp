//
//  ThunderDome.hpp
//  assignment3
//
//  Created by Alexander Laquitara on 2/3/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  ThunderDome.hpp
 ** Author:    Alexander Laquitara
 ** Date:  2/2/2016
 ** Description: Header file for class ThunderDome
 ** Input:  2 pointers to Character object
 ** Output:  results of the character battle
 *********************************************************************/
#include "Character.hpp"
#ifndef ThunderDome_hpp
#define ThunderDome_hpp
#include <iostream>
#include <stdio.h>
#include <algorithm>

class ThunderDome
{
private:
    int dmg, p1, p2;
    static int lives;
    
public:
    void assessDMG(Character*, Character*);
    void applyDMG(Character*);
    void resurrect(Character* player1);
    void runSim(Character* player1, Character* player2);
    bool isDead(Character* player1);
};
#endif /* ThunderDome_hpp */
