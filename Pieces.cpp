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
    //friendly check
    if(turns%2==0){
        for(int i = 0; i < 6; i++){
            if(boardArr[y2][x2] == whitePieces[i]){
                return false;
            }
        }
    } else if(turns % 2 == 1){
        for(int i = 0; i < 6; i++){
            if(boardArr[y2][x2] == blackPieces[i]){
                return false;
            }
        }
    }
    
    //find which piece to move
    //white pieces
    if(turns % 2 == 0){
        if(boardArr[y1][x1] == "P"){
            whitePawn();
        }else if(boardArr[y1][x1] == "R"){
            whiteRook();
        }else if(boardArr[y1][x1] == "N"){
            whiteKnight();
        } else if(boardArr[y1][x1] == "B"){
            whiteBishop();
        } else if(boardArr[y1][x1] == "Q"){
            whiteQueen();
        }
    //black pieces    
    }else if (turns % 2 == 1) {
        if(boardArr[y1][x1] == "p"){
            blackPawn();
        }else if(boardArr[y1][x1] == "r"){
            blackRook();
        } else if(boardArr[y1][x1] == "n"){
            blackKnight();
        }else if(boardArr[y1][x1] == "b"){
            blackBishop();
        }else if(boardArr[y1][x1] == "q"){
            blackQueen();
        }
    }
    
    
    
    
}

// Test if moves are valid + move piece + take piece

bool Pieces::whiteQueen(){
    //only perfect diagonal check
    int diag = abs(x1-x2);
    int diag1 = abs(y1-y2);
    
    if(diag == diag1){
        //up right
        if(y1-y2 > 0 && x1-x2 < 0){
            int j = x1+1;
            for(int i = y1-1; i >= y2+1; i--){
                if(boardArr[i][j] != " "){
                    return false;
                }
                j ++;
            }
            boardArr[y1][x1] = " ";
            boardArr[y2][x2] = "Q";
            return true;

        //up left    
        } else if(y1-y2 > 0 && x1-x2 > 0){
            int j = x1-1;
            for(int i = y1-1; i >= y2+1; i--){
                if(boardArr[i][j] != " "){
                    return false;
                }
                j --;
            }
            boardArr[y1][x1] = " ";
            boardArr[y2][x2] = "Q";
            return true;

        //down left    
        }else if(y1-y2 < 0 && x1-x2 > 0){
            int j = x1-1;
            for(int i = y1+1; i <= y2-1; i++){
                if(boardArr[i][j] != " "){
                    return false;
                }
                j --;
            }
            boardArr[y1][x1] = " ";
            boardArr[y2][x2] = "Q";
            return true;

        //down right    
        } else if(y1-y2 < 0 && x1-x2 < 0){
            int j = x1+1;
            for(int i = y1+1; i <= y2-1; i++){
                if(boardArr[i][j] != " "){
                    return false;
                }
                j ++;
            }
            boardArr[y1][x1] = " ";
            boardArr[y2][x2] = "Q"
                    "";
            return true;
        }   
    } else {
        int distance;
        
        //going up
        if(x1 == x2 && y1 != y2){
            distance = y1-y2;
             
            if(distance > 0){
                for(int i = y1-1; i >= y2+1; --i){
                    if(boardArr[i][x1] != " "){
                        return false;
                    }
                }
            boardArr[y1][x1] = " ";
            boardArr[y2][x2] = "Q";
            return true;
        //going down    
        }else if(distance < 0){
            for(int i = y1+1; i <= y2-1; i++){
                if(boardArr[i][x1] != " "){
                    return false;
                }
            }
            boardArr[y1][x1] = " ";
            boardArr[y2][x2] = "Q";
            return true;
        }
        
        //Horizontal test    
        } else if (x1 != x2 && y1 == y2){
            distance = x1-x2;
            //going left
            if(distance > 0){
                for(int i = x1-1; i >= x2+1; --i){
                    if(boardArr[y1][i] != " "){
                        return false;
                    }
                }
            boardArr[y1][x1] = " ";
            boardArr[y2][x2] = "Q";
            return true;

            //going right    
        }else if (distance < 0){
            for(int i = x1+1; i <= x2-1; ++i){
                if(boardArr[y1][i] != " "){
                    return false;
                }
            }
            boardArr[y1][x1] = " ";
            boardArr[y2][x2] = "Q";
            return true;
            }
        }
        
    }

return false;

}

