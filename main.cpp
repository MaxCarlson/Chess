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


bool check = false;
bool checkMate = false;



using namespace std;

/*
 * 
 */



int main(int argc, char** argv) {
    

    Board  newBoard;
    while(checkMate == false){
        newBoard.printBoard();
        MoveChecking newCheck;
    }

    
    

    int n;
    cin >> n;
    return 0;
}




 