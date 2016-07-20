//
//  BlueMen.cpp
//  assignment3
//
//  Created by Alexander Laquitara on 2/8/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  BlueMen.cpp
 ** Author:    Alexander Laquitara
 ** Date:  2/2/2016
 ** Description: Implementation file for class BlueMen
 ** Input:  Pointer to a character object
 ** Output:  BalueMenobject is created
 *********************************************************************/
#include "BlueMen.hpp"

/*********************************************************************
 ** Function: attack
 ** Description: calls the rollDie function to assign a value to attack
 ** Parameters:  none
 ** Pre-Conditions: BlueMen object exists
 ** Post-Conditions:  returns the result of the dice roll
 *********************************************************************/
int BlueMen::attack()
{
    int result = Character::rollDie(2, 10);
    return result;
}

/*********************************************************************
 ** Function: defend
 ** Description: calls the rollDie function to assign a value to defend.
                As the strength of BlueMen dwindles so does their defense
 ** Parameters:  none
 ** Pre-Conditions: BlueMen object exists
 ** Post-Conditions:  returns the result of the dice roll
 *********************************************************************/
int BlueMen::defend()
{
    int results = 0;
    
    if(strength >8 )
    {
       results = Character::rollDie(3, 6);
    }
    
    else if((strength >4) && (strength <=8))
    {
        results = Character::rollDie(2, 6);
    }
    
    else
    {
        results = Character::rollDie(1, 6);
    }
    
    return results;
}

/*********************************************************************
 ** Function: getName
 ** Description: Allows the ThunderDome class to specify BlueMen by name
 ** Parameters:  none
 ** Pre-Conditions: BlueMen object exists
 ** Post-Conditions:  returns the string Blue Men
 *********************************************************************/
std::string BlueMen:: getName()
{
    return "Blue Men";
}