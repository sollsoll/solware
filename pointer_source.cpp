#include "pointer_head.h"


void enterarray(int**,int r,int c);
void printarray(int** n, int r, int c);
void writearray();
int main()
{
	int r, c;
	int** p;
	/*
	cout << "Enter number of row "<< endl;
	cin >> r;
	cout << "Enter number of number " << endl;
	cin >> c;


	p = new int*[r];

	for (int i = 0; i < r; i++)
	{

		p[i] = new int[c];
	}

	enterarray(p, r, c);
	cout << endl;
	printarray(p, r, c);
	
	for (int i = 0; i < r; i++)
	{

		delete	p[i];
	}

	

		delete [] p;
	*/
	writearray();


	return 0;
}
void enterarray(int** n,int r,int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << "Enter number of row= " << i+1 << "and col=" << j+1 << endl;
			cin >> n[i][j];
		}

		
	}


}
void printarray(int** n, int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << n[i][j];
			
		}
		cout << endl;

	}


}
void writearray()
{
	
}
