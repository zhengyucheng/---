#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <string>
#include <cstdlib>
#include <algorithm>
using namespace std;
struct fuc
{
	int a,b,fin;
	double c;
}a[20];
bool oo(fuc a,fuc b)
{
	return (a.a<b.a);
}
int a1,a2,a3,n;
double f[20];
int main()
{
	freopen("1404.in","r",stdin);
	freopen("1404.out","w",stdout);
	cin>>n;
	for (int i=1; i<=n; i++)
	{
		cin>>a3>>a[i].b>>a[i].c;
		a1=a3/100;
		a2=a3%100;
		if (a1==1) a[i].a=a2;
		if (a1==2) a[i].a=31+a2;
		if (a1==3) a[i].a=59+a2;
		if (a1==4) a[i].a=90+a2;
		if (a1==5) a[i].a=120+a2;
		if (a1==6) a[i].a=151+a2;
		if (a1==7) a[i].a=181+a2;
		if (a1==8) a[i].a=212+a2;
		if (a1==9) a[i].a=243+a2;
		if (a1==10) a[i].a=273+a2;
		if (a1==11) a[i].a=304+a2;
		if (a1==12) a[i].a=334+a2;
		a[i].fin=a[i].a+a[i].b-1;
	}
	sort(a+1,a+n+1,oo);
	f[1]=100000*(1+a[1].c*0.01*a[1].b/365);
	for (int i=2; i<=n; i++)
	{
		f[i]=0;
		for (int j=1; j<i; j++)
		if (a[j].fin<a[i].a)
		f[i]=max(f[j],f[i]);
		
		if (f[i]==0) f[i]=100000*(1+a[i].c/100*a[i].b/365);
		else f[i]=f[i]*(1+a[i].c/100*a[i].b/365);
	}
	double ans=-1;
	for (int i=1; i<=n; i++) 
	ans=max (ans,f[i]);
	printf("%.2lf",ans);
    return 0;
}
