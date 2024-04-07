#include <iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std;

int main(){
    srand(time(0));

    int playerScore=0;
    int computerScore=0;
    string arr[3]={"rock","paper","scissor"};
    int N=3;
    while(N){
    int randompos = rand() % 3;

    string inp;
    cout<<"Your turn"<<endl;
    cin>>inp;
    string computerOption=arr[randompos];
    cout<<"Computer turn"<<endl;
    cout << computerOption << endl;
    if(inp=="rock" && computerOption=="paper" ){
        computerScore++;
    }
    else if(inp=="paper" && computerOption=="scissor"){
        computerScore++;
    }
    else if(inp=="scissor" && computerOption=="rock"){
        computerScore++;
    }
    else if(inp=="rock" && computerOption=="rock"){
        playerScore++;
        computerScore++;
    }
    else if(inp=="paper" && computerOption=="paper"){
        playerScore++;
        computerScore++;
    }
    else if(inp=="scissor" && computerOption=="scissor"){
        playerScore++;
        computerScore++;
    }
    else{
        playerScore++;
    }

  N--;
    }
    if(computerScore>playerScore){
        cout<<"computer won the game";
    }
    else if(playerScore>computerScore){
        cout<<"Player won the game";
    }
    else{
        cout<<"Game tie";
    }
    return 0;
}
