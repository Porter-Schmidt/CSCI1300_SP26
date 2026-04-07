/* Define player class - refer to candyType.h */

#include<iostream>
#include"candyType.h"

using namespace std;

class Player {
    private:

        string name;
        int position;
        string inventory;
        candyType type;

    public:

        // Getters
        string getName();
        int getPosition();
        string getInventory();
        candyType getType();

        // Setters
        void setName(string n);
        void setPosition(int p);
        void setInventory(string i);
        void setType(candyType type);

};