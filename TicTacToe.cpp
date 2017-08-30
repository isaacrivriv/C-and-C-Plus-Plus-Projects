//INGE 3016 Seccion M40
//Isaac A. Rivera Rivas
//Proyecto Tic Tac Toe
#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;
int main(){
	
	//Declaration of functions
	void llenar_matriz(char [][3]);
	void imprimir(char [][3]);
	void ganador(char [][3],char&);
	void jugador1(char[][3]);
	void jugador2(char[][3]);
	void jugador(char[][3]);
	void computadora(char[][3]);
	void menu(char&);
	void player_vs_player(char[][3]);
	void player_vs_computer(char[][3]);
	
	//Variables that will be used
	char restart='y',opcion;
	char matriz_juego[3][3];
	
	do{
	
		menu(opcion); //Calls the menu function to choose the game type
		switch(opcion){
	case '1':
		player_vs_player(matriz_juego);//run principal function 1 of player vs player
		break;
		
	case '2':
		player_vs_computer(matriz_juego);//run principal function 2 of player vs AI
		break;
	
	default:
	cout<<"\nInvalid Option!!"<<endl;	
}	
		while(1){											//Receives only the flags for the restart of the program
			cout<<"\nPlay Again?(Y/N): ";cin>>restart;
			if(restart!='N'&&restart!='n'&&restart!='Y'&&restart!='y'){
cout<<"\nOpcion invalida! Intente de nuevo."<<endl;
restart='f';
}
else
break;
		}
	
	}while(restart=='Y'||restart=='y');//Sentinel
	
	cout<<"\n\n\tTHANK YOU FOR PLAYING!!!"<<endl;
	
	return 0;
	
}

//Functions for the program

//Fill function: Fills the matriz with the number of regions
void llenar_matriz(char matriz_juego[][3]){
	
	matriz_juego[0][0]='1';
	matriz_juego[0][1]='2';
	matriz_juego[0][2]='3';
	matriz_juego[1][0]='4';
	matriz_juego[1][1]='5';
	matriz_juego[1][2]='6';
	matriz_juego[2][0]='7';
	matriz_juego[2][1]='8';
	matriz_juego[2][2]='9';	
}

//Print function: prints the matrix with divions between them
void imprimir(char matriz[][3]){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<" "<<matriz[i][j];
			if(j!=2)
			cout<<" |";
		}
		if(i!=2)
	cout<<"\n---|---|---";
		cout<<endl;
	}
}

//Verify: verifies every combination to win and anounces the winner if any
void ganador(char matriz[][3],char& fin){
	
	for(int i=0;i<3;i++){
	if(matriz[i][0]==matriz[i][1]&&matriz[i][0]==matriz[i][2]){
	fin= matriz[i][0];
}
}
	for(int j=0;j<3;j++){
	if(matriz[0][j]==matriz[1][j]&&matriz[0][j]==matriz[2][j]){
	fin= matriz[0][j];
	
}	
}
	if(matriz[0][0]==matriz[1][1]&&matriz[0][0]==matriz[2][2]){
		fin= matriz[0][0];
		
	}
	
	if(matriz[2][0]==matriz[1][1]&&matriz[2][0]==matriz[0][2]){
		fin= matriz[2][0];
		
	}
	
	
}

