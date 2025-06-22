#include <stdio.h>
#include<conio.h>
#include <windows.h>
// Function prototypes
void Welcome(){
    printf("\t Welcome ");
};

void GameStart(){
    printf("\n    >>> Start Game <<< \n");
    getch();
};

void FirstPlayer(char name1[20],char name2[20]){
    start:
    int op;
    printf("[1]. %s",name1);
    printf("\n[2]. %s",name2);
    printf("\nWho want to play first(1 or 2): ");
    scanf("\n %d",&op);
    if(op == 1){
        // code 
    }
    else if(op == 2){
        // code 
    }
    else{
        printf("\nYour choice is error! Please enter only number 1 or 2");
        goto start;
    }
};

void initializeBoard(char board[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            board[i][j] = ' ';
}

void ShowBoard(char board[3][3]){
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf(" ");
        for (int j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if (j < 2) printf("|");
        }
        if (i < 2) printf("\n-------------\n");
    }
    printf("\n");
}

// void ProcessGame();
// void GetXchoices();
// void GetOchoices();
// void SwitchPlayer();
// void DisplayResult();
// void CheckWin();
// void CheckRow();
// void CheckCol();
// void CheckDiagonal();
// void CheckDraw();
// void PlayAgain();
// void GameOver();

// Main
int main(){

    // To do 1: Welcome
    Welcome();
    Sleep(1000);
    // To do 2: initialze the game-> GameStart()
    GameStart();

    // To do 2.1: first_player
    char name1[20] = "Player1";
    char name2[20] = "Player2";

    printf("Enter your name Player1: ");
    scanf("\n%s",&name1);fflush(stdin);
    printf("Enter your name Player2: ");
    scanf("\n%s",&name2);fflush(stdin);
    
    FirstPlayer(name1,name2);

    char board[3][3];
    // To do 2.2: prepare the board-> initializeBoard()
    initializeBoard(board);
    // To do 2.3: display the board-> showBoard()
    ShowBoard(board);

    // To do 3: process the game -> processGame()
    // ProcessGame();

    // To do 3.1: get the x choices-> getXchoices()
    // GetXchoices();

    // To do 3.2: get the o choices-> getOchoices()
    // GetOchoices();

    // To do 3.3: switch the player -> switchPlayer()
    // SwitchPlayer();

    // To do 3.4: display the result -> displayResult()
    // DisplayResult();

    // To do 3.4.1: check the winner -> checkWin()
    // CheckWin();

     // To do 3.4.2: check the row -> checkRow()
    // CheckRow();

     // To do 3.4.3: check the column -> checCol()
    // CheckCol();
    
     // To do 3.4.4: check the diagonal -> checkDiagonal()
    // CheckDiagonal();

    // To do 3.5: check the draw -> checkDraw()
    // CheckDraw();

    // To do 4: ask to play again -> PlayAgain()
    // PlayAgain();

    // To do 5: game over -> GameOver()
    // GameOver();

    

    return 0;
}