#include <stdio.h>
// Function prototypes
void Welcome();
void GameStart();
void FirstPlayer();
void ShowBoard();
void ProcessGame();
void GetXchoices();
void GetOchoices();
void SwitchPlayer();
void DisplayResult();
void CheckWin();
void CheckRow();
void CheckCol();
void CheckDiagonal();
void CheckDraw();
void PlayAgain();
void GameOver();

// Main
int main(){

    // To do 1: Welcome
    Welcome();

    // To do 2: initialze the game-> GameStart()
    GameStart();

    // To do 2.1: first_player
    FirstPlayer();

    // To do 2.2: display the board-> showBoard()
    ShowBoard();

    // To do 3: process the game -> processGame()
    ProcessGame();

    // To do 3.1: get the x choices-> getXchoices()
    GetXchoices();

    // To do 3.2: get the o choices-> getOchoices()
    GetOchoices();

    // To do 3.3: switch the player -> switchPlayer()
    SwitchPlayer();

    // To do 3.4: display the result -> displayResult()
    DisplayResult();

    // To do 3.4.1: check the winner -> checkWin()
    CheckWin();

     // To do 3.4.2: check the row -> checkRow()
    CheckRow();

     // To do 3.4.3: check the column -> checCol()
    CheckCol();
    
     // To do 3.4.4: check the diagonal -> checkDiagonal()
    CheckDiagonal();

    // To do 3.5: check the draw -> checkDraw()
    CheckDraw();

    // To do 4: ask to play again -> PlayAgain()
    PlayAgain();

    // To do 5: game over -> GameOver()
    GameOver();

    

    return 0;
}