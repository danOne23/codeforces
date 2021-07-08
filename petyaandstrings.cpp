#include <bits/stdc++.h>
using namespace std;

int main()
{

	vector<string> s;
	vector<int> sum{0, 0};
	int n;

	for (int i = 0; i < 2; i++)
	{
		string str;
		cin >> str;
		sort(str.begin(), str.end());
		n = str.length();

		for (int k = 0; k < str.length(); k++)
		{
			for (int l = 0; l < n; l++)
			{
				for (int j = i + 1; j < n; j++)
				{
					if (str[i] > str[j])
					{
						int temp = str[i];
						str[i] = str[j];
						str[j] = temp;
					}
				}
			}
		}

		s.push_back(str);
	}

	n = s[0].length();
	map<char, int> values = {
		{'a', 1},
		{'b', 2},
		{'c', 3},
		{'d', 4},
		{'e', 5},
		{'f', 6},
		{'g', 7},
		{'h', 8},
		{'j', 9},
		{'j', 10},
		{'k', 11},
		{'l', 12},
		{'m', 13},
		{'n', 14},
		{'o', 15},
		{'p', 16},
		{'q', 17},
		{'r', 18},
		{'s', 19},
		{'t', 20},
		{'u', 21},
		{'v', 22},
		{'w', 23},
		{'x', 24},
		{'y', 25},
		{'z', 26}};

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum[i] += values[tolower(s[i][j])];
		}
	}

	if (sum[0] > sum[1])
		cout << 1 << endl;
	else if (sum[0] < sum[1])
		cout << -1 << endl;
	else
		cout << 0 << endl;
}