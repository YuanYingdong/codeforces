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
const int maxn = 100010;
int arr[maxn];
int main()
{
	int n, neg = 0, zro=0;
	long long sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] == 0)
			zro++;
		else if (arr[i] < 0)
			neg++;
		sum += abs(arr[i] - 1);
	}
	sum -= (neg / 2)*4;
	if (neg % 2 && zro)
		sum -= 2;
	printf("%I64d\n", sum);
	
}
/*
5
1000000000 1000000000 1000000000 1000000000 1000000000

*/