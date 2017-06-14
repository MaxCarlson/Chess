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
       
}




Board::printBoard(){
    char alphabet[] = {'a','b','c','d','e','f','g','h'};
    int counter = 8;
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
        //cout << counter << " "<< std::flush;
        //counter -= 1;
        cout << i << " "<< std::flush;
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
            std::cout << boardArr[i][j] << " " << std::flush;
        }
        std::cout << endl;
    }
    
}


