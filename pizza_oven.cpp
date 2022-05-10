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
Oventime Time;
bool needs = true;
int calc(int time)
{
	while (time >= 10)
	{
		time -= 10;
		Time.Addten++;
	}

	for (Time.Addten++; (time % 10) > 5; time++)
	{
		Time.Minone++;
		needs = false;
	}
	if (needs)
	{
		Time.Addten--;
	}

	while (0 < (time % 10) && (time % 10) < 6)
	{
		Time.Addone++;
		time--;
	}


	return time;
}

int main()
{
	int testcase;
	int temp;
	int timeTemp;
	cin >> testcase;
	vector<int> setTime;

	for (size_t i = 0; i < testcase; i++)
	{
		cin >> temp;
		setTime.push_back(temp);
	}

	for (size_t i = 0; i < testcase; i++)
	{
		while (60 <= setTime[i])
		{
			setTime[i] -= HOUR;
			Time.Addhour++;
		}

		if (35 < setTime[i])
		{
			Time.Addhour++;
			timeTemp = calc(HOUR - setTime[i]);
			Time.Minten = Time.Addten;
			Time.Addten = 0;
			if (needs)
			{
				Time.Minone = Time.Addone;
				Time.Addone = 0;
			}
			else
			{
				Time.Addone = Time.Minone;
				Time.Minone = 0;
			}
		}
		else
		{
			if (setTime[i])
			{
				calc(setTime[i]);
			}
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
		needs = true;
	}
}
