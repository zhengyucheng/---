#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
long long ans[3000010]={0},a[3000010];
long long fuc (long long s)
{
	if (s==1) return 1;
	if (s%2==0) s/=2;
	else s=3*s+1;
	if (s<3000000&&ans[s]>0) return ans[s]+1;
	if (s<3000000) return (ans[s]=fuc (s))+1;
	return fuc (s)+1;
}
int main()
{
	freopen ("1405.in","r",stdin);
	freopen ("1405.out","w",stdout);
	long long x,y;
	cin>>x>>y;
	long long ma=-1,mi=2147483647;
	for (long long i=x; i<=y; i++)
	{
		long long sb=fuc (i);
		if (sb>0) a[i]=sb;
		ma=max (ma,sb);
		mi=min (mi,sb);
	}
	cout<<mi<<" "<<ma;
	return 0;
}
