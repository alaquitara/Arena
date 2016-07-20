//
//  ThunderDome.cpp
//  assignment3
//
//  Created by Alexander Laquitara on 2/3/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Test.cpp
 ** Author:    Alexander Laquitara
 ** Date:  2/2/2016
 ** Description: Implementation file for class ThunderDome (Battle)
 ** Input:  2 pointers to Character object
 ** Output:  results of the character battle
 *********************************************************************/
#include "ThunderDome.hpp"

//This took a while to figure out.
//http://stackoverflow.com/questions/6718479/c-initialization-of-non-constant-static-member-variable
int ThunderDome::lives = 1;


/*********************************************************************
 ** Function: assessDMG
 ** Description: Compares dice roll of attacker and defender
 ** Parameters:  Pointers to character objects for player1 and player2
 ** Pre-Conditions: Character and ThunderDome objects exist
 ** Post-Conditions:  none
 *********************************************************************/
void ThunderDome:: assessDMG(Character* player1, Character* player2)
{
    dmg = 0;
    
    p1 = player1->attack();
    p2 = player2->defend();
    
    
    std::cout<<player1->getName()<< " rolled "<<p1<<" "<<player2->getName()<< " rolled "<< p2<<std::endl;
    
    if((player1->getName() == "Medusa") && (p1 ==12))
    {
        std::cout<<"Medusa uses Glare! Medusa defeated " <<player2->getName()<<std::endl;
        player2->loseStrength(player2->getStrength());
    }
    
    else
    {
    dmg = p1-p2;
    applyDMG(player2);
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
void ThunderDome::applyDMG(Character* player2)
{
    //Vampire's special ability, there is a 50% chance that it takes no DMG.
    if((player2->getName() == "Vampire") && (p2 > 3))
    {
        std::cout<<"Vampire uses charm! The attack is useless."<<std::endl;
        player2->loseStrength(0);
    }
    
    //Checks to see if the attacker did enough dmg to get though defenders armor
    else if (dmg > 0 + player2->getArmor())
    {
        player2->loseStrength(dmg - player2->getArmor());
    }
    
    //checks to see if Harry Potter uses "Hogwarts"
    resurrect(player2);
    std::cout<<player2->getName()<< " has "<<player2->getStrength()<<" strength remaining"<<std::endl;
    std::cout<<'\n';
    
    //Player is out of strength and is defeated
    if(player2->getStrength() <= 0)
    {
        std::cout<<"The battle has ended. "<<player2->getName()<<" has been defeated"<<std::endl;
    }
    
}

/*********************************************************************
 ** Function: resurrect
 ** Description: Function check to see if Harry Potter uses special
                ability Hogwarts.
 ** Parameters:  Pointers to character object player2, the defender
 ** Pre-Conditions: Character and ThunderDome objects exist
 ** Post-Conditions:  lives is decremented - harry can only res once.
 *********************************************************************/
void ThunderDome::resurrect(Character* player2)
{
    for (int i  = 0; i<lives; i++)
    {
        if((player2->getName() == "Harry Potter") && (isDead(player2)))
        {
            player2->setStrength(20);
            lives--;
            std::cout<<"That's why you're famous, Harry, that's why everybody knows your name. You're the boy who lived. -Hagrid"<<std::endl;
            std::cout<<"Harry Potter resurrected with 20 strength!"<<std::endl;
        }
    }
}

/*********************************************************************
 ** Function: runSim
 ** Description: primary function call for ThunderDome, loops through
                the battle until a player is defeated.
 ** Parameters:  Pointers to character objects player1 and player2
 ** Pre-Conditions: Character and ThunderDome objects exist
 ** Post-Conditions:  one of the Characters is defeated.
 *********************************************************************/
void ThunderDome::runSim(Character* player1, Character* player2)
{
   
    while((player1->getStrength() >0) && (player2->getStrength() >0))
        {
        assessDMG(player1, player2);
        //http://www.cplusplus.com/reference/algorithm/swap/
        std::swap(player1, player2);
        }
}

/*********************************************************************
 ** Function: isDead
 ** Description: bool function to check if a player is out of strength
                thus ending the game
 ** Parameters:  Pointer to character object
 ** Pre-Conditions: Character and ThunderDome objects exist
 ** Post-Conditions:  retun false if character is alive true if dead.
 *********************************************************************/
bool ThunderDome::isDead(Character * player1)
{
    if(player1->getStrength() > 0)
    {
        return false;
    }
    else
        return true;
}