bool Pieces::blackQueen(){
    //only perfect diagonal check
    int diag = abs(x1-x2);
    int diag1 = abs(y1-y2);
    
    if(diag == diag1){
        //up right
        if(y1-y2 > 0 && x1-x2 < 0){
            int j = x1+1;
            for(int i = y1-1; i >= y2+1; i--){
                if(boardArr[i][j] != " "){
                    return false;
                }
                j ++;
            }
            boardArr[y1][x1] = " ";
            boardArr[y2][x2] = "q";
            return true;

        //up left    
        } else if(y1-y2 > 0 && x1-x2 > 0){
            int j = x1-1;
            for(int i = y1-1; i >= y2+1; i--){
                if(boardArr[i][j] != " "){
                    return false;
                }
                j --;
            }
            boardArr[y1][x1] = " ";
            boardArr[y2][x2] = "q";
            return true;

        //down left    
        }else if(y1-y2 < 0 && x1-x2 > 0){
            int j = x1-1;
            for(int i = y1+1; i <= y2-1; i++){
                if(boardArr[i][j] != " "){
                    return false;
                }
                j --;
            }
            boardArr[y1][x1] = " ";
            boardArr[y2][x2] = "q";
            return true;

        //down right    
        } else if(y1-y2 < 0 && x1-x2 < 0){
            int j = x1+1;
            for(int i = y1+1; i <= y2-1; i++){
                if(boardArr[i][j] != " "){
                    return false;
                }
                j ++;
            }
            boardArr[y1][x1] = " ";
            boardArr[y2][x2] = "q"
                    "";
            return true;
        }   
    } else {
        int distance;
        
        //going up
        if(x1 == x2 && y1 != y2){
            distance = y1-y2;
             
            if(distance > 0){
                for(int i = y1-1; i >= y2+1; --i){
                    if(boardArr[i][x1] != " "){
                        return false;
                    }
                }
            boardArr[y1][x1] = " ";
            boardArr[y2][x2] = "q";
            return true;
        //going down    
        }else if(distance < 0){
            for(int i = y1+1; i <= y2-1; i++){
                if(boardArr[i][x1] != " "){
                    return false;
                }
            }
            boardArr[y1][x1] = " ";
            boardArr[y2][x2] = "q";
            return true;
        }
        
        //Horizontal test    
        } else if (x1 != x2 && y1 == y2){
            distance = x1-x2;
            //going left
            if(distance > 0){
                for(int i = x1-1; i >= x2+1; --i){
                    if(boardArr[y1][i] != " "){
                        return false;
                    }
                }
            boardArr[y1][x1] = " ";
            boardArr[y2][x2] = "q";
            return true;

            //going right    
        }else if (distance < 0){
            for(int i = x1+1; i <= x2-1; ++i){
                if(boardArr[y1][i] != " "){
                    return false;
                }
            }
            boardArr[y1][x1] = " ";
            boardArr[y2][x2] = "q";
            return true;
            }
        }
        
    }

return false;
    
}



