#include<iostream>
#include<vector>
using namespace std;

typedef struct Oventime {
	int AddHour;
	int AddTen;
	int MinTen;
	int AddOne;
	int MinOne;
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
		if (setTimeN[i] > 60)
		{
			for (size_t i = 0; i < setTimeN[i]; i++)
			{
				ovenTime.AddHour++;
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
		else if (setTimeN[i] > 10)
		{

		}
	}

}