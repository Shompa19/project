#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int m=max(a,max(b,max(c,d)));
        cout<<m;
    }
return 0;
}
