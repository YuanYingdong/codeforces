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
int main()
{
	int t, b, p, f ,h, c;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d%d%d%d%d", &b, &p, &f, &h, &c);
		b /= 2;
		if (b < 1)
		{
			printf("0\n");
			continue;
		}
		if (h < c)
			swap(h, c), swap(p, f);
		if (p >= b)
			printf("%d\n", b*h);
		else
			printf("%d\n", p*h + min(b - p, f)*c);
	}
	return 0;
}
/*
5
1000000000 1000000000 1000000000 1000000000 1000000000

*/