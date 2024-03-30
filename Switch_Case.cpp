#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	int c=0;
	int op;
	
	cout<<"**** CALCULATOR ***";

	
	cout<<"1 = ADDITOIN \n";
	cout<<"2 = SUBTRACTION \n";
	cout<<"3 = MULTIPLICATION \n";
	cout<<"4 = DIVIDION \n";
	
	cout<<" \n Select the Opetarion : ";
	cin>>op;
	cout<<"\n Enter the 1 no :";
	cin>>a;
	cout<<"\n Enter the 2 no :";
	cin>>b;

	
	switch(op)
    {
		  case 1:
		  	c=a+b;
		  	cout<<"\nAddition : "<<c;
		  	break;
		  	
		  	case 2:
		  	c=a-b;
		  	cout<<"\nSubtraction :"<<c;
		  	break;
		  	
		  	case 3:
		  	c=a*b;
		  	cout<<"\n Multiplication :"<<c;
		  	break;
		  	
		  	case 4:
		  	c=a/b;
		  	cout<<"\n Division :"<<c;
		  	break;
	}	
	


	
}
