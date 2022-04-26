#include<iostream>
#include<algorithm>
#define COUNTRYNUM 4
using namespace std;

typedef struct country {
	string CountryName;
	double AWin;
	double ADraw;
	double ALose;
}country;

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
	country Country[4];
	string teamA;
	string teamB;

	for (size_t i = 0; i < COUNTRYNUM; i++)
	{
		cin >> Country[i].CountryName;
	}

	for (size_t i = 0; i < factorial(COUNTRYNUM - 1); i++)
	{
		cin >> teamA >> teamB;
		while (Country[i].CountryName != teamA)
		{
			if (Country[i].CountryName == teamA)
			{
				cin >> Country[i].AWin >> Country[i].ADraw >> Country[i].ALose;

				if ((Country[i].AWin + Country[i].ADraw + Country[i].ALose) > 1)
				{
					return 0;
				}

			}
			i++;
		}
	}

}
