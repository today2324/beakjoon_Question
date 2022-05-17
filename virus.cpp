#include<iostream>
#include<vector>
#define INFECTION 1
#define UNINFECTION 0
using namespace std;

int computerNum;
int computer[100];
int network[100][2];
bool visited[100] = { false, };
int temp;
int Count = 0;
void virus_search(int i)
{
	if (computer[i] != INFECTION && visited[i] == false)
	{
		computer[i] = INFECTION;
		visited[i] = true;
		Count++;
		for (int k = i; k < i; i++)
		{
			if (network[i][0] == computer[i])
			{
				virus_search(network[i][1]);
			}
		}
		
	}
	else
	{
		if (network[i][0] == computer[i])
		{
			virus_search(network[i][1]);
		}
	}
}

int main()
{
	int temp;
	int testcase;

	cin >> computerNum;
	cin >> testcase;

	for (size_t i = 0; i < computerNum; i++)
	{
		computer[i] = i;
	}

	for (size_t i = 0; i < testcase; i++)
	{
		cin >> network[i][0] >> network[i][1];
	}

	virus_search(computer[0]);

	cout << Count << endl;
}
