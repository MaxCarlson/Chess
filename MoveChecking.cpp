/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MoveChecking.cpp
 * Author: C-60
 * 
 * Created on June 11, 2017, 3:52 PM
 */

#include <string>

#include "MoveChecking.h"



MoveChecking::MoveChecking() {
    cout << "Enter the coordinates of the piece you wish to move " << endl;
    cout << "followed by the coordinates where you wish the piece to go" << endl;
    cout << "ex: moving the pawn at a2 to a3 would be 'a2a3'" << endl;
    while(properInput == false){
        cin >> moveInput;
        if(moveInput.length() != 4){
            cout <<"That's not a proper input, please try again" << endl;
        } else if (moveInput.length() == 4){
            a = moveInput[0]; b = moveInput[1];
            c = moveInput[2]; d = moveInput[3];
            boardCheck();
            properInput = true;
        } else {
            
        }
    }
}

bool MoveChecking::boardCheck(){
    if(a == 'a' || a == 'b' || a == 'c' || a == 'd' || a == 'e' || a == 'f' || a == 'g') {
        
    } else {
        cout << "bad";
    }
}







MoveChecking::MoveChecking(const MoveChecking& orig) {
}

MoveChecking::~MoveChecking() {
}
