#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int l[105]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        l[a[i]]++;
    }

    sort(l,l+105,greater<int>());
    cout<<l[0];
return 0;
}
