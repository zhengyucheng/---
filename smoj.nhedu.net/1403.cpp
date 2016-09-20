#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <cstdlib>
using namespace std;
int a[25][25];
int s[25]={0};
int hang[25]={0},lie[25]={0};
int er (int m)
{
	int x=20,sb=0;
	while (m>0)
	{
		s[x--]=m%2;
		m/=2;
		sb+=s[x+1];
	}
	return sb;
}
int main()
{
	freopen ("1403.in","r",stdin);
	freopen ("1403.out","w",stdout);
	int n;
	cin>>n;
	for (int i=1; i<=20; i++)
	for (int j=1; j<=20; j++)
	{
		char fuck;
		cin>>fuck;
		if (fuck=='#') a[i][j]=1;
		else a[i][j]=0;
	}
	int ans=-1;
	for (int i=1; i<=(1<<20); i++)
	{
		int sb=er (i);
		if (sb>=n) continue;
		int z=-1,sheng=n-sb;
		int m[25]={0};
		for (int j=1; j<=20; j++)
		if (s[j])
		for (int k=1; k<=20; k++)
		m[k]+=a[j][k];
		int q[25]={0};
		for (int j=1; j<=20; j++)
		q[m[j]]++;
		for (int j=20; j>0; j--)
		while (q[j]&&sheng)
		{
			q[j]--;
			z+=j;
			sheng--;
		}
		ans=max (ans,z);
		memset (s,0,sizeof (s));
	}
	cout<<ans+1;
	return 0;
}