//X player: For player vs Player type
void jugador1(char matriz[][3]){
	
	int region;
	cout<<"Player X move: "<<endl<<endl<<"Enter the space you wish to occupy: ";cin>>region;
	if(region==1&&matriz[0][0]!='X'&&matriz[0][0]!='O')
	matriz[0][0]='X';
	else if(region==2&&matriz[0][1]!='X'&&matriz[0][1]!='O')
	matriz[0][1]='X';
	else if(region==3&&matriz[0][2]!='X'&&matriz[0][2]!='O')
	matriz[0][2]='X';
	else if(region==4&&matriz[1][0]!='X'&&matriz[1][0]!='O')
	matriz[1][0]='X';
	else if(region==5&&matriz[1][1]!='X'&&matriz[1][1]!='O')
	matriz[1][1]='X';
	else if(region==6&&matriz[1][2]!='X'&&matriz[1][2]!='O')
	matriz[1][2]='X';
	else if(region==7&&matriz[2][0]!='X'&&matriz[2][0]!='O')
	matriz[2][0]='X';
	else if(region==8&&matriz[2][1]!='X'&&matriz[2][1]!='O')
	matriz[2][1]='X';
	else if(region==9&&matriz[2][2]!='X'&&matriz[2][2]!='O')
	matriz[2][2]='X';
	else{
	cout<<"Invalid Option!! Try Again."<<endl;	
	jugador1(matriz);
}
}

//O player: For player vs Player type
void jugador2(char matriz[][3]){
	
	char region;
	cout<<"Player O move: "<<endl<<endl<<"Enter the space you wish to occupy: ";cin>>region;
	if(region=='1'&&matriz[0][0]!='X'&&matriz[0][0]!='O')
	matriz[0][0]='O';
	else if(region=='2'&&matriz[0][1]!='X'&&matriz[0][1]!='O')
	matriz[0][1]='O';
	else if(region=='3'&&matriz[0][2]!='X'&&matriz[0][2]!='O')
	matriz[0][2]='O';
	else if(region=='4'&&matriz[1][0]!='X'&&matriz[1][0]!='O')
	matriz[1][0]='O';
	else if(region=='5'&&matriz[1][1]!='X'&&matriz[1][1]!='O')
	matriz[1][1]='O';
	else if(region=='6'&&matriz[1][2]!='X'&&matriz[1][2]!='O')
	matriz[1][2]='O';
	else if(region=='7'&&matriz[2][0]!='X'&&matriz[2][0]!='O')
	matriz[2][0]='O';
	else if(region=='8'&&matriz[2][1]!='X'&&matriz[2][1]!='O')
	matriz[2][1]='O';
	else if(region=='9'&&matriz[2][2]!='X'&&matriz[2][2]!='O')
	matriz[2][2]='O';
	else{
	cout<<"Invalid Option!! Try Again."<<endl;	
	jugador2(matriz);
}
}

//Player function: For player vs AI type
void jugador(char matriz[][3]){
	
	int region;
	cout<<"Player move: "<<endl<<endl<<"Enter the space you wish to occupy: ";cin>>region;
	if(region==1&&matriz[0][0]!='X'&&matriz[0][0]!='O')
	matriz[0][0]='X';
	else if(region==2&&matriz[0][1]!='X'&&matriz[0][1]!='O')
	matriz[0][1]='X';
	else if(region==3&&matriz[0][2]!='X'&&matriz[0][2]!='O')
	matriz[0][2]='X';
	else if(region==4&&matriz[1][0]!='X'&&matriz[1][0]!='O')
	matriz[1][0]='X';
	else if(region==5&&matriz[1][1]!='X'&&matriz[1][1]!='O')
	matriz[1][1]='X';
	else if(region==6&&matriz[1][2]!='X'&&matriz[1][2]!='O')
	matriz[1][2]='X';
	else if(region==7&&matriz[2][0]!='X'&&matriz[2][0]!='O')
	matriz[2][0]='X';
	else if(region==8&&matriz[2][1]!='X'&&matriz[2][1]!='O')
	matriz[2][1]='X';
	else if(region==9&&matriz[2][2]!='X'&&matriz[2][2]!='O')
	matriz[2][2]='X';
	else{
	cout<<"Invalid Option!! Try again."<<endl;	
	jugador(matriz);
}
}

