// Devesh calculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
#include "conio.h"
using namespace std;


		
class devcal
{
public:
	
	int a,c,d;
	char b;
	void calb()

	{
			
			
		
		cout<<"-----------------------------------------------\n\tWelcome to Devesh calculator\n\tversion 1.1 9/7/2011\n-----------------------------------------------\n";
		cin>>a;	
		cin>>b;
		cin>>c;
		if(b=='+')d=a+c;
		else if(b=='-')d=a-c;	
		else if(b=='*')d=a*c;
		else if(b=='/')d=a/c;
		
		cout<<"--------\n"<<d<<"\n";
         ag:
		 c=0;
		 cin>>b;
		cin>>c;
        if(b=='+')d=c+d;
		else if(b=='-')d=d-c;
		else if(b=='*')d=d*c;
		else if(b=='/')d=d/c;
		
		
		cout<<"--------\n"<<d<<"\n";
		
	goto ag;
	
	}
	};
int main()
{
	devcal c;
	c.calb();
	return 0;
}

