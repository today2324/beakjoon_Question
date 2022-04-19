#include<iostream>
using namespace std;

typedef struct country {
	string CountryName;
	double AWin;
	double ADraw;
	double ALose;
}country;

int main()
{
	country Country[4];
	int testcase;
	string teamA;
	string teamB;

	cin >> testcase;

	for (size_t i = 0; i < testcase; i++)
	{
		cin >> Country[i].CountryName;
	}

	for (size_t i = 0; i < 6; i++)
	{
		cin >> teamA >> teamB;
		while(Country[i].CountryName != teamA)
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

	cout << 

}
