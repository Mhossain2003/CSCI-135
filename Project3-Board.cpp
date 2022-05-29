#include "Project3-Board.hpp"
#include <iostream>
#include <iomanip>
#include <vector>
#include <random>
#include <algorithm>
using namespace std;

/*1.1: Implement constructors, 
we set max to be 0 and the target to be 32. 
Also, set numRows and numCols, initialize panel as a two-dimensional array of numRows rows and numCols
*/
/*
Board::Board(){
    numRows = 3;
    numCols = 3;
    panel = new int*[3];
    target = 32;
    max = 0;
    for(int i = 0; i < 3; i++){
        panel[i] = new int[3];
    }
}
*/  //Commenting  constructors out for Task B. Uncomment for Task A.

/*1.2: For Board(int m), 
set numRows to be m and numCols to be m if m is >= 1, 
otherwise, set numRows and numCols to be 3. 
Set panel to be a two-dimensional array with numRows rows and numCols columns, 
set max to be 0 and target to be 32.
*/
/*
Board::Board(int m){
    if(m >= 1){
        numRows = m;
        numCols = m;
    }
    else{
        numRows = 3;
        numCols = 3;
    }
    target = 32;
    max = 0;
    panel = new int*[numRows];
    for(int i = 0; i < numRows; i++){
        panel[i] = new int[numCols];
    }
}
*/
/*1.3: For Board(int m, int n) 
set numRows by m and numCols by n if both m and n are >= 1, 
otherwise, set numRows and numCols to be 3. 
Set panel to be a two-dimensional array with numRows rows and numCols columns, set max to be 0 and target to be 32.
*/
/*
Board::Board(int m, int n){
    if(m >= 1){
        numRows = m;
    }
    else{
        numRows = 3;
    }
    if(n >= 1){
        numCols = n;
    }
    else{
        numCols = 3;
    }
    max = 0;
    target = 32;
    panel = new int*[numRows];
    for(int i = 0; i < m; i++){
        panel[i] = new int[numCols];
    }
}
*/
/*(2): Define destructor, release the memory space pointed by panel
and remember to handle dangling pointer problem.
*/
/*
Board::~Board(){    //~ is used in destructors: helps gurantee that the function is called even when out of scope...
    for(int i = 0; i < sizeof(panel) / sizeof(panel[0]); i++){
        delete[] panel;
    }
}
*/
/*(3): Define print method, which prints panel as a tabular format, 
each number in a cell with 4-character wide, if the number is 0, do not print it out. See sample output in the project.
*/
Board::Board(){
    max = 0;
    setGoal(32);
    numRows = 3;
    numCols = 3;
    allocateMemory();
}

Board::Board(int m){
    max = 0;
    setGoal(32);
    if(m >= 1){
        numRows = m;
        numCols = m;
    } 
    else{
        numRows = 3;
        numCols = 3;
    }
    allocateMemory();
}

Board::Board(int m, int n){
    max = 0;
    setGoal(32);
    if(m >= 1 && n >= 1){
        numRows = m;
        numCols = n;
    } 
    else{
        numRows = 3;
        numCols = 3;
    }
    allocateMemory();
}

Board::~Board(){
    for(int i = 0; i < numRows; i++)
        delete[] panel[i];
    delete[] panel;
    panel = NULL;
}

void Board::allocateMemory(){
    panel = new int* [numRows];
    for(int i = 0; i < numCols; i++)
        panel[i] = new int[numCols];
}

void Board::setGoal(int goal){
    target = goal;
}

void Board::clear(){
    for(int i = 0; i < numRows; i++)
        for(int j = 0; j < numCols; j++)
            panel[i][j] = 0;
}

void Board::print() const{
    for(int i = 0; i < numRows; i++){
        cout << "+";
        for(int j = 0; j < numCols; j++)
            cout << "----+";
        cout << '\n';
        cout << '|';
        for(int j = 0; j < numCols; j++)
            if(panel[i][j] == 0)
                cout << right << setw(4) << ' ' << '|';
            else
                cout << right << setw(4) << panel[i][j] << '|';
        cout << '\n';
    }
    cout << '+';
    for(int j = 0; j < numCols; j++)
        cout << "----+";
    cout << '\n';
}

/*
int main()
{
    Board game; //create a default Board object game
    game.print(); //test print method of game

    Board game2(4);
       //create a Board object with four rows
       //and four columns
    game2.print(); //test print methd of game2

    Board game3(3, 4);
       //create a Board object with three rows
       //and four columns
    game3.print(); //test print methd of game3

    return 0;
}
*/

