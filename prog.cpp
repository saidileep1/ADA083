#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("input.txt","r",stdin);
	int testcase,N,K,X;
	cin>>testcase;
	while(testcase!=0)
	{
		int c=0;
		cin>>N>>K;
	for(int i=0;i<N;i++)
	{
		cin>>X;
		if(X==K)
		c=1;
	}
	if(c==1)
		cout<<"1\n";
	else
		cout<<"-1\n";
	testcase--;}
	return 0;
}
