#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int fei[10000010]={0};
int main()
{
	freopen ("1276.in","r",stdin);
	freopen ("1276.out","w",stdout);
	int a;
	cin>>a;
	fei[1]=1;
	fei[2]=2;
	for (int i=3; i<=a; i++)
	{
		fei[i]=fei[i-1]+fei[i-2];
		if (fei[i]>a+1)
		{
			cout<<0;
			return 0;
		}
		else if (fei[i]==a+1)
		{
			cout<<1;
			return 0;
		}
	}
	return 0;
}
