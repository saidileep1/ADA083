#include <iostream>
using namespace std;

int partition(int a[],int low,int high)
{
	int pivot=a[low];
	int i=low+1;
	int j=high;
	while(1){
		while(a[i]<=pivot&&i<=high)
			i++;
		while(a[j]>pivot&&j>=low)
			j--;
		if(i<j)
			{int t;
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
			else
			{
				a[low]=a[j];
				a[j]=pivot;
				return j;
			}

	}
}
void qs(int a[],int low,int high)
{
	if(high<low)
		return;
	
		int p_pos=partition(a,low,high);
		qs(a,low,p_pos-1);
		qs(a,p_pos+1,high);
			
	
}
int main()
{int n;
	cout<<"enter the size";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cout<<"enter";
		cin>>a[i];
	}
	qs(a,0,n-1);
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\n";

return 0;}