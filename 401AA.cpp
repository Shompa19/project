#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    int sum=0;
    for(int i=0;i<n;i++)
    {
       int a;
       cin>>a;
       sum+=a;
    }
    sum=sum<0?(-sum):sum;
    if(sum%x==0)
        cout<<(sum/x)<<endl;
    else
        cout<<(sum/x)+1<<endl;
return 0;
}
