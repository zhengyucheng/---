#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
char a[110];
int main()
{
	freopen ("1406.in","r",stdin);
	freopen ("1406.out","w",stdout);
	gets (a);
	while (1)
	{
		int l=strlen (a);
		int s=0;
		for (int i=0; i<l; i++)
		s+=a[i]-'0';
		if (s<10)
		{
			cout<<s;
			return 0;
		}
		memset (a,0,sizeof (a));
		int r=0;
		while (s)
		{
			int sb=s%10;
			s/=10;
			a[r++]=sb+'0';
		}
		s=0;
	}
	
	
	return 0;
}
