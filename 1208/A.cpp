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
const int maxn = 200100;
int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int a, b, n, arr[3];
		scanf("%d%d%d", &a, &b, &n);
		arr[0] = a, arr[1] = b, arr[2] = a ^ b;
		printf("%d\n", arr[n % 3]);
	}
	return 0;
}
/*
100
14 1 1
01010101001110
*/
