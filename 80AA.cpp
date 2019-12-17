#include<iostream>
#include<cstdio>
#include<vector>
#define MAX 1000001
using namespace std;
bool prime[MAX];

void sieve()
{
    int i,j;
    prime[0]=prime[1]=true;
    for(i=4;i<MAX;i+=2)
    {
        prime[i]=true;
    }
    for(i=3;i*i<=MAX;i+=2)
    {
            if(!prime[i])
            {
        for(j=i*i;j<MAX;j+=2*i)
        {
        prime[j]=true;
        }
}
    }
}
int main()
{
    sieve();
    int n,m;
    cin>>n>>m;
    int p;
    for(int i=n+1;;i++)
    {
        if(prime[i]==0)
        {
            p=i;
            break;
        }
    }
    if(p==m)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";

    return 0;
}
