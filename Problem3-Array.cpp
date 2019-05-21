#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	char array[30];
	char temp[30];
	int size;
	
	cout<<"Enter array size : ";
	cin>>size;
	
	cout<<"Enter word: ";
	cin>>array;
	
	cout<<"\nReversed order: ";	
	for (int i = size; i > -1; i--)
	{
		char temp = array[i];
		array[i] = temp;
		cout<<array[i];
	}
	
	cout<<"\nThe size of the array is: "<<size;
	
	-getch();
	return 0;
}

