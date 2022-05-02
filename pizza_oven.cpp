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
	int TimeMinusN;
	int testcase;
	int temp;
	cin >> testcase;

	for (size_t i = 0; i < testcase; i++)
	{
		cin >> temp;
		setTimeN.push_back(temp);
	}

	//for (size_t i = 0; i < testcase; i++)
	//{
	//	cout << setTimeN[i] << endl;
	//
	//}
	//cout << endl;

	for (size_t i = 0; i < testcase; i++)
	{
		if (HOUR < setTimeN[i])
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
			cout << "setTimeN[i]" << setTimeN[i] << endl;
			TimeMinusN = HOUR - setTimeN[i];

			if (5 < TimeMinusN)
			{
				ovenTime.MinTen++;
				TimeMinusN -= TEN;
			}

			while (ovenTime.MinOne == TimeMinusN)
			{
				ovenTime.MinOne++;
			}
			
			if (!TimeMinusN)
			{
				setTimeN[i] = 0;
			}
		}

		if (5 < setTimeN[i] && setTimeN[i] < 36)
		{
			cout << "setTimeN[i] = " << setTimeN[i] << endl;
			for (size_t j = 0; TEN < setTimeN[i]; j++)
			{
				ovenTime.AddTen++;
				setTimeN[i] -= TEN;
			}

			if (5 < setTimeN[i] && setTimeN[i] <= TEN)
			{
				ovenTime.AddTen++;

				while (ovenTime.MinOne != (TEN - setTimeN[i]))
				{
					ovenTime.MinOne++;
				}
				setTimeN[i] = 0;
			}
		}

		while (setTimeN[i])
		{
			ovenTime.AddOne++;
			setTimeN[i]--;
		}

		cout << ovenTime.AddHour << " ";
		cout << ovenTime.AddTen << " ";
		cout << ovenTime.MinTen << " ";
		cout << ovenTime.AddOne << " ";
		cout << ovenTime.MinOne << endl;

		ovenTime.AddHour = 0;
		ovenTime.AddTen = 0;
		ovenTime.MinTen = 0;
		ovenTime.AddOne = 0;
		ovenTime.MinOne = 0;
	}


}

