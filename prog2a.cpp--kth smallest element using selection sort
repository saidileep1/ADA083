#include<iostream>
//#include<cstdio>
using namespace std;
int main(){
int n,min,k;
cout<<"enter the size";
    cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
cout<<"enter the k,to check the kth smallest element";
cin>>k;
for(int i=0;i<=k;i++)
{min=i;
int temp;
    for(int j=i+1;j<=n-1;j++)
    {
   if(a[j]<a[min])
    min=j;
        }
        temp=a[i];
       a[i]=a[min];
    a[min]=temp;
}
cout<<a[k-1];

}
