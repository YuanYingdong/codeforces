#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
const int maxn = 300100;
const int mod = 998244353;
uint64_t acc[maxn];
void init()
{
	acc[0] = acc[1] = 1;
	for (int i = 2; i < maxn; i++)
		acc[i] = acc[i - 1] * i%mod;
	
}
int arr1[maxn], arr2[maxn];
template<typename T> vector<int> getsame(T val, int n)
{
	vector<int> ret;
	for (int i = 0; i < n; )
	{
		int cnt = 0, j = i;
		while (j < n&&val[j] == val[i])
			j++, cnt++;
		if (cnt)
			ret.push_back(cnt), i = j;
		else
			i++;
	}
	return ret;
}
int main()
{
	init();
	int n, ta, tb; 
	scanf("%d", &n);
	vector<pair<int, int> > vpii;
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d", &ta, &tb);
		arr1[i] = ta, arr2[i] = tb;
		vpii.push_back(make_pair(ta, tb));
	}
	sort(arr1, arr1 + n);
	sort(arr2, arr2 + n);
	sort(vpii.begin(), vpii.end());
	int ok = 1; 
	for(int i=1; i<n; i++)
		if (vpii[i].second < vpii[i - 1].second)
		{
			ok = 0;
			break;
		}
 
	long long tmp[3] ;
	//cout << tmp[2] << endl;
	vector<int> vi[3] = { getsame(arr1, n),getsame(arr2, n),getsame(vpii, n) };
	for (int i = 0; i < 3; i++)
	{
		tmp[i] = 1;
		for (auto &kk : vi[i])
		{
			tmp[i] = tmp[i] * acc[kk] % mod;
		}
	}
	//cout << tmp[0] << " " << tmp[1] <<" "<<acc[n]<<" "<<ok<<endl;
	printf("%I64d\n", (mod+acc[n] - (((tmp[0] + tmp[1])%mod - (ok?tmp[2]:0)) % mod))%mod);
	return 0;
 
 
}