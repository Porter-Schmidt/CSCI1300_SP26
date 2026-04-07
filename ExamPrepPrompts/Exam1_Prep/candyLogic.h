/* Provided to students to guide .cpp file */

#include<iostream>
#include"player.h"

using namespace std;

class candyLogic {
    public:
        /* Task: Write a function that counts how many times a spacific candy appears in the jar
        The jar (string candies) is a list of candies separated by a comma
        The targetCandy is the one you are counting 
        return int number found */
        int candyJarSort(string candies, string targetCandy);
        
        /* When you land on the sugar rush tile
        scramble the player's inventory string
        reverse the string
        convert every other letter to uppercase 
        return scrammbled string */
        string inventoryScrambler(Player p);

        /* Combine the two strings to create a new string 
        example: sweet and salty returns sswaelelty 
        return combined string*/
        string combineCandies(string candy1, string candy2);

        // need one more
};