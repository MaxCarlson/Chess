/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MoveChecking.h
 * Author: C-60
 *
 * Created on June 11, 2017, 3:52 PM
 */

#ifndef MOVECHECKING_H
#define MOVECHECKING_H

#include <string>
#include <iostream>

#include "Pieces.h"
#include "chessBoard.h"

using namespace std;

class MoveChecking {
public:
    MoveChecking();
    bool movePiece();

private:
    bool properInput = false;
    std::string moveInput;
    char a,b,c,d;
    
    bool boardCheck();
};

#endif /* MOVECHECKING_H */

