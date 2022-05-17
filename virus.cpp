#include<iostream>
#include<vector>
#define INFECTION 1
#define UNINFECTION 0
using namespace std;

int computerNum;
int computer[100][2];
int network[100][2];
bool visited[100] = { false, };
int temp;
int Count = 0;
void virus_search(int i)
{
	if (computer[i][0] != INFECTION && visited[i] == false)
	{
		computer[i][0] = INFECTION;
		Count++;
		for (size_t j = 0; j < computerNum; j++)
		{
			if (network[j][0] == computer[i][1])
			{
				virus_search(network[i][1]);
			}
			if (network[j][1] == computer[i][1])
			{
				virus_search(network[j][0]);
			}
		}
	}
	visited[i] = true;
	
}

int main()
{
	int temp;
	int testcase;
	cin >> computerNum;
	cin >> testcase;
	for (size_t i = 0; i < computerNum; i++)
	{
		computer[i][1] = i + 1;
	}

	for (size_t i = 0; i < testcase; i++)
	{
		cin >> network[i][0] >> network[i][1];
	}
	virus_search(0);
	cout << Count << endl;
}
