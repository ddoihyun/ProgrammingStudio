#include <iostream>
#include <fstream>
#include <vector>

#define START   '*'
#define EXIT    'E'
#define TRAP    '#'
#define OPEN    '.'
#define TRIED   '+'

using namespace std;

class Maze{
private:
    vector< vector<char> > maze;
    int size;       // size of square maze 
    int escaped;    // true(1) or false(0)
    int start_x, start_y;   // Start point
    void init();
    void tryToEscape(int row, int col);
public:
    Maze(int _size);
    Maze(string _filename);
    ~Maze(){};
    void setStart(int x, int y);
    void printMaze();
    void run();
    int getSize() const;
    bool isOpen(int x, int y) const;
};