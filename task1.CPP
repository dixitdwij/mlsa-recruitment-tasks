//Determining whether one can reach campus
#include<iostream.h>	//Declarations
#include<conio.h>
void main()
{
	int x, y, z, r;		//Variable declaration
	clrscr();
	cout<<"Please enter the interval(in km) at which gas stations are located, distance travelled, max.distance car can travel in km in the same order.\n";
	cin>>x>>y>>z;		//Data collection ends
	r=y%x;            	//Data processing and output phase
	if(r==0)
	{
		cout<<"\nYES";
	}
	else
	{
		if(r+z<x)
		cout<<"\nNO";
		else
		cout<<"\nYES";
	} 					//Output delivered
	getch();
}


