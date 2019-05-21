#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	int array[10]; 
	int smallest, largest, total=0, average;
	
	
	for(int i=0;i<10;i++)
	{
		cout<<"Enter number "<<i+1<<": ";
		cin>>array[i];
		total+=array[i];			
	}
	
	largest= array[0];
	for(int i=0;i<10;i++)
	{
		if(array[i]>largest)
			largest= array[i];
	}
	
	smallest= array[0];
	for(int i=0;i<10;i++)
	{
		if(array[i]<smallest)
			smallest= array[i];
	}
	
	cout<<"\nSmallest number: "<<smallest<<endl;
	cout<<"Largest number: "<<largest<<endl;
	cout<<"Total of the numbers: "<<total<<endl;
	cout<<"Average of the numbers: "<<total/10<<endl;
	
	-getch();
	return 0;
}
