#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;
long long  wei (long long  x)
{
	long long  ans=0;
	while (x>0)
	{
		x/=10;
		ans++;
	}
	return ans;
}
int main()
{
	freopen ("1305.in","r",stdin);
	freopen ("1305.out","w",stdout);
	long long  n;
	cin>>n;
	if (n==1)
	{
		cout<<1;
		return 0;
	}
	long long da=0,qda;
	long long  s;
	for (long long i=1; i<=2147483647; i++)
	{
		qda=da;
		if (i<10) da+=i;
		else if (i<100) da+=2*i-9;
		else if (i<1000) da+=3*i-108;
		else if (i<10000) da+=4*i-1107;
		else if (i<100000) da+=5*i-11106;
		else if (i<1000000) da+=6*i-111105;
		else if (i<10000000) da+=7*i-1111104;
		else if (i<100000000) da+=8*i-11111103;
		else if (i<1000000000) da+=9*i-111111102;
		if (da>=n)
		{
			s=i;
			break;
		}
	}    //sÊÇÕâÁÐÊýÖÐ×î´óµÄÊý 
	n=n-qda;
	long long  h=0;
	long long  shu;
	for (long long  i=1; i<=s; i++)
	{
		if (i<10) h++;
		else if (i<100) h+=2;
		else if (i<1000) h+=3;
		else if (i<10000) h+=4;
		else if (i<100000) h+=5;
		else if (i<1000000) h+=6;
		else if (i<10000000) h+=7;
		else if (i<100000000) h+=8;
		else if (i<1000000000) h+=9;
		if (h>=n)
		{
			shu=i;
			break;
		}
	}
	if (h==n)
	{
		cout<<shu%10;
		return 0;
	}
	n=wei (shu)-(h-n);
	long long  haha=pow (10,n);
	shu/=haha;
	shu%=10;
	cout<<shu;
	return 0;
}
