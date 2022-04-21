#include<iostream>
#include<vector>

#define HOUR 60
#define TEN 10
#define MINUTE 1
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
			for (size_t j = 0; HOUR <= setTimeN[i]; j++)
			{
				ovenTime.AddHour++;
				setTimeN[i] -= HOUR;
			}
		}
		if (35 < setTimeN[i])
		{
			ovenTime.AddHour++;
			if (setTimeN[i])
			{
				ovenTime.MinTen;
				setTimeN[i] =- TEN;
			}
		}
		if (5 < setTimeN[i] < 36)
		{
			for (size_t j = 0; TEN < setTimeN[i]; j++)
			{
				ovenTime.AddTen++;
				setTimeN[i] -= TEN;
			}
			if (5 < setTimeN[i] <= TEN)
			{
				ovenTime.AddTen++;
				setTimeN[i] += TEN;
			}
			while (setTimeN[i])
			{
				ovenTime.MinOne++;
				setTimeN[i]--;
			}
		}
		if (setTimeN[i])
		{
			cout << ovenTime.AddHour << " ";
			cout << ovenTime.AddTen << " ";
			cout << ovenTime.MinTen << " ";
			cout << ovenTime.AddOne << " ";
			cout << ovenTime.MinOne << endl;
		}
	}
}
