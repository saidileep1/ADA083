#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("input.txt","r",stdin);
	int testcase,N,K,temp;
	cin>>testcase;
	while(testcase--)
	{
		int flag=0;
		cin>>N>>K;
	for(int i=0;i<N;i++)
	{
		cin>>temp;
		if(temp==K)
		flag=1;
	}
	if(flag==1)
		cout<<"1\n";
	else
		cout<<"-1\n";
	}
	return 0;
}
