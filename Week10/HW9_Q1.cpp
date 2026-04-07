#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <iomanip>
using namespace std;

class Library {
    private:
        string _name;
        static const int _MAX_BOOKS = 10;
        int _page_counts[_MAX_BOOKS];
        int _current_books;
    
    public:
        Library();
        Library(string);
        Library(string, int[], int);
        string getName();
        int getCurrentBooks();
        void setName(string);
        int getPageCount(int);
        bool addPageCount(int);
};

// TODO Implement constructors and functions
