#include<iostream>
#include<vector>
using namespace std;

#define HOUR 60
#define UBD 170000
void freespace()
{

}
typedef struct Oventime {
	int Addhour = 0;
	int Addten = 0;
	int Minten = 0;
	int Addone = 0;
	int Minone = 0;
}Oventime;

Oventime Time;
int calc(int time)
{
	while (10 < time)
	{
		time -= 10;
		Time.Addten++;
	}

	while (5 < (time % 10))
	{
		Time.Addten++;
		Time.Minone++;
		time++;
	}

	while (0 < (time % 10) || (time % 10) < 6)
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
		while (60 < setTime[i])
		{
			setTime[i] -= HOUR;
			Time.Addhour++;
		}

		if (35 < setTime[i])
		{
			Time.Addhour++;
			timeTemp = HOUR - setTime[i];
			
			calc(timeTemp);
		}
		calc(setTime[i]);

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
