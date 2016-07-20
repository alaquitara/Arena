//
//  HarryPotter.cpp
//  assignment3
//
//  Created by Alexander Laquitara on 2/8/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  HarryPotter.cpp
 ** Author:    Alexander Laquitara
 ** Date:  2/2/2016
 ** Description: Implementation file for class HarryPotter
 ** Input:  Pointer to a character object
 ** Output:  HarryPotter object is created
 *********************************************************************/
#include "HarryPotter.hpp"


/*********************************************************************
 ** Function: attack
 ** Description: calls the rollDie function to assign a value to attack
 ** Parameters:  none
 ** Pre-Conditions: HarryPotter object exists
 ** Post-Conditions:  returns the result of the dice roll
 *********************************************************************/
int HarryPotter::attack()
{
    return Character::rollDie(2, 6);
}

/*********************************************************************
 ** Function: defend
 ** Description: calls the rollDie function to assign a value to attack
 ** Parameters:  none
 ** Pre-Conditions: HarryPotter object exists
 ** Post-Conditions:  returns the result of the dice roll
 *********************************************************************/
int HarryPotter::defend()
{
    return Character::rollDie(2, 6);
}

/*********************************************************************
 ** Function: getName
 ** Description: Allows the ThunderDome class to specify HarryPotter by name
 ** Parameters:  none
 ** Pre-Conditions: HarryPotter object exists
 ** Post-Conditions:  returns the string Harry Potter
 *********************************************************************/
std::string HarryPotter:: getName()
{
    return "Harry Potter";
}

