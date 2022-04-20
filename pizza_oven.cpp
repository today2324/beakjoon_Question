#include<iostream>
#include<vector>

#define HOUR 60
#define TEN 10
#define ONE 1
using namespace std;

typedef struct Oventime {
	int AddHour = 0;
	int AddTen = 0;
	int MinTen = 0;
	int AddOne = 0;
	int MinOne = 0;
}Oventime;

int main()
{
	Oventime ovenTime;
	vector<int> setTimeN;
	int testcase;
	int temp;
	cin >> testcase;
	for (size_t i = 0; i < testcase; i++)
	{
		cin >> temp;
		setTimeN.push_back(temp);
	}

	for (size_t i = 0; i < testcase; i++)
	{	
		if (setTimeN[i] > HOUR)
		{
			for (size_t i = 0; i < setTimeN[i]; i++)
			{
				ovenTime.AddHour++;
			}
			if (setTimeN[i] - (HOUR * ovenTime.AddHour))
			{
				
			}
		}
		else if (5 < setTimeN[i] < 40)
		{
			ovenTime.AddTen++;
		}
		if (setTimeN[i] < 10)
		{
			for (size_t i = 0; i < (10 - setTimeN[i]); i++)
			{
				ovenTime.MinOne++;
			}
		}
	}
}
