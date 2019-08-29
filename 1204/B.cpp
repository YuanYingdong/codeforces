#include <iostream>
#include <set>
#include <algorithm>
 
using namespace std;
 
 
int main()
{
	int n, l, r;
	scanf("%d%d%d", &n, &l, &r);
	long long smin = 0, smax = 0, bas=1;
	for (int i = 1; i <= l; i++)
	{
		smin += bas;
		bas <<= 1;
	}
	
 
	smax = smin;
	smin += n - l;
	for (int i = l + 1; i <= r; i++)
	{
		smax += bas;
		bas <<= 1;
	}
	bas /= 2;
	smax += (n - r)*bas;
	printf("%I64d %I64d\n", smin, smax);
	return 0;
 
}