#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

int main(){
	int num, random, intentos=0;
	
	srand(time(NULL));
	random=1+ rand() % (100-1);
	
	do{
		cout<<"\n\tDigite un numero entre 1 y 100: ";cin>>num;
		
		if(num>random)
		cout<<"\nDigite un numero menor."<<endl;
		
		if(num<random)
		cout<<"\nDigite un numero mayor."<<endl;
		
		intentos++;
	}while(num!=random);
	
	cout<<"\n\t\tADIVINOOO!!!"<<endl<<"Numero de intentos: "<<intentos<<endl;
	
	return 0;
}
