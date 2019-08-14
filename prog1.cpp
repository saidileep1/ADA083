#include<iostream>
#include<cmath>
using namespace std;

void bin(int a)
{

    int mid,k;
    int s=1,e;
    e=a;
    while(s<=e)
    {

        mid=(s+e)/2;
        if((mid*mid==a)||(mid*mid<a)&&((mid+1)*(mid+1)>a))
            {
                k=mid;
                cout<<k;
                return;
            }
        else if(mid*mid<a)
            {s=mid+1;

            }
        else{
            e=mid-1;

            }
    }
    cout<<mid;
}

int main()
{
	int x;
	cout<<"enter the number";
	cin>>x;
	cout<<"the square root is";
	bin(x);
}
