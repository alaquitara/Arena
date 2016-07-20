//
//  Character.cpp
//  assignment3
//
//  Created by Alexander Laquitara on 2/3/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Character.cpp
 ** Author:    Alexander Laquitara
 ** Date:  2/2/2016
 ** Description: Implementation file for class Character
 ** Input:  data from child class
 ** Output:  Character object is created
 *********************************************************************/
#include "Character.hpp"

//constructor
Character::Character(std::string n, int a, int s)
{
    srand( static_cast<unsigned int>( time(NULL)));
    name = n;
    armor = a;
    strength = s;
}

/*********************************************************************
** Function: setStrength
** Description: Allows for specification of character strength outside 
                of the constructor
** Parameters:  int s
** Pre-Conditions: Character object exists
** Post-Conditions:  Character object strength is set to s
*********************************************************************/
void Character::setStrength(int s)
{
    strength = s;
}

/*********************************************************************
 ** Function: getStrength
 ** Description: returns the value of Character object's strength.
 ** Parameters:  none
 ** Pre-Conditions: Character object exists
 ** Post-Conditions:  returns the strength value
 *********************************************************************/
int Character::getStrength()
{
    return strength;
}

/*********************************************************************
 ** Function: getArmor
 ** Description: returns the value of Character object's Armor.
 ** Parameters:  none
 ** Pre-Conditions: Character object exists
 ** Post-Conditions:  returns the armor value
 *********************************************************************/
int Character::getArmor()
{
    return armor;
}

/*********************************************************************
 ** Function: getName
 ** Description: returns the value of Character object's name.
 ** Parameters:  none
 ** Pre-Conditions: Character object exists
 ** Post-Conditions:  returns the name of the character as a string
 *********************************************************************/
std::string Character::getName()
{
    return name;
}

/*********************************************************************
 ** Function: rollDie
 ** Description: simulates a roll of a die.
 ** Parameters:  an int for the number of rolls, and for the number
                of sides on the die.
 ** Pre-Conditions: Character object exists
 ** Post-Conditions:  returns the value of the dice roll.
 *********************************************************************/
int Character::rollDie(int numRoll, int numSides)
{
    int j= 0;
    
    for(int i = 0; i<numRoll; i++)
    {
        j +=rand()% numSides +1;
    }
    return j;
    
}

/*********************************************************************
 ** Function: loseStrength
 ** Description: removes strength of a character when they take damage.
 ** Parameters:  int str, the amount of strength to be removed
 ** Pre-Conditions: Character object exists
 ** Post-Conditions:  none
 *********************************************************************/
void Character::loseStrength(int str)
{
    strength -= str;
    
}