bool Pieces::whiteBishop(){
    //only perfect diagonal check
    int diag = abs(x1-x2);
    int diag1 = abs(y1-y2);
    
    if(diag != diag1){
        return false;
    }

    //up right
    if(y1-y2 > 0 && x1-x2 < 0){
        int j = x1+1;
        for(int i = y1-1; i >= y2+1; i--){
            if(boardArr[i][j] != " "){
                return false;
            }
            j ++;
        }
        boardArr[y1][x1] = " ";
        boardArr[y2][x2] = "B";
        return true;
        
    //up left    
    } else if(y1-y2 > 0 && x1-x2 > 0){
        int j = x1-1;
        for(int i = y1-1; i >= y2+1; i--){
            if(boardArr[i][j] != " "){
                return false;
            }
            j --;
        }
        boardArr[y1][x1] = " ";
        boardArr[y2][x2] = "B";
        return true;
        
    //down left    
    }else if(y1-y2 < 0 && x1-x2 > 0){
        int j = x1-1;
        for(int i = y1+1; i <= y2-1; i++){
            if(boardArr[i][j] != " "){
                return false;
            }
            j --;
        }
        boardArr[y1][x1] = " ";
        boardArr[y2][x2] = "B";
        return true;
        
    //down right    
    } else if(y1-y2 < 0 && x1-x2 < 0){
        int j = x1+1;
        for(int i = y1+1; i <= y2-1; i++){
            if(boardArr[i][j] != " "){
                return false;
            }
            j ++;
        }
        boardArr[y1][x1] = " ";
        boardArr[y2][x2] = "B";
        return true;
    }

    return false;
}

bool Pieces::blackBishop(){
    //only perfect diagonal check
    int diag = abs(x1-x2);
    int diag1 = abs(y1-y2);
    
    if(diag != diag1){
        return false;
    }

    //up right
    if(y1-y2 > 0 && x1-x2 < 0){
        int j = x1+1;
        for(int i = y1-1; i >= y2+1; i--){
            if(boardArr[i][j] != " "){
                return false;
            }
            j ++;
        }
        boardArr[y1][x1] = " ";
        boardArr[y2][x2] = "b";
        return true;
        
    //up left    
    } else if(y1-y2 > 0 && x1-x2 > 0){
        int j = x1-1;
        for(int i = y1-1; i >= y2+1; i--){
            if(boardArr[i][j] != " "){
                return false;
            }
            j --;
        }
        boardArr[y1][x1] = " ";
        boardArr[y2][x2] = "b";
        return true;
        
    //down left    
    }else if(y1-y2 < 0 && x1-x2 > 0){
        int j = x1-1;
        for(int i = y1+1; i <= y2-1; i++){
            if(boardArr[i][j] != " "){
                return false;
            }
            j --;
        }
        boardArr[y1][x1] = " ";
        boardArr[y2][x2] = "b";
        return true;
        
    //down right    
    } else if(y1-y2 < 0 && x1-x2 < 0){
        int j = x1+1;
        for(int i = y1+1; i <= y2-1; i++){
            if(boardArr[i][j] != " "){
                return false;
            }
            j ++;
        }
        boardArr[y1][x1] = " ";
        boardArr[y2][x2] = "b";
        return true;
    }

    return false;    
}

bool Pieces::whiteKnight(){
    //up left
    if(x1-2 == x2 && y1-1 == y2){
        boardArr[y1][x1] = " ";
        boardArr[y2][x2] = "N";
        return true;
    } else if(x1-1 == x2 && y1-2 == y2){
        boardArr[y1][x1] = " ";
        boardArr[y2][x2] = "N";
        return true;
    }
    //up right
    if(x1+2 == x2 && y1-1 == y2){
        boardArr[y1][x1] = " ";
        boardArr[y2][x2] = "N";
        return true;
    } else if(x1+1 == x2 && y1-2 == y2){
        boardArr[y1][x1] = " ";
        boardArr[y2][x2] = "N";
        return true;
    }
    //down left
    if(x1-2 == x2 && y1+1 == y2){
        boardArr[y1][x1] = " ";
        boardArr[y2][x2] = "N";
        return true;
    } else if(x1-1 == x2 && y1+2 == y2){
        boardArr[y1][x1] = " ";
        boardArr[y2][x2] = "N";
        return true;
    }
    //down right
    if(x1+2 == x2 && y1+1 == y2){
        boardArr[y1][x1] = " ";
        boardArr[y2][x2] = "N";
        return true;
    } else if(x1+1 == x2 && y1+2 == y2){
        boardArr[y1][x1] = " ";
        boardArr[y2][x2] = "N";
        return true;
    }
    return false;
}