//AI function: For player vs AI
void computadora(char matriz[][3]){
	
	int region=0;
	srand(time(NULL));
	region=1+rand()%9;
	cout<<"AI move: "<<endl<<endl;
	if(region==1&&matriz[0][0]!='X'&&matriz[0][0]!='O')
	matriz[0][0]='O';
	else if(region==2&&matriz[0][1]!='X'&&matriz[0][1]!='O')
	matriz[0][1]='O';
	else if(region==3&&matriz[0][2]!='X'&&matriz[0][2]!='O')
	matriz[0][2]='O';
	else if(region==4&&matriz[1][0]!='X'&&matriz[1][0]!='O')
	matriz[1][0]='O';
	else if(region==5&&matriz[1][1]!='X'&&matriz[1][1]!='O')
	matriz[1][1]='O';
	else if(region==6&&matriz[1][2]!='X'&&matriz[1][2]!='O')
	matriz[1][2]='O';
	else if(region==7&&matriz[2][0]!='X'&&matriz[2][0]!='O')
	matriz[2][0]='O';
	else if(region==8&&matriz[2][1]!='X'&&matriz[2][1]!='O')
	matriz[2][1]='O';
	else if(region==9&&matriz[2][2]!='X'&&matriz[2][2]!='O')
	matriz[2][2]='O';
	else{
		int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		if(matriz[i][j]!='X'&&matriz[i][j]!='O')
			break;	
			}
		if(matriz[i][j]!='X'&&matriz[i][j]!='O')
			break;	
}
		matriz[i][j]='O';
}
}

//Menu function: prints the menu and takes de game type option
void menu(char& opcion){
	cout<<"\n\t\t!!WELCOM TO TIC TAC TOE!!"<<endl<<"\n1.	Player vs Player"<<endl<<"2.	Player vs AI (easy)"
		<<endl<<"Enter your option: ";cin>>opcion;
	
}

//Principal function 1: function to play player vs player game type
void player_vs_player(char matriz_juego[][3]){
	
	int empate=0,cambio_jugador=1;
	char fin=' ';
	
	llenar_matriz(matriz_juego);
	do{
	empate++;
	cout<<'\n';
	imprimir(matriz_juego);
	cout<<'\n';
	if(cambio_jugador%2!=0)
	jugador1(matriz_juego);
	else
	jugador2(matriz_juego);
	
	ganador(matriz_juego,fin);
	cambio_jugador++;
	
	if(fin==' '&&empate==9)
	fin='e';	
		
	}	while(fin==' ');
	if(fin=='X'){
	cout<<"\n\t\tPlayer X wins the Game!!! :-)"<<endl;
	imprimir(matriz_juego);
	}
	
else if(fin=='O'){
	cout<<"\n\t\tPlayer O wins the Game!!! :-)"<<endl;
	imprimir(matriz_juego);
	}
	
else if(fin=='e'){
	cout<<"\n\t\tTIEEE!! XD"<<endl;
	imprimir(matriz_juego);
	}
	
	
	
	
}

//Principal function 2: function to play player vs AI game type
void player_vs_computer(char matriz_juego[][3]){
	
	int empate=0,cambio_jugador=1;
	char fin=' ';
	
	llenar_matriz(matriz_juego);	
		do{
	empate++;
	cout<<'\n';
	imprimir(matriz_juego);
	cout<<'\n';
	if(cambio_jugador%2!=0)
	jugador(matriz_juego);
	else
	computadora(matriz_juego);
	
	ganador(matriz_juego,fin);
	cambio_jugador++;
	if(fin==' '&&empate==9)
	fin='e';	
		
	}	while(fin==' ');
	if(fin=='X'){
	cout<<"\n\t\tThe Player Wins!!! :-)"<<endl;
	imprimir(matriz_juego);
	}
	
else if(fin=='O'){
	cout<<"\n\t\tThe AI wins!!! :'("<<endl;
	imprimir(matriz_juego);
	}
	
else if(fin=='e'){
	cout<<"\n\t\tTIEEE!! XD"<<endl;
	imprimir(matriz_juego);
	}
	
}
