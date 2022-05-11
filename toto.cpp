#include<iostream>

#define COUNTRYNUM 4
using namespace std;

typedef struct GroupStage {
	string Ateam;
	string Bteam;
	double AWin;
	double ALose;
	double ADraw;
}GroupStage;

GroupStage match[COUNTRYNUM];

int factorial(int n)
{
	if (n == 1)
	{
		return 1;
	}

	return n + factorial(n - 1);
}

int main()
{
	string country[4];
	for (size_t i = 0; i < COUNTRYNUM; i++)
	{
		cin >> country[i];
	}

	for (size_t i = 0; i < factorial(COUNTRYNUM-1); i++)
	{
		cin >> match[i].Ateam >> match[i].Bteam >> match[i].AWin >> match[i].ADraw >> match[i].ALose;
		
		for (size_t j = 0; j < COUNTRYNUM; j++)
		{
			if (match[j].Ateam == country[i])
			{

			}
		}
		
	}


	for (size_t i = 0; i < COUNTRYNUM; i++)
	{
		cout << endl;
	}

}

