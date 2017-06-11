/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Board.cpp
 * Author: C-60
 * 
 * Created on June 10, 2017, 8:39 PM
 */

#include "Board.h"


Board::Board() {
    //placing blank spaces
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            boardPieces[j][i] = new NoPiece;
            boardArr[j][i] = " ";
        }
        
    }
    //black pieces
    for(int i = 0; i < 8; i++){
        boardPieces[i][1] = new BlackPawn;
        boardArr[i][1] = "bp";
    }
    
    
    //white pieces
    for(int i = 0; i < 8; i++){
        boardPieces[i][6] = new WhitePawn;
        boardArr[i][6] = "wp";
    }
        
}

Board::whiteMove(){
        cout <<"Whites move, which piece would you like to move?" << endl;
        cin >> piece;
        cout <<"Where would you like to move your piece?" << endl;
        cin >> move;
    }

Board::blackMove(){
        cout <<"Blacks move, which piece would you like to move?" << endl;
        cin >> piece;
        cout <<"Where would you like to move your piece?" << endl;
        cin >> move;
    }


Board::printBoard(){
    //color stuff
    const HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    //print loops
    for(int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            if(j%2 == 0){
                if(i%2 == 0){
                    SetConsoleTextAttribute(hConsole, 240);
                } else {
                    SetConsoleTextAttribute(hConsole, 128);
                }
                
            }else if (j%2 != 0){
                if(i%2 == 0){
                    SetConsoleTextAttribute(hConsole, 128);
                } else {
                    SetConsoleTextAttribute(hConsole, 240);
                }
            }
            if(boardPieces[j][i]->symbol == " "){
                cout << " " << " " << std::flush;
            } else if (boardPieces[j][i]->symbol == "wp"){
                cout << "wP"  << std::flush;
            } else if (boardPieces[j][i]->symbol == "bp"){
                cout << "bP"  << std::flush;
            }
        }
        cout << endl;
    }
    int n;
    cin >> n;
}

Board::Board(const Board& orig) {
}

Board::~Board() {
}

