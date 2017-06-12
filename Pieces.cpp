/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pieces.cpp
 * Author: C-60
 * 
 * Created on June 10, 2017, 10:50 PM
 */

#include "Pieces.h"


Pieces::Pieces(char a,char b, char c, char d) {
    //getting coordinates from letters
    for(int i = 0; i < 8; i++){
        if(a == alphabet[i]){
            x1 = i;
            
        }
        if(c == alphabet[i]){
            x2 = i;
        }
    }
    y1 = b-'0';
    y2 = d-'0';
    y1 = flip[y1];
    y2 = flip[y2];
    
    
}

bool Pieces::whichPiece(){
    //find which piece to move
    if(boardArr[y1][x1] == "P" && turns%2 == 0){
        whitePawn();
    }else if(boardArr[y1][x1] == "p" && turns%2 == 1){
        blackPawn();
    }else if(boardArr[y1][x1] == "R" && turns%2 == 0){
        whiteRook();
    }else if(boardArr[y1][x1] == "r" && turns%2 == 1){
        blackRook();
    }
}
// Test if moves are valid + move piece + take piece


bool Pieces::whiteRook(){
    int distance;
    bool pieceOn = false;
    //vertical only test
    if(x1 == x2 && y1 != y2){
        distance = y1-y2;
        //going up 
        if(distance > 0){
            for(int i = y1-1; i >= y2+1; --i){
                if(boardArr[i][x1] != " "){
                    return false;
                }
            }
            boardArr[y1][x1] = " ";
            boardArr[y2][x2] = "R";
            return true;
        //going down    
        }else if(distance < 0){
            
        }
    }
    
    return false;
}

bool Pieces::blackRook(){
    
}

bool Pieces::whitePawn(){
    //pawn first turn
    if(boardArr[y2][x2] == " " && y1-y2 <= 2 && y1-y2 > 0 && x1 == x2 && turns == 0){
        boardArr[y1][x1] = " ";
        boardArr[y2][x2] = "P";
        return true;
    //pawn move forward    
    } else if(boardArr[y2][x2] == " " && y1-y2 == 1 && x1 == x2){
        boardArr[y1][x1] = " ";
        boardArr[y2][x2] = "P";
        return true;
    //pawn takes piece diagonal
    } else if(boardArr[y2][x2] != " " && y1-y2 == 1 && x1-x2 != 0){
        boardArr[y1][x1] = " ";
        boardArr[y2][x2] = "P";
        return true;
    //Need turn to queen
    }
    return false;
}

bool Pieces::blackPawn(){
    //pawn first turn
    if(boardArr[y2][x2] == " " && y2-y1 <= 2 && y2-y1 > 0 && x1 == x2 && turns == 1){
        boardArr[y1][x1] = " ";
        boardArr[y2][x2] = "p";
        return true;
    //pawn move forward    
    } else if(boardArr[y2][x2] == " " && y2-y1 == 1 && x1 == x2){
        boardArr[y1][x1] = " ";
        boardArr[y2][x2] = "p";
        return true;
    //pawn takes piece diagonal
    } else if(boardArr[y2][x2] != " " && y2-y1 == 1 && x1-x2 != 0){
        boardArr[y1][x1] = " ";
        boardArr[y2][x2] = "p";
        return true;
    //Need turn to queen  
    } 
    return false;
}


