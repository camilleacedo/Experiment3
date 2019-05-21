#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int provinceA[7];
	int provinceB[7];
	int provinceC[7];
	
	cout<<"Enter all temperatures for a week of Province A, Province B and Province C.\n"<<endl;
	
	for(int i=0;i<7;i++)
	{
		cout<<"Province A, Day "<<i+1<<": ";
		cin>>provinceA[i];
	}
	
	for(int i=0;i<7;i++)
	{
		cout<<"Province B, Day "<<i+1<<": ";
		cin>>provinceB[i];
	}
	
	for(int i=0;i<7;i++)
	{
		cout<<"Province C, Day "<<i+1<<": ";
		cin>>provinceC[i];
	}
	
	
	cout<<"\n\nDisplaying Values: "<<endl;
	for(int i=0;i<7;i++)
	{
		cout<<"Province A, Day "<<i+1<<" = "<<provinceA[i]<<endl;
	}
	
	for(int i=0;i<7;i++)
	{
		cout<<"Province B, Day "<<i+1<<" = "<<provinceB[i]<<endl;
	}
	
	for(int i=0;i<7;i++)
	{
		cout<<"Province C, Day "<<i+1<<" = "<<provinceC[i]<<endl;
	}
	-getch();
	return 0;	
}
