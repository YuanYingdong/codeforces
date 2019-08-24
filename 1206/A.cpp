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
using namespace std;
const int maxn = 60;
int arr[maxn][maxn];
int aa[maxn], bb[maxn];
int main()
{
	int n, m;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &aa[i]);
	sort(aa, aa + n);
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
		scanf("%d", &bb[i]);
	sort(bb, bb + m);
	printf("%d %d\n", aa[n - 1], bb[m - 1]);
}
/*
5
1000000000 1000000000 1000000000 1000000000 1000000000

*/