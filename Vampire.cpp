//
//  Vampire.cpp
//  assignment3
//
//  Created by Alexander Laquitara on 2/8/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Vampire.cpp
 ** Author:    Alexander Laquitara
 ** Date:  2/2/2016
 ** Description: Implementation file for class Vampire
 ** Input:  Pointer to a character object
 ** Output:  Vampire object is created
 *********************************************************************/
#include "Vampire.hpp"

/*********************************************************************
 ** Function: attack
 ** Description: calls the rollDie function to assign a value to attack
 ** Parameters:  none
 ** Pre-Conditions: Vampire object exists
 ** Post-Conditions:  returns the result of the dice roll
 *********************************************************************/
int Vampire::attack()
{
    int result = Character::rollDie(1, 12);
    return result;
}
/*********************************************************************
 ** Function: defend
 ** Description: calls the rollDie function to assign a value to defend
                There is a 50% chance that vampire will perform glare and
                the incomming attack will not be applied.
 ** Parameters:  none
 ** Pre-Conditions: Vampire object exists
 ** Post-Conditions:  returns the result of the dice roll
 *********************************************************************/
int Vampire::defend()
{
    int results = Character::rollDie(1, 6);
    //50% chance to charm
    if (results > 3)
    {
        charm = true;
    }
    return results;
}

/*********************************************************************
 ** Function: getName
 ** Description: Allows the ThunderDome class to specify Vampire by name
 ** Parameters:  none
 ** Pre-Conditions: Vampire object exists
 ** Post-Conditions:  returns the string Vampire
 *********************************************************************/
std::string Vampire:: getName()
{
    return "Vampire";
}