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

using namespace std;


class Board {
private:
    
public:
    Board();
    Board(const Board& orig);
    virtual ~Board();
    
    char boardArr[8][8];
    string move, piece;
    whiteMove(){
        cout <<"Whites move, which piece would you like to move?" << endl;
        cin >> piece;
        cout <<"Where would you like to move your piece?" << endl;
        cin >> move;
    }

    blackMove(){
        cout <<"Blacks move, which piece would you like to move?" << endl;
        cin >> piece;
        cout <<"Where would you like to move your piece?" << endl;
        cin >> move;
    }

};

#endif /* BOARD_H */

