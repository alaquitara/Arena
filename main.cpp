//
//  main.cpp
//  assignment3
//
//  Created by Alexander Laquitara on 2/3/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Main.cpp
 ** Author:    Alexander Laquitara
 ** Date:  2/2/2016
 ** Description: Menu for assignment 3
 ** Input:  User decides which characters to create
 ** Output:  results of the character battle
 *********************************************************************/
#include <ctime>
#include <iostream>
#include "Character.hpp"
#include "Barbarian.hpp"
#include "Vampire.hpp"
#include "Medusa.hpp"
#include "BlueMen.hpp"
#include "HarryPotter.hpp"
#include "ThunderDome.hpp"
#include "Test.hpp"

Character* charSelect(Character *);

int main(int argc, const char * argv[]) {
    srand( static_cast<unsigned int>( time(NULL)));
    
    int test = 0;
    std::cout<<"Welcome to the ThunderDome..."<<'\n'<<"If you would like to test enter 1"<<'\n'
    <<"To run the regular game enter 2"<<std::endl;
    std::cin>>test;
    
    
    if (test == 2)
    {
        ThunderDome game;
        Character *player1;
        Character *player2;
        std::cout<<"Which Class is player1? "<<std::endl;
        player1 = charSelect(player1);
        std::cout<<"Which Class is player2? "<<std::endl;
        player2 = charSelect(player2);
        game.runSim(player1, player2);
        
    }
    
    if (test == 1)
    {
        //Every possible matchup is run through once
        Test test;
         
        Character* char1 = new Barbarian();
        Character* char2 = new Medusa();
        test.runTest(char1, char2);
        
        Character* char3 = new Barbarian();
        Character* char4 = new Vampire();
        test.runTest(char3, char4);
        
        Character* char5 = new Barbarian();
        Character* char6 = new BlueMen();
        test.runTest(char5, char6);
        
        Character* char7 = new Barbarian();
        Character* char8 = new HarryPotter();
        test.runTest(char7, char8);
        
        Character* cha1 = new Medusa();
        Character* cha2 = new Vampire();
        test.runTest(cha1, cha2);
        
        Character* cha3 = new Medusa();
        Character* cha4 = new BlueMen();
        test.runTest(cha3, cha4);
        
        Character* cha5 = new Medusa();
        Character* cha6 = new HarryPotter();
        test.runTest(cha5, cha6);
        
        Character* cha7 = new Vampire();
        Character* cha8 = new BlueMen();
        test.runTest(cha7, cha8);
        
        Character* cha9 = new Vampire();
        Character* cha0 = new HarryPotter();
        test.runTest(cha9, cha0);
        
        Character* ch1 = new BlueMen();
        Character* ch2 = new HarryPotter();
        test.runTest(ch1, ch2);
        
        
        Character* ch0 = new Medusa();
        Character* ch11 = new Barbarian();
        test.runTest(ch0, ch11);
        
        Character* ch3 = new Vampire();
        Character* ch4 = new Barbarian();
        test.runTest(ch3, ch4);
        
        Character* ch5 = new BlueMen();
        Character* ch6 = new Barbarian();
        test.runTest(ch5, ch6);
        
        Character* ch7 = new HarryPotter();
        Character* ch8 = new Barbarian();
        test.runTest(ch7, ch8);
        
        Character* ch9 = new Vampire();
        Character* ch12 = new Medusa();
        test.runTest(ch9, ch12);
        
        Character* c0 = new BlueMen();
        Character* c1 = new Medusa();
        test.runTest(c0, c1);
        
        Character* c2 = new HarryPotter();
        Character* c3 = new Medusa();
        test.runTest(c2, c3);
        
        Character* c4 = new BlueMen();
        Character* c5 = new Vampire();
        test.runTest(c4, c5);
        
        Character* c6 = new HarryPotter();
        Character* c7= new Vampire();
        test.runTest(c6, c7);
        
        Character* c8 = new HarryPotter();
        Character* c9 = new BlueMen();
        test.runTest(c8, c9);

        Character* a1 = new Barbarian();
        Character* a2 = new Barbarian();
        test.runTest(a1, a2);
        
        Character* a3 = new Medusa();
        Character* a4 = new Medusa();
        test.runTest(a3, a4);
        
        Character* a5 = new Vampire();
        Character* a6 = new Vampire();
        test.runTest(a5, a6);
        
        Character* a7 = new BlueMen();
        Character* a8 = new BlueMen();
        test.runTest(a7, a8);
        
        Character* a9 = new HarryPotter();
        Character* a0 = new HarryPotter();
        test.runTest(a9, a0);

    }
    
    return 0;
}

Character*  charSelect(Character* p1)
{
    int select;
    
    do
    {
        std::cout<< "****CLASS SELECTION****"<<std::endl;
        std::cout<<"Select 1 for Barbarian"<<std::endl;
        std::cout<<"Select 2 for Medusa"<<std::endl;
        std::cout<<"Select 3 for Vampire"<<std::endl;
        std::cout<<"Select 4 for Blue Men"<<std::endl;
        std::cout<< "Select 5 for Harry Potter"<<std::endl;
        std::cin>> select;
    }while((select <1) && (select > 5));
        switch (select)
        {
            case 1:
            {
                p1 = new Barbarian();
                std::cout<<"You chose Barbarian"<<std::endl;
                break;
            }
            case 2:
            {
                p1 = new Medusa();
                std::cout<<"You chose Medusa"<<std::endl;
                break;
            }
            case 3:
            {
                p1 = new Vampire();
                std::cout<<"You chose Vampire"<<std::endl;
                break;
            }
            case 4:
            {
                p1 = new BlueMen();
                std::cout<<"You chose the Blue Men"<<std::endl;
                break;
            }
            case 5:
            {
                p1 = new HarryPotter();
                std::cout<<"You chose Harry Potter"<<std::endl;
                break;
            }
            default:
                std::cout<<"please select from the menu"<<std::endl;
           
                
        }
    return p1;
}