bool Pieces::blackKnight(){
    //up left
    if(x1-2 == x2 && y1-1 == y2){
        boardArr[y1][x1] = " ";
        boardArr[y2][x2] = "n";
        return true;
    } else if(x1-1 == x2 && y1-2 == y2){
        boardArr[y1][x1] = " ";
        boardArr[y2][x2] = "n";
        return true;
    }
    //up right
    if(x1+2 == x2 && y1-1 == y2){
        boardArr[y1][x1] = " ";
        boardArr[y2][x2] = "n";
        return true;
    } else if(x1+1 == x2 && y1-2 == y2){
        boardArr[y1][x1] = " ";
        boardArr[y2][x2] = "n";
        return true;
    }
    //down left
    if(x1-2 == x2 && y1+1 == y2){
        boardArr[y1][x1] = " ";
        boardArr[y2][x2] = "n";
        return true;
    } else if(x1-1 == x2 && y1+2 == y2){
        boardArr[y1][x1] = " ";
        boardArr[y2][x2] = "n";
        return true;
    }
    //down right
    if(x1+2 == x2 && y1+1 == y2){
        boardArr[y1][x1] = " ";
        boardArr[y2][x2] = "n";
        return true;
    } else if(x1+1 == x2 && y1+2 == y2){
        boardArr[y1][x1] = " ";
        boardArr[y2][x2] = "n";
        return true;
    }
    return false;
}    


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
            for(int i = y1+1; i <= y2-1; i++){
                if(boardArr[i][x1] != " "){
                    return false;
                }
            }
            boardArr[y1][x1] = " ";
            boardArr[y2][x2] = "R";
            return true;
        }
        
    //Horizontal test    
    } else if (x1 != x2 && y1 == y2){
        distance = x1-x2;
        //going left
        if(distance > 0){
            for(int i = x1-1; i >= x2+1; --i){
                if(boardArr[y1][i] != " "){
                    return false;
                }
            }
            boardArr[y1][x1] = " ";
            boardArr[y2][x2] = "R";
            return true;
            
        //going right    
        }else if (distance < 0){
            for(int i = x1+1; i <= x2-1; ++i){
                if(boardArr[y1][i] != " "){
                    return false;
                }
            }
            boardArr[y1][x1] = " ";
            boardArr[y2][x2] = "R";
            return true;
        }
    }
    
    return false;
}

bool Pieces::blackRook(){
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
            boardArr[y2][x2] = "r";
            return true;
        //going down    
        }else if(distance < 0){
            for(int i = y1+1; i <= y2-1; i++){
                if(boardArr[i][x1] != " "){
                    return false;
                }
            }
            boardArr[y1][x1] = " ";
            boardArr[y2][x2] = "r";
            return true;
        }
        
    //Horizontal test    
    } else if (x1 != x2 && y1 == y2){
        distance = x1-x2;
        //going left
        if(distance > 0){
            for(int i = x1-1; i >= x2+1; --i){
                if(boardArr[y1][i] != " "){
                    return false;
                }
            }
            boardArr[y1][x1] = " ";
            boardArr[y2][x2] = "r";
            return true;
            
        //going right    
        }else if (distance < 0){
            for(int i = x1+1; i <= x2-1; ++i){
                if(boardArr[y1][i] != " "){
                    return false;
                }
            }
            boardArr[y1][x1] = " ";
            boardArr[y2][x2] = "r";
            return true;
        }
    }
    
    return false;    
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