bool Board:: noAdjacentSameValue() const{
    for(int i = 0; i < numRows-1; i++)
        for(int j = 0; j < numCols; j++)
            if(panel[i][j] == panel[i+1][j])
                return false;
    for(int i = 0; i < numRows; i++)
        for(int j = 0; j < numCols-1; j++)
            if(panel[i][j] == panel[i][j+1])
                return false;
    return true;
}

void Board::selectRandomCell(int& row, int& col){
    vector<int> emptyCells;
    for(int i = 0; i < numRows; i++)
        for(int j = 0; j < numCols; j++)
            if(!panel[i][j])
                emptyCells.push_back(i * numCols + j);
    if(!emptyCells.size() && noAdjacentSameValue()){
        cout << "Game over. Try again." << endl;
    }
    else{
        int emptyCell = emptyCells[rand() % emptyCells.size()];
        row = emptyCell / numCols;
        col = emptyCell % numCols;
        panel[row][col] = 1;
        print();
        if(!(emptyCells.size() - 1) && noAdjacentSameValue())
            cout << "Game over. Try again." << endl;
    }
    
}

void mergeList(vector<int> &myList){
    vector<int> newList;
    for(int i = 0; i < myList.size(); i++){
        if(i == myList.size()-1){
            newList.push_back(myList[i]);
            continue;            }
        if(myList[i] == myList[i+1]){
            newList.push_back(myList[i] * 2);
            i++;
            continue;
        }
        newList.push_back(myList[i]);
    }
    myList = newList;
}

void Board::pressUp(){
    for(int i = 0; i < numCols; i++){
        vector<int> myList;
        for(int j = 0; j < numRows; j++)
            if(panel[j][i] != 0){
                myList.push_back(panel[j][i]);
                panel[j][i] = 0;
            }
        mergeList(myList);
        for(int j = 0; j < myList.size(); j++)
            panel[j][i] = myList[j];
    }
    int row, col;
    selectRandomCell(row, col);
}

void Board::pressDown(){
    for(int i = 0; i < numCols; i++){
        vector<int> myList;
        for(int j = 0; j < numRows; j++)
            if(panel[j][i] != 0){
                myList.push_back(panel[j][i]);
                panel[j][i] = 0;
            }
        reverse(myList.begin(), myList.end());
        mergeList(myList);
        for(int j = myList.size() - 1; j >= 0; j--)
            panel[numRows - j - 1][i] = myList[j];
    }
    int row, col;
    selectRandomCell(row, col);
}

void Board::pressLeft(){
    for(int i = 0; i < numRows; i++){
        vector<int> myList;
        for(int j = 0; j < numCols; j++)
            if(panel[i][j] != 0){
                myList.push_back(panel[i][j]);
                panel[i][j] = 0;
            }
        mergeList(myList);
        for(int j = 0; j < myList.size(); j++)
            panel[i][j] = myList[j];
    }
    int row, col;
    selectRandomCell(row, col);
}

void Board::pressRight(){
    for(int i = 0; i < numRows; i++){
        vector<int> myList;
        for(int j = 0; j < numCols; j++)
            if(panel[i][j] != 0){
                myList.push_back(panel[i][j]);
                panel[i][j] = 0;
            }
        reverse(myList.begin(), myList.end());
        mergeList(myList);
        for(int j = 0; j < myList.size(); j++)
            panel[i][numCols - j - 1] = myList[j];
    }
    int row, col;
    selectRandomCell(row, col);
}
void Board::start(){
    int round = 1;
    int val1, val2;
    selectRandomCell(val1, val2);
    selectRandomCell(val1, val2);

    while(true){

        for(int i = 0; i < numRows; i++)
            for(int j = 0; j < numCols; j++)
                if(panel[i][j] >= max)
                    max = panel[i][j];

        if(max >= target){
            cout << "Congratulation!" << '\n';
            break;
        }

        char ch = getchar();
        if(ch == 'S')
            break;

        if(ch == '\033'){
            getchar();
            switch(getchar()){
            case 'A':
                cout << "Round " << setw(4) << round << ": ";
                cout << "Press UP. " << "Goal: " << target << endl;
                pressUp();
                round++;
                break;

            case 'B':
                cout << "Round " << setw(4) << round << ": ";
                cout << "Press DOWN. " << "Goal: " << target << endl;
                pressDown();
                round++;
                break;

            case 'C':
                cout << "Round " << setw(4) << round << ": ";
                cout << "Press RIGHT. " << "Goal: " << target << endl;
                pressRight();
                round++;
                break;

            case 'D':
                cout << "Round " << setw(4) << round << ": ";
                cout << "Press LEFT. " << "Goal: " << target << endl;
                pressLeft();
                round++;
                break;

            default:
                break;
            }
        }
    }
}