#include<iostream>
#include<cstdio>
using namespace std;
int a[11][11];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
     a[1][i]=1;
    }
    for(int j=1;j<=n;j++)
    {
     a[j][1]=1;
    }
    for(int i=2;i<=n;i++)
    {
        for(int j=2;j<=n;j++)
        {
            a[i][j]=a[i-1][j]+a[i][j-1];
        }
    }
    cout<<a[n][n];
return 0;
}
