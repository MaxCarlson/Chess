/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: C-60
 *
 * Created on June 10, 2017, 8:38 PM
 */

#include <cstdlib>
#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>

#include "Board.h"
#include "MoveChecking.h"
#include "chessBoard.h"
//#include "Pieces.h"
#include <windows.h>





using namespace std;

/*
 * 
 */
bool check = false;
bool checkMate = false;
bool whoMove = false;
int turns = 0;

string boardArr [8][8]= {
	{"r", "n", "b", "q", "k", "b", "n", "r"},
	{"p", "p", "p", "p", "p", "p", "p", "p",},
	{" ", " ", " ", " ", " ", " ", " ", " "},
	{" ", " ", " ", " ", " ", " ", " ", " "},
	{" ", " ", " ", " ", " ", " ", " ", " "},
	{" ", " ", " ", " ", " ", " ", " ", " "},
	{"P", "P", "P", "P", "P", "P", "P", "P"},
	{"R", "N", "B", "Q", "K", "B", "N", "R"},  
			  };


int main(int argc, char** argv) {
    

    Board  newBoard;
    cout << "Enter the coordinates of the piece you wish to move " << endl;
    cout << "followed by the coordinates where you wish the piece to go" << endl;
    cout << "ex: moving the pawn at a2 to a3 would be 'a2a3'" << endl;
    while(checkMate == false){
        newBoard.printBoard();
        while(whoMove == false){
            //Rudamentry move check
            MoveChecking newCheck;
            //figure out which piece is to be moved + move it
            if(newCheck.movePiece() == true){
                whoMove = true;
            }
        }
        whoMove = false;
        turns ++;
    }

    
    

    int n;
    cin >> n;
    return 0;
}




 