#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
int f[110][110]={0};
int main()
{
	freopen ("1275.in","r",stdin);
	freopen ("1275.out","w",stdout);
	int a;
	cin>>a;
	for (int i=1; i<=a; i++)
	for (int j=i; j<=a; j++)
	f[i][j]=1;
	for (int i=2; i<=a; i++)
	for (int j=1; j<i; j++)
	{
		int s=0;
		for (int k=2; k<=j*2; k+=2)
		s+=f[i-k/2][k];
		if (s==j) s=0;
		else s=1;
		f[i][j]=s;
	}
	int n=1;
	for (int i=1; i<=a; i++)
	if (f[a][i]==0)
	{
		n=0;
		break;
	}
	cout<<n;
	return 0;
}
