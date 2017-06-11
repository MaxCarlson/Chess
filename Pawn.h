/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pawn.h
 * Author: C-60
 *
 * Created on June 10, 2017, 9:14 PM
 */

#ifndef PAWN_H
#define PAWN_H

#include <cstdlib>
#include <iostream>

using namespace std;


    



class Pawn {
public:
    Pawn();
    Pawn(const Pawn& orig);
    virtual ~Pawn();
    
    const static char symbolP = 'P';
    
    moveWhite(int x, int y);
    moveBlack(int x, int y);
private:

};

#endif /* PAWN_H */

