//
//  Character.hpp
//  assignment3
//
//  Created by Alexander Laquitara on 2/3/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Character.cpp
 ** Author:    Alexander Laquitara
 ** Date:  2/2/2016
 ** Description: Header file for class Character
 ** Input:  data from child class
 ** Output:  Character object is created
 *********************************************************************/
#ifndef Character_hpp
#define Character_hpp
#include <string>
#include <stdio.h>
#include <cstdlib>

class Character
{
protected:
    
    int armor;
    unsigned int strength;
    std::string name;
    
public:

    Character(std::string n, int a, int str);
    
    void setStrength(int);
    int getStrength();
    int getArmor();
    
    //virtual functions implemented in child classes.
    virtual std::string getName() = 0;
    virtual int attack() = 0;
    virtual int defend() = 0;
    
    int rollDie(int num, int sides);
    void loseStrength(int);
    
};

#endif /* Character_hpp */
