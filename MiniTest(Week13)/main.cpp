#include <iostream>
#include "Maze.h"

int main(){
    string filename;
    int start_x, start_y;
    cout << "Enter the maze data file > ";
    cin >> filename;
    Maze m(filename);
    cout << "Origin Maze";
    m.printMaze();

    // New: start_x, start_y를 OPEN 상태인 지점 랜덤 생성(배열 범위 안에서)
    // srand();            
    // int size = m.getSize();                      // 미로 크기
    // start_x = rand() % size + 1;             // 랜덤 번호 생성(1~n 사이)
    // start_y = rand() % size + 1;
    // 
    // while (!m.isOpen(start_x, start_y));   // 벽이면 다시 랜덤 시작점 생성
    // m.setStart(start_x, start_y);

    cout << "Enter the start_x and start_y > "; 
    cin >> start_x >> start_y;
    m.setStart(start_x, start_y);

    m.run();
    m.printMaze();
}