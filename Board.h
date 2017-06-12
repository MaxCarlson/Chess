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
#include "chessBoard.h"

using namespace std;


class Board {
private:
    
public:
    Board();


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
    
    printBoard();


};

#endif /* BOARD_H */

