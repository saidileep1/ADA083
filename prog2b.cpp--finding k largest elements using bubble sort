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
cout<<"enter the k,to check the for k  largest elements";
cin>>k;
for(int i=0;i<=k;i++)
{int temp;
    for(int j=i;j<=n-1;j++)
    {

        if(a[i]<a[j])
        {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    }

}
for(int i=0;i<k;i++)
cout<<a[i]<<"\n";
}
