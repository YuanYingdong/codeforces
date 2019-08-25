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
char arr[maxn];
int main()
{
	int n, t, a, b;
	long long ans;

	scanf("%d", &t);
	while (t--)
	{
		ans = 0;
		scanf("%d%d%d", &n, &a, &b);
		scanf("%s", arr);
		int lst=-1;
		ans = (long long)n * a+((long long)n+1)*b;
		for (int i = 0; i < n; )
		{
			int j = i, cnt=0; 
			while (j<n&&(arr[j] == '1'||(j>1&&arr[j]=='0'&&arr[j-1]=='1'&&arr[j+1]=='1')))
				cnt++, j++;	
			if (cnt)
				i = j, ans += ((long long )cnt + 1) * b;
			else
				i++;
		}
		for (int i = 0; i < n; i++)
		{
			if (arr[i] == '1')
			{
				if (lst == -1)
					ans += a;
				else
				{
					long long tmp = i - lst - 1;
					if (tmp >= 2)
					{
						ans += min((tmp - 1)*b, (long long)a * 2);
					}
				}
				lst = i;

			}

		}
		if(lst!=-1)
			ans += a;
		printf("%I64d\n", ans);

	}
}
/*
100
14 1 1
01010101001110
*/
