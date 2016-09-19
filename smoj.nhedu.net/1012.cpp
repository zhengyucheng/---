#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;
int a[1010][1010]={0};
int n;
int x,y;
void huan (int xx,int yy,int m)
{
	
	if (xx==1&&yy!=n) x=n,y=yy+1;
	else if (xx!=1&&yy==n) x=xx-1,y=1;
	else if (xx==1&&yy==n) x=xx+1,y=yy;
	else if (xx!=1&&yy!=n)
	{
		if (a[xx-1][yy+1]!=0) x=xx+1,y=yy;
		else x=xx-1,y=yy+1;
	}
	a[x][y]=m;
}
int main()
{
	freopen ("1012.in","r",stdin);
	freopen ("1012.out","w",stdout);
	
	cin>>n;
	int nn=n/2+1;
	a[1][nn]=1;
	x=1;
	y=nn;
	for (int i=2; i<=n*n; i++)
	huan (x,y,i);
	for (int i=1; i<=n; i++)
	for (int j=1; j<=n; j++)
	{
		cout<<a[i][j];
		if (j==n&&i!=n) cout<<endl;
		else if (j!=n) cout<<" ";
	}
	return 0;
}
