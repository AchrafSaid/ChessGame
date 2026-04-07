#include<iostream>
#include<string>
void printBoard(char Board[10][10]){
    
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            std::cout<<Board[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
}
void VerifyPostions(std::string postion,std::string move,std::int row,std::int col){
    if(postion[0]=='a')
        col=1;
    if(postion[0]=='b')
        col=2
    if(position[0]=='c')
        col=3;
    if(postion[0]=='d')
        col=4;
    if(postion[0]=='e')
        col=5;
    if(postion[0]=='f')
        col=6;
    if(postion[0]=='g')
        col=7;
    if(postion[0]=='h')
        col=8;
    if(postion[1]=='1')
        row=8;
    if(postion[1]=='2')     
        row=7;
    if(postion[1]=='3')
        row=6;
    if(postion[1]=='4')
        row=5;
    if(postion[1]=='5')
        row=4;
    if(postion[1]=='6')
        row=3;
    if(postion[1]=='7')
        row=2;
    if(postion[1]=='8')
        row=1;
}
char Whatpiece(char piece){
    if(piece=='P')
        return 'P';
    if(piece=='R')
        return 'R';
    if(piece=='k')
        return 'k';
    if(piece=='B')
        return 'B';
    if(piece=='Q')
        return 'Q';
    if(piece=='K')
        return 'K';
}
int main(){
    char Board[10][10]={
        {' ','a','b','c','d','e','f','g','h',' '},
        {'8','R','N','B','Q','K','B','N','R','8'},
        {'7','P','P','P','P','P','P','P','P','7'},
        {'6',' ',' ',' ',' ',' ',' ',' ',' ','6'},
        {'5',' ',' ',' ',' ',' ',' ',' ',' ','5'},
        {'4',' ',' ',' ',' ',' ',' ',' ',' ','4'},
        {'3',' ',' ',' ',' ',' ',' ',' ',' ','3'},
        {'2','p','p','p','p','p','p','p','p','2'},
        {'1','r','n','b','q','k','b','n','r','1'},
        {' ','a','b','c','d','e','f','g','h',' '}

    };
    printBoard(Board);
    std::string postion;
    std::string move;
    std::int row=0;
    std::int col=0;
    while(true){        
        std::cout<<"Enter The Postion of the piece that you want to move: ";
        std::cin>>postion;
        std::cout<<"Where to move: ";
        std::cin>>move;
        row=0,col=0;
        VerifyPostions(postion,move,row,col);
        char piece = WhatPiece(Board[row][col]);
    }
    return 0;

}