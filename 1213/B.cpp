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
const int maxn = 150100;
int arr[maxn];
int main()
{
	int t, n;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		int ans = 0;
		for (int i = 1; i <= n; i++)
			scanf("%d", &arr[i]);
		int cur_min=0x3f3f3f3f;
		for (int i = n - 1; i >= 1; i--)
		{
			cur_min = min(cur_min, arr[i + 1]);
			if (cur_min < arr[i])
				ans++;
		}
		printf("%d\n", ans);
	}
	return 0;
}