/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Board.h
 * Author: C-60
 *
 * Created on June 10, 2017, 8:39 PM
 */

#ifndef BOARD_H
#define BOARD_H
#include <cstdlib>
#include <iostream>
#include <windows.h>

#include "Pieces.h"

using namespace std;


class Board {
private:
    
public:
    Board();
    Board(const Board& orig);
    virtual ~Board();
    
    Pieces* boardPieces[8][8];
    string boardArr[8][8];
    string move, piece;
    
    printBoard();
    whiteMove();
    blackMove();

};

#endif /* BOARD_H */

