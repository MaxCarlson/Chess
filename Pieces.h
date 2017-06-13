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


#include "chessBoard.h"
#include "Board.h"

class Pieces {
public:
    
    Pieces(char a, char b, char c, char d);
    std::string pieceToMove(char a, char b);
    std::string movePieceWhere(char c, char d);
    bool whichPiece();
    
private:
    char alphabet[8] = {'a','b','c','d','e','f','g','h'};
    int flip[8] = {7, 6, 5, 4, 3, 2, 1, 0};
    
    //arrays for checking friendly fire
    std::string blackPieces[6] = {"p", "q", "k", "b", "n", "r"};
    std::string whitePieces[6] = {"P", "Q", "K", "B", "N", "R"};
    
    // arrays for white and black lines of attack for king
    
    bool whiteLoa[8][8];
    bool blackLoa[8][8];
    
    //Piece and move coordinates
    int x1, y1, x2, y2;
    //white pieces
    bool whitePawn();
    bool whiteRook();
    bool whiteKnight();
    bool whiteBishop();
    
    bool whiteQueen();
    bool whiteKing();
    
    //black pieces
    bool blackPawn();
    bool blackRook();
    bool blackKnight();
    bool blackBishop();
    
    bool blackQueen();
    bool blackKing();
};


#endif /* PIECES_H */

