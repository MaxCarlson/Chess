/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pieces.h
 * Author: C-60
 *
 * Created on June 10, 2017, 10:50 PM
 */

#ifndef PIECES_H
#define PIECES_H
#include <cstdlib>
#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>

#include "Board.h"
#include "chessBoard.h"

class Pieces {
private:
public:
    
    Pieces(char a, char b);
    std::string pieceToMove(char a, char b);
    std::string movePieceWhere(char c, char d);
    
};

/*
class WhitePawn: public Pieces{
private:
public:
    std::string symbol = "P";
    WhitePawn();
    
    
};
*/
#endif /* PIECES_H */

