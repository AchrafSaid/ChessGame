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
void VerifyPostions(std::string position,int &row,int &col){
    if(position[0]=='a')
        col=1;
    if(position[0]=='b')
        col=2;
    if(position[0]=='c')
        col=3;
    if(position[0]=='d')
        col=4;
    if(position[0]=='e')
        col=5;
    if(position[0]=='f')
        col=6;
    if(position[0]=='g')
        col=7;
    if(position[0]=='h')
        col=8;
    if(position[1]=='1')
        row=8;
    if(position[1]=='2')     
        row=7;
    if(position[1]=='3')
        row=6;
    if(position[1]=='4')
        row=5;
    if(position[1]=='5')
        row=4;
    if(position[1]=='6')
        row=3;
    if(position[1]=='7')
        row=2;
    if(position[1]=='8')
        row=1;
}
char WhatPiece(char Board[][10],int row,int col){
    if(Board[row][col]=='p')
        return 'p';
    if(Board[row][col]=='r')
        return 'r';
    if(Board[row][col]=='n')
        return 'k';
    if(Board[row][col]=='b')
        return 'b';
    if(Board[row][col]=='q')
        return 'q';
    if(Board[row][col]=='k')
        return 'k';
    return 'o';
}
void isLegalMove(char Board[][10],char piece,int& row,int &col,int &row2,int &col2){
    std::cout<<piece<<'\n';
    if(piece=='p'){
        if(Board[row-1][col]==Board[row2][col2]){
            Board[row2][col2]='p';
            Board[row][col]=' ';
            std::cout<<"Done"<<'\n';
        }
        else{
            std::cout<<"illegalMove"<<'\n';
        }
    }
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
    std::string positionFrom;
    std::string positionTo;
    int row=0;
    int col=0;
    int row2=0;
    int col2=0;
    bool WhiteTurn=true;
    while(true){        
        std::cout<<"Enter The Postion of the piece that you want to move: ";
        std::cin>>positionFrom;
        std::cout<<"Where to move: ";
        std::cin>>positionTo;
        row=0,col=0;
        VerifyPostions(positionFrom,row,col);
        char piece = WhatPiece(Board,row,col);
        row2=0,col2=0;
        VerifyPostions(positionTo,row2,col2);
        isLegalMove(Board,piece,row,col,row2,col2);
        printBoard(Board);
    }
    return 0;

}