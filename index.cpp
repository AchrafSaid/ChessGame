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
int main(){
    char Board[10][10]={
        {' ','a','b','c','d','e','f','g','h'},
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
    while(true){        
        std::cout<<"Enter The Postion of the piece that you want to move: ";
        std::cin>>postion;
        std::cout<<"Where to move: ";
    }
    return 0;

}