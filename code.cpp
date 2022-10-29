#include <bits/stdc++.h>
using namespace std;
char tc[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char turn='X';
int row,col;
int choice;
int draw=false;
//btw u could also do this bool and then turn every bool to int basically false if 0 
//true if 1


void menu(){
    cout<<"TIC TAC TOE GAME - made by Arghya"<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<" "<<endl;
}

void display(){
   system("cls");
   menu();
   cout<<"    |     |     "<<endl;
   cout<<" "<<tc[0][0]<<"  |  "<<tc[0][1]<<"  |  "<<tc[0][2]<<"  "<<endl;
   cout<<"____|_____|____     "<<endl;
   cout<<"    |     |     "<<endl;
   cout<<" "<<tc[1][0]<<"  |  "<<tc[1][1]<<"  |  "<<tc[1][2]<<"  "<<endl;
   cout<<"____|_____|____     "<<endl;
   cout<<"    |     |     "<<endl;
   cout<<" "<<tc[2][0]<<"  |  "<<tc[2][1]<<"  |  "<<tc[2][2]<<"  "<<endl;
   cout<<"    |     |     "<<endl;
}

void t(){
    if(turn=='X'){
        cout<<"player1[X]'s turn"<<endl;
    }
    else if(turn=='O'){
        cout<<"player2[O]'s turn"<<endl;
    }
    cin>>choice;

    switch(choice){
        case 1: 
       row=0,col=0;
        break;

        case 2:
         row=0,col=1;
        break;

        case 3:
          row=0,col=2;
        break;

        case 4:
          row=1,col=0;
        break;

        case 5:
          row=1,col=1;
        break;

        case 6:
          row=1,col=2;
        break;

        case 7:
          row=2,col=0;
        break;

        case 8:
          row=2,col=1;
        break;

        case 9:
         row=2,col=2;
        break;

        default:
        cout<<"invalid choice, pls try again "<<endl;
        break;
    }
        
         if(turn=='X' && (tc[row][col]!='X') &&  (tc[row][col]!='O')){
        tc[row][col]='X';
           turn='O';
    }
    else if(turn=='O' && (tc[row][col]!='X') &&  (tc[row][col]!='O')){
        tc[row][col]='O';
    turn='X';
    }
    else{
        cout<<"Try again"<<endl;
    }
    display();

}

bool gameover(){
  //for row and columns
    for(int i = 0; i < 3; i++){
    if((tc[i][0]==tc[i][1] && tc[i][0]==tc[i][2]) || (tc[0][i]==tc[1][i] && tc[0][i]==tc[2][i])){
            return false;
    }}
       
    for(int i = 0; i < 3; i++){
    if((tc[0][0]==tc[1][1] && tc[0][0]==tc[2][2])||(tc[0][2]==tc[1][1] && tc[0][2]==tc[2][0])){
            return false;
    }}

    //for no left spaces 
      for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
          if(tc[i][j]!='X' && tc[i][j]!='O'){
            return true;
          }
}}
//if draw
draw=true;
return false;
      }

int main(){

while(gameover()){ 
  
    display();
    t();
    gameover();
}
    if(turn=='X' && draw == false){
        cout<<"SIUUUUUUUUUUUUUUU Player2[O] won, congrats boi"<<endl;
    }
    else if(turn=='O' && draw == false){
        cout<<"SIUUUUUUUUUUUUUUU Player1[X] won, congrats boi"<<endl;
    }
    else{
        cout<<"Game draw"<<endl;
    }
    return 0;
}
