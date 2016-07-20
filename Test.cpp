//
//  Test.cpp
//  assignment3
//
//  Created by Alexander Laquitara on 2/10/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Test.cpp
 ** Author:    Alexander Laquitara
 ** Date:  2/2/2016
 ** Description: Implementation file for class Test.  Mirriors ThunderDome
                except without all the printing to console.  This allows
                for quicker/cleaner test results.  Refer to ThunderDome.cpp
                for full comments.
 ** Input:  2 pointers to Character object
 ** Output:  results of the character battle
 *********************************************************************/
#include "Test.hpp"



/*********************************************************************
 ** Function: assessDMG
 ** Description: Compares dice roll of attacker and defender
 ** Parameters:  Pointers to character objects for player1 and player2
 ** Pre-Conditions: Character and test objects exist
 ** Post-Conditions:  none
 *********************************************************************/
void Test:: assessDMG(Character* player1, Character* player2)
{
    dmg = 0;
    
    p1 = player1->attack();
    p2 = player2->defend();
    
    
    if((player2->getName() == "Vampire") && (p2 > 3))
    {
        player2->loseStrength(0);
    }
    
    if((player1->getName() == "Medusa") && (p1 ==12))
    {
        std::cout<<"Medusa uses Glare! Medusa defeated " <<player2->getName()<<std::endl;
        player2->loseStrength(player2->getStrength());
    }
    
    else
    {
        dmg = p1-p2;
        applyDMG(player2, player1);
    }
}

/*********************************************************************
 ** Function: applyDMG
 ** Description: Decides how much damage the defender takes and updates
 their strength value accordingly.
 ** Parameters:  Pointers to character object player2, the defender
 ** Pre-Conditions: Character and ThunderDome objects exist
 ** Post-Conditions:  strength value of the defender is updated.
 *********************************************************************/
void Test::applyDMG(Character* player2, Character* player1)
{
    
    if((player2->getName() == "Vampire") && (p2 > 3))
    {
        player2->loseStrength(0);
    }
    
    else if (dmg > 0 + player2->getArmor())
    {
        player2->loseStrength(dmg - player2->getArmor());
    }
    
    resurrect(player2);
    
    
    if(player2->getStrength() <= 0)
    {
         std::cout<<player1->getName()<<" has defeated " <<player2->getName()<<std::endl;
    }
    
}


/*********************************************************************
 ** Function: resurrect
 ** Description: Function check to see if Harry Potter uses special
 ability Hogwarts.
 ** Parameters:  Pointers to character object player2, the defender
 ** Pre-Conditions: Character and test objects exist
 ** Post-Conditions:  lives is decremented - harry can only res once.
 *********************************************************************/
void Test::resurrect(Character* player2)
{
    for (int i  = 0; i<lives; i++)
    {
        if((player2->getName() == "Harry Potter") && (isDead(player2)))
        {
            player2->setStrength(20);
            lives--;
            
        }
    }
}

/*********************************************************************
 ** Function: runTest
 ** Description: primary function call for Test, loops through
 the battle until a player is defeated.
 ** Parameters:  Pointers to character objects player1 and player2
 ** Pre-Conditions: Character and Test objects exist
 ** Post-Conditions:  one of the Characters is defeated.
 *********************************************************************/
void Test::runTest(Character* player1, Character* player2)
{
    lives = 1;
    while((player1->getStrength() >0) && (player2->getStrength() >0))
    {
        assessDMG(player1, player2);
        std::swap(player1, player2);//http://www.cplusplus.com/reference/algorithm/swap/
    }
}

/*********************************************************************
 ** Function: isDead
 ** Description: bool function to check if a player is out of strength
 thus ending the game
 ** Parameters:  Pointer to character object
 ** Pre-Conditions: Character and Test objects exist
 ** Post-Conditions:  retun false if character is alive true if dead.
 *********************************************************************/
bool Test::isDead(Character * player1)
{
    if(player1->getStrength() > 0)
    {
        return false;
    }
    else
        return true;
}

