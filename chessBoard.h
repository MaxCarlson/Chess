/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   chessBoard.h
 * Author: C-60
 *
 * Created on June 11, 2017, 8:17 PM
 */

#ifndef CHESSBOARD_H
#define CHESSBOARD_H
    //array of entire board
    extern std::string boardArr [8][8];
    extern int turns;
    
    //arrays of kings safety boards
    extern bool whiteSafe[8][8];
    extern bool blackSafe[8][8];



#endif /* CHESSBOARD_H */

