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
const int maxn = 200;
int arr[maxn];
int main()
{
	int odd = 0, even = 0, n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] % 2)
		{
			odd++;
		}
		else
			even++;
	}
	printf("%d\n", min(odd, even));
	return 0;
}
/*
100
14 1 1
01010101001110
*/
