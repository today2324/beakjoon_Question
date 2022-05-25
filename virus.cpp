#include<iostream>
using namespace std;
#define NUMBER 1
#define INFECTION 0

int network[10000][2];
int computer[100][2];
int visited[100] = { false, };
int Count=0;
void search(int n, int testcase)
{
	if (computer[n][INFECTION] == false && visited[computer[n][NUMBER]] == false)
	{
		computer[n][INFECTION] = true;
		visited[computer[n][NUMBER]] = true;
		Count++;
		for (size_t i = 0; i < testcase; i++)
		{
			if (network[i][0] == computer[n][NUMBER])
			{
				search(network[i][1], testcase);
			}
			else if (network[i][1] == computer[n][NUMBER])
			{
				search(network[i][0], testcase);
			}
		}
	}
	else
	{
		for (size_t i = 0; i < testcase; i++)
		{
			if (network[i][0] == computer[n][NUMBER])
			{
				if (visited[network[i][1]] == true) { continue; }
				search(network[i][1], testcase);
			}
		}
	}
}

int main()
{
	int computerNum;
	int testcase;

	cin >> computerNum;
	cin >> testcase;

	for (size_t i = 0; i < computerNum; i++)
	{
		computer[i][NUMBER] = i;
		computer[i][INFECTION] = false;
	}

	for (int i = 0; i < testcase; i++)
	{
		cin >> network[i][0] >> network[i][1];
		network[i][0]--;
		network[i][1]--;
	}

	search(0, testcase);
	cout << Count-1 << endl;
}
