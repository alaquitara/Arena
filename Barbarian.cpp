//
//  Barbarian.cpp
//  assignment3
//
//  Created by Alexander Laquitara on 2/3/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Barbarian.cpp
 ** Author:    Alexander Laquitara
 ** Date:  2/2/2016
 ** Description: Implementation file for class Barbarian
 ** Input:  Pointer to a character object
 ** Output:  Barbarian object is created
 *********************************************************************/
#include "Character.hpp"
#include "Barbarian.hpp"

/*********************************************************************
 ** Function: attack
 ** Description: calls the rollDie function to assign a value to attack
 ** Parameters:  none
 ** Pre-Conditions: Barbarian object exists
 ** Post-Conditions:  returns the result of the dice roll
 *********************************************************************/
int Barbarian::attack()
{
    return Character::rollDie(2, 6);
}

/*********************************************************************
 ** Function: defend
 ** Description: calls the rollDie function to assign a value to defend
 ** Parameters:  none
 ** Pre-Conditions: Barbarian object exists
 ** Post-Conditions:  returns the result of the dice roll
 *********************************************************************/
int Barbarian::defend()
{
    return Character::rollDie(2, 6);
}

/*********************************************************************
 ** Function: getName
 ** Description: Allows the ThunderDome class to specify Barbarian by name
 ** Parameters:  none
 ** Pre-Conditions: Barbarian object exists
 ** Post-Conditions:  returns the name Barbarian
 *********************************************************************/
std::string Barbarian:: getName()
{
    return "Barbarian";
}