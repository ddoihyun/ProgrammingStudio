#include "Maze.h"

Maze::Maze(int _size){
    size = _size;
    init();
}

Maze::Maze(string _filename){
    ifstream file;
    file.open(_filename);    
    file >> size; 
    init();
    for(int i=1; i<=size; i++)
        for(int j=1; j<=size; j++)
            file >> maze[i][j];
    file.close();
}

void Maze::init(){
    escaped = 0;
    start_y = start_x = 1;
    for(int i=0; i<size+2; i++)
        maze.assign(size+2, vector<char>(size+2,TRAP));
}

void Maze::tryToEscape(int row, int col){
    // 이미 탈출한 경우
    if(escaped) return;

    // 아직 탈출하지 못한 경우
    // 1. 벽이거나 이미 방문한 곳은 return
    if (maze[row][col] == TRAP || maze[row][col] == TRIED) return;
    // 2. 탈출한 경우 flag(escaped) 기록 후, return
    if (maze[row][col] == EXIT){
        escaped = true;
        return;
    }
    // 탐색한 곳은 방문 표시
    maze[row][col] = TRIED;
    tryToEscape(row, col+1); // 상
    tryToEscape(row, col-1); // 하
    tryToEscape(row-1, col); // 좌
    tryToEscape(row+1, col); // 우
}

void Maze::printMaze(){
    maze[start_x][start_y] = START;
    for(int i=1; i<=size; i++){
        for(int j=1; j<=size; j++){
            cout << maze[i][j] << " ";
        }
        cout << endl;
    }
}

void Maze::setStart(int x, int y){
    maze[start_x][start_y] = OPEN;
    start_x = x;
    start_y = y;
    maze[start_x][start_y] = START;
}

void Maze::run(){
    tryToEscape(start_x, start_y);
    if(escaped == 1)
        cout << "Success!" << endl;
    else
        cout << "Fail!" << endl;
}

int Maze::getSize() const {
    return size;
}

bool Maze::isOpen(int x, int y) const{ 
    return maze[x][y] == OPEN; 
}