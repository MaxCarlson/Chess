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
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            boardPieces[j][i] = new NoPiece;
        }
        
    }
    for(int i = 0; i < 8; i++){
        boardPieces[1][i] = new BlackPawn;
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


Board::Board(const Board& orig) {
}

Board::~Board() {
}

