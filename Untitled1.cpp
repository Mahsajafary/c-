#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num1,num2,sum,sub,mul;
	float div;
	cout<<"Enter num1  :"<<endl;
	cin>>num1;
	cout<<"Enter num2   "<<endl;
	cin>>num2;
	sum = num1 + num2 ;
	sub = num1 - num2 ;
	mul = num1 * num2 ;
	cout<<"sum is   :"<<sum<<endl;
	cout<<"sub is    :"<<sub<<endl;
	cout<<"mul  is    :"<<mul<<endl;
	
	if(num2!=0)
	{
		div =(float)num1/num2;
		cout<<"div is   :"<<div<<endl;
		
	}
	else
	{
		cout<<"erorr...."<<endl;
	}

	
	
	getch();
	return 0;
}