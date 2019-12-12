#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int p=1,res=0;
    while(n)
    {
        if(n%10==4)
        {
            res+=p*1;
        }
        else if(n%10==7)
        {
            res+=p*2;
        }

        n=n/10;
        p=p*2;

    }
    cout<<res;

return 0;
}
