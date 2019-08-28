#include<iostream>
using namespace std;
int m=0,s=0,bu=0;
void bubblesort(int a[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	for(j=0;j<n-i-1;j++)
	{
		bu++;
		if(a[j]>a[j+1])
			swap(a[j],a[j+1]);
	}	
}
void selectionsort(int a[],int n)
{
	int i,j,min_in;
	for(i=0;i<n-1;i++)
	{
		min_in=i;
		for(j=i+1;j<n;j++)
		{
			s++;
			if(a[j]<a[min_in])
				min_in=j;
		}
		swap(a[min_in],a[i]);
	}
}
void combine(int a[],int low,int mid,int high)
{
	int i=low,j=mid+1,k=0;
	int c[high-low+1];
	while(i<=mid && j<=high)
	{m++;
			if(a[i]<a[j])
				c[k++]=a[i++];
			else
				c[k++]=a[j++];
	}
	if(i>mid)
		while(j<=high)
			c[k++]=a[j++];
	if(j>high)
		while(i<=mid)
			c[k++]=a[i++];
	for(int i=0;i<high-low+1;i++)
		a[i+low]=c[i];
}
void split(int a[],int low,int high)
{
	if(low<high)
	{
	int mid=(low+high)/2;
	split(a,low,mid);
	split(a,mid+1,high);
	combine(a,low,mid,high);
	}
}
int main()
{
	int n;
	cout<<"Enter size of array: ";
	cin>>n;
	int a[n],b[n],c[n]; 
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	b[i]=a[i];
c[i]=a[i];
}
	cout<<endl;
	selectionsort(b,n);
	bubblesort(c,n);

	split(a,0,n-1);

		cout<<"\n"<<m<<"-mergesort "<<"\n"<<bu<<"-bubblesort"<<"\n"<<s<<"-selectionsort";
	cout<<endl;
	return 0;
}

