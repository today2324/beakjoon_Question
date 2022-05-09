#include<iostream>
#include<vector>
using namespace std;

#define HOUR 60

typedef struct Oventime {
	int Addhour = 0;
	int Addten = 0;
	int Minten = 0;
	int Addone = 0;
	int Minone = 0;
}Oventime;

int main()
{
	int testcase;
	int temp;
	int timeTemp;
	cin >> testcase;
	vector<int> setTime;
	Oventime Time;

	for (size_t i = 0; i < testcase; i++)
	{
		cin >> temp;
		setTime.push_back(temp);
	}

	for (size_t i = 0; i < testcase; i++)
	{

		while (60 < setTime[i])
		{
			Time.Addhour++;
			setTime[i] -= HOUR;
		}

		if (35 < setTime[i])
		{		
			Time.Addhour++;
			timeTemp = setTime[i];
			if (setTime[i] < 56)
			{
				while (setTime[i] > 10)
				{
					setTime[i] -= 10;
					Time.Addten++;
				}
			}

			while (5 < (timeTemp % 10))
			{
				timeTemp++;
				Time.Minone++;
			}
		}
		else
		{

		}

		cout << Time.Addhour << " ";
		cout << Time.Addten << " ";
		cout << Time.Minten << " ";
		cout << Time.Addone << " ";
		cout << Time.Minone << endl;

		Time.Addhour = 0;
		Time.Addten = 0;
		Time.Minten = 0;
		Time.Addone = 0;
		Time.Minone = 0;
	}
}
