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
    char alphabet[] = {'a','b','c','d','e','f','g','h'};
    //color stuff
    const HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    //print loops
    cout << "  ";
    for(int i = 0; i < 8; i++){
        cout << alphabet[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < 8; i++){
        //reset console to normal color
        SetConsoleTextAttribute(hConsole, 15);        
        cout << i+1 << " "<< std::flush;
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
            if(boardArr[j][i] == " "){
                cout << " " << " " << std::flush;
            } else if (boardArr[j][i] == "wp"){
                cout << "wP"  << std::flush;
            } else if (boardArr[j][i] == "bp"){
                cout << "bP"  << std::flush;
            }
        }
        cout << endl;
    }
    
}

Board::Board(const Board& orig) {
}

Board::~Board() {
}

