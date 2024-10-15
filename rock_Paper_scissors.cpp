#include <iostream>
#include <ctime>
using namespace std;

char GetUserChoice();
char GetComputerChoice();
void Displaychoice(char choice);
void ChooseWinner(char player,char computer);

int main(){
	char player;
	char computer;
	
	player=GetUserChoice();
	cout<<"Your Choice is : ";
	Displaychoice(player);
	
	computer=GetComputerChoice();
	cout<<"Computer choice is: ";
	Displaychoice(computer);
	
	ChooseWinner(player,computer);
	
}

char GetUserChoice(){

	char PlayerChoice;
	cout<<"Rock-Paper-Scissors Game!!\n";
	cout<<"**************************\n";
do{
	cout<<"Choose one of the following\n";
	cout<<"**************************\n";
	cout<<"'r' for Rock \n";
	cout<<"'p' for Paper \n";
	cout<<"'s' for Scissors \n";
	cin>>PlayerChoice;
	
}while(PlayerChoice!='r'&& PlayerChoice!='p' && PlayerChoice !='s');


	return PlayerChoice;
}
char GetComputerChoice(){
	char ComputerChoice;
	srand(time(0));
	int num=rand()%3 + 1;
	
	switch(num){
		case 1:
			return 'r';
		case 2:
			return 'p';
		case 3:
			return 's';
	}
}
void Displaychoice(char choice){
	switch(choice){
		case 'r':
			cout<<"Rock\n";
			break;
		case 'p':
			cout<<"Paper\n";
			break;
		case 's':
			cout<<"Scissors\n";
			break;
	}
}
void ChooseWinner(char player,char computer){
	switch(player){
		case 'r':
			if(computer=='r'){
			cout<<"ITS A TIE!! \n";
			}
			else if(computer=='p'){
				cout<<"YOU LOSE !! \n";
			}
			else{
				cout<<"YOU WON!! \n";
			}
			break;
		case 'p':
				if(computer=='p'){
			cout<<"ITS A TIE!! \n";
			}
			else if(computer=='s'){
				cout<<"YOU LOSE !! \n";
			}
			else{
				cout<<"YOU WON!! \n";
			}
			break;
		case 's':
			if(computer=='s'){
			cout<<"ITS A TIE!! \n";
			}
			else if(computer=='r'){
				cout<<"YOU LOSE !! \n";
			}
			else{
				cout<<"YOU WON!! \n";
			}
			break;
	}
}