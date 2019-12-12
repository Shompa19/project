#include<iostream>
#include<cstdio>
#include<set>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    set<int>s;
    while(n--)
    {
        int a;
        cin>>a;
        while(a--)
        {
            int x;
            cin>>x;
            s.insert(x);
        }
    }
    if(s.size()==m)
        cout<<"YES";
    else
        cout<<"NO";
return 0;
}
