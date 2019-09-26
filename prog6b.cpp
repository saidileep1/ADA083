#include<iostream>
using namespace std;

int indegree[100];
int a[100][100]={0};
void Topologiacl(int n)
{
	for(int i=0;i<n;i++)
	{
		indegree[i]=0;
		for(int j=0;j<n;j++)
			indegree[i] += a[j][i];
	}
	for(int j=0;j<n;j++)
		if(indegree[j]==0)
		{
			indegree[j]=-1;
			cout<<j+1;
			for(int k=0;k<n;k++)
			{
				if(a[j][k]==1)
				indegree[k]=indegree[k]-1;
			}
		}
}
int main()
{
    int n;
    cout<<"enter size";
    cin>>n;
	cout<<"\nEnter the adjacency matrix : \n";
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	Topologiacl(n);
	return 0;
}
