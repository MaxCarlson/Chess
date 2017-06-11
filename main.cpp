/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: C-60
 *
 * Created on June 10, 2017, 8:38 PM
 */

#include <cstdlib>
#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>

#include "Board.h"
#include "Pieces.h"
#include <windows.h>




using namespace std;

/*
 * 
 */
enum ConsoleColors
{
   BlackFore   = 0,
   MaroonFore  = FOREGROUND_RED,
   GreenFore   = FOREGROUND_GREEN,
   NavyFore    = FOREGROUND_BLUE,
   TealFore    = FOREGROUND_GREEN | FOREGROUND_BLUE,
   OliveFore   = FOREGROUND_RED | FOREGROUND_GREEN,
   PurpleFore  = FOREGROUND_RED | FOREGROUND_BLUE,
   GrayFore    = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE,
   SilverFore  = FOREGROUND_INTENSITY,
   RedFore     = FOREGROUND_INTENSITY | FOREGROUND_RED,
   LimeFore    = FOREGROUND_INTENSITY | FOREGROUND_GREEN,
   BlueFore    = FOREGROUND_INTENSITY | FOREGROUND_BLUE,
   AquaFore    = FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE,
   YellowFore  = FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN,
   FuchsiaFore = FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE,
   WhiteFore   = FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE,

   BlackBack   = 0,
   MaroonBack  = BACKGROUND_RED,
   GreenBack   = BACKGROUND_GREEN,
   NavyBack    = BACKGROUND_BLUE,
   TealBack    = BACKGROUND_GREEN | BACKGROUND_BLUE,
   OliveBack   = BACKGROUND_RED | BACKGROUND_GREEN,
   PurpleBack  = BACKGROUND_RED | BACKGROUND_BLUE,
   GrayBack    = BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE,
   SilverBack  = BACKGROUND_INTENSITY,
   RedBack     = BACKGROUND_INTENSITY | BACKGROUND_RED,
   LimeBack    = BACKGROUND_INTENSITY | BACKGROUND_GREEN,
   BlueBack    = BACKGROUND_INTENSITY | BACKGROUND_BLUE,
   AquaBack    = BACKGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE,
   YellowBack  = BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN,
   FuchsiaBack = BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_BLUE,
   WhiteBack   = BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE,
};


int main(int argc, char** argv) {
    

    Board  newBoard;
    newBoard.printBoard();

    int n;
    cin >> n;
    return 0;
}

/*
    const HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // yellow on blue
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_BLUE);
    SetConsoleTextAttribute(hConsole, BlackBack | RedFore);
    std::cout << 11111 << std::flush;

    // blue on bright green
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_INTENSITY);
    std::cout << 2222 << std::flush;

    // reset to black on white
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << std::endl;
    
    
    SetConsoleTextAttribute(hConsole, 5 | 15);
    std::cout << 1111 << std::flush;
    
   
    SetConsoleTextAttribute(hConsole,5 | 0);
    std::cout << 2222;
    */


 