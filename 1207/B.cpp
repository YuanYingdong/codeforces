// BZOJ.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
using namespace std;
const int maxn = 60;
int arr[maxn][maxn];
int ok[maxn][maxn];
inline int check(int x, int y)
{
	return (arr[x][y] == 1 && arr[x][y + 1] == 1&&arr[x + 1][y] == 1&&arr[x + 1][y + 1] == 1);
}
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			ok[i][j] = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
			scanf("%d", &arr[i][j]);
	}
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			if (arr[i][j] == 1)
				ok[i][j] = 0;
	vector<pair<int, int> > vp;
	for (int i = 1; i < n; i++)
	{
		for (int j = 1; j < m; j++)
		{
			if (arr[i][j] == 1)
			{
				if (check(i, j))
				{
					ok[i][j] = ok[i + 1][j] = ok[i][j + 1] = ok[i + 1][j + 1] = 1;
					vp.push_back(make_pair(i, j));
				}
			}

		}
	}
	int ans = 1;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			if (ok[i][j] == 0)
				ans = 0;
	if (ans == 0)
		puts("-1");
	else
	{
		printf("%d\n", vp.size());
		for (const auto kk : vp)
			printf("%d %d\n", kk.first, kk.second);
	}
	return 0;
}
/*
5
1000000000 1000000000 1000000000 1000000000 1000000000

*/