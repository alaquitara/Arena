//
//  Medusa.cpp
//  assignment3
//
//  Created by Alexander Laquitara on 2/3/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Medusa.cpp
 ** Author:    Alexander Laquitara
 ** Date:  2/2/2016
 ** Description: Implementation file for class Medusa
 ** Input:  Pointer to a character object
 ** Output:  Medusa object is created
 *********************************************************************/
#include "Medusa.hpp"

/*********************************************************************
 ** Function: attack
 ** Description: calls the rollDie function to assign a value to attack
                if attack result is 12 then glare becomes true and medusa
                kills its opponent.
 ** Parameters:  none
 ** Pre-Conditions: Medusa object exists
 ** Post-Conditions:  returns the result of the dice roll
 *********************************************************************/
int Medusa::attack()
{
    int result = Character::rollDie(2, 6);
    if (result == 12)
    {
        glare = true;
    }
    return result;
}

/*********************************************************************
 ** Function: Defend
 ** Description: calls the rollDie function to assign a value to defend
 ** Parameters:  none
 ** Pre-Conditions: Medusa object exists
 ** Post-Conditions:  returns the result of the dice roll
 *********************************************************************/
int Medusa::defend()
{
    return Character::rollDie(1, 6);
}

/*********************************************************************
 ** Function: getName
 ** Description: Allows the ThunderDome class to specify Barbarian by name
 ** Parameters:  none
 ** Pre-Conditions: Medusa object exists
 ** Post-Conditions:  returns the string Medusa
 *********************************************************************/
std::string Medusa:: getName()
{
    return "Medusa";
}