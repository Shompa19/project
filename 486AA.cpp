#include<iostream>
#include<cstdio>
typedef long long int ll;
using namespace std;

int main()
{
    ll n;
    cin>>n;
    if(n%2==0)
        cout<<n/2;
    else
        cout<<((n+1)/2)*(-1);
return 0;
}
