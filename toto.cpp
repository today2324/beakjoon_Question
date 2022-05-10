#include<iostream>

#define COUNTRYNUM 4
using namespace std;

int factorial(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return n * factorial(n - 1);
}

int main()
{
	int country[4];
	int Ateam;
	int Bteam;
	double AWin;
	double ALose;
	double ADraw;

	for (size_t i = 0; i < COUNTRYNUM; i++)
	{
		cin >> country[i];
	}

	for (size_t i = 0; i < factorial(COUNTRYNUM); i++)
	{
		cin >> Ateam >> Bteam >> AWin >> ADraw >> ALose;
	
		if ()
		{
			
		}
	}


	for (size_t i = 0; i < COUNTRYNUM; i++)
	{
		cout << endl;
	}

}

