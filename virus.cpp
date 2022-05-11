#include<iostream>
#include<vector>
#define INFECTION 1
#define UNINFECTION 0
using namespace std;

int computerNum;
int computer[100];
int network[2];
bool visited[100] = { false, };

int virus_search(int i)
{
	if (computer[i] != INFECTION && visited[i] == false)
	{
		computer[i] = INFECTION;
		visited[i] = true;
		if (network[i] == computer[i])
		{
			virus_search(computer[network[1]]);
		}
	} 
	else
	{
		if (network[i] == computer[i])
		{
			virus_search(computer[network[1]]);
		}
	}
}

int main()
{
	int temp;
	int virus;
	int testcase;

	cin >> computerNum;
	cin >> testcase;

	for (size_t i = 0; i < computerNum; i++)
	{
		computer[i] = i;
	}

	for (size_t i = 0; i < testcase; i++)
	{
		for (size_t j = 0; j < 2; j++)
		{
			cin >> network[j];
		}
	}

	visited[0] = true;
	virus_search(computer[0]);
	

}