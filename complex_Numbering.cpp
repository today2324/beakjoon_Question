#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int aroundX[4] = { 1, 0, -1, 0 };
int aroundY[4] = { 0, 1, 0, -1 };
bool isVisit[25][25];
int apartment[25][25];
int N, apartmentNum;
vector<int> complexNum;

void search(int x, int y)
{
	for (int i = 0; i < 4; i++)
	{
		int sx = x + aroundX[i];
		int sy = y + aroundY[i];

		if (sx > N - 1 || sx < 0 || sy > N - 1 || sy < 0) { continue; }

		if (apartment[sx][sy] == 1)
		{
			if (isVisit[sx][sy] == false)
			{
				isVisit[sx][sy] = true;
				apartmentNum++;
				search(sx, sy);
			}

			if (i != 3)
			{
				continue;
			}

			search(sx, sy);
		}
	}
}

int main()
{
	int res = 0;
	string complex;
	string temp;
	cin >> N;

	if (5 > N || N > 25)
	{
		return 0;
	}

	for (int i = 0; i < N; i++)
	{
		cin >> complex;
		while (complex.size() < N)
		{
			temp = complex;
			cin >> complex;
			temp += complex;
			complex = temp;
		}
		for (int j = 0; j < N; j++)
		{
			temp = complex.substr(j, 1);
			apartment[i][j] = stoi(temp);
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (apartment[i][j] == 1 && isVisit[i][j] == false)
			{
				isVisit[i][j] = true;
				apartmentNum = 1;
				search(i, j);
				complexNum.push_back(apartmentNum);
				res++;
			}
		}
	}

	cout << res << endl;

	sort(complexNum.begin(), complexNum.end());

	for (int i = 0; i < complexNum.size(); i++)
	{
		cout << complexNum[i] << endl;
	}

	return 0;
}
