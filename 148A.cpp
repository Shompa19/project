#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int cnt=0,ncnt=0;
    for(int i=1;i<=d;i++)
    {
        if(i%k==0||i%l==0||i%m==0||i%n==0)
        {
            cnt++;
        }
        else
        {
            ncnt++;
        }
    }
    cout<<(d-ncnt);
return 0;
}
