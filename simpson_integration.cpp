#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<cmath>
using namespace std;
int main(){
	char restart='f';
	float ecuacion(float,float&);
	float simpson(float,float,float&);
	do{
	int n=0,m=0;
	float dx=0.0,a=0.0,b=0.0,sum=0.0,result=0.0,c=0.0;
	cout<<"Welcome to Numeric Integration by Simpson"<<endl<<"(Remember to enter the formula in the function ecuacion)"<<endl;
	cout<<"Enter the integration limits: "<<endl<<"Starts: ";cin>>a;
	cout<<"\nEnds: ";cin>>b;
	cout<<"\nEnter the number of panels to use<<"<<endl<<"(best result with 32): ";cin>>n;
	dx=(b-a)/n;
	if(n%2!=0||n==0){
	cout<<"\nInvalid Panel Option (impair or 0 value not accepted)."<<endl;
}
	else{
	//Enter Function: 
	cout<<"\nIntegration Data:"<<endl;
	for(float i=a;i<=b+0.000001;i+=dx){
		ecuacion(i,c);
		cout<<"\nX = "<<fixed<<setprecision(3)<<setw(4)<<i<<"\t\tY = "<<setw(4)<<setprecision(5)<<c;
		if((i<=a+0.000001&&i>=a-0.000001)||(i<=b+0.000001&&i>=b-0.000001))
		sum=sum+c;
		else if(m%2!=0)
			sum=sum+4.0*c;
			else
			sum=sum+2.0*c;
			m++;
		}
		simpson(sum,dx,result);
		cout<<"\nThe Integration is: "<<result<<endl;
	}
	

while(1){
	cout<<"Run the program again?(Y/N): ";cin>>restart;
if(restart!='N'&&restart!='n'&&restart!='Y'&&restart!='y'){
cout<<"\nInvalid Option! Try again."<<endl;
restart='f';
}
else
break;
}
}while(restart=='y'||restart=='Y'||restart=='f');
	cout<<"\n\n\tThank you for using the program!!"<<endl;
	return 0;
}

float ecuacion(float x,float& result){//Equation entering:
	result=sin(x);
}

float simpson(float a,float b, float& c){
	
	c=b/3.0*a;
}
