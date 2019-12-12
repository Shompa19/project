#include<iostream>
#include<cstdio>
#include<cmath>
typedef long long int ll;
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        ll n;
        int a,b;
        cin>>n>>a>>b;
        if(n==1)
            cout<<a<<endl;
        else
        {
            if(a>b/(2.0))
            {
                cout<<(n/2)*b+(n%2)*a<<endl;
            }
            else
            {
                cout<<(n*a)<<endl;
            }
        }
    }
return 0;
}
