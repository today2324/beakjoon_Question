#include<iostream>
#define COUNTRYNUM 4
using namespace std;

typedef struct GroupStage {
	string country;
	double AWin[3] = { 0, };
	double ALose;
	double ADraw;
	int addvancePercent;
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

void sub(string team, int AWin, int ADraw, int ALose)
{
	for (size_t j = 0; j < COUNTRYNUM; j++)
	{
		if (team == match[j].country)
		{
			if (!match[j].AWin)
			{
				match[j].AWin[j] = AWin;
			}
			match[j].ADraw = ADraw;
			match[j].ALose = ALose;
		}
	}
}

int main()
{
	string Ateam;
	string Bteam;
	double AWin;
	double ALose;
	double ADraw;
	for (size_t i = 0; i < COUNTRYNUM; i++)
	{
		cin >> match[i].country[i];
	}

	for (size_t i = 0; i < factorial(COUNTRYNUM - 1); i++)
	{
		cin >> Ateam >> Bteam >> AWin >> ADraw >> ALose;
	
		sub(Ateam, AWin, ADraw, ALose);
		sub(Bteam, AWin, ADraw, ALose);
	}

	

	for (size_t i = 0; i < COUNTRYNUM; i++)
	{
		cout << match[i].addvancePercent << endl;
	}

}

