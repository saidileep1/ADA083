#include<iostream>
using namespace std;

int main()
{
	int a[100];
	int n,i,max=0;
	cout<<"enter the size of N";
	cin>>n;
	cout<<"enter the values of the N";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"the values are";
	for(i=0;i<n;i++)
	{
		cout<<"\n"<<a[i];
	}
for(i=0;i<n;i++)
{
	if(a[i]>=max)
		max=a[i];

	
}
	cout<<"the Maximum is\n";
	cout<<max<<"\n";
}