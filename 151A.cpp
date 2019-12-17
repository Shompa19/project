#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int x=0,y=0,z=0;
    x=(k*l)/nl;
    y=(c*d);
    z=p/np;
    cout<<(min(x,min(y,z)))/n;
return 0;
}
