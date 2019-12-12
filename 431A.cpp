#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    int a[4];
    string s;
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }
    cin>>s;
    int res=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
          res+=a[0];
        }
        else if(s[i]=='2')
        {
            res+=a[1];
        }
        else if(s[i]=='3')
        {
            res+=a[2];
        }
        else if(s[i]=='4')
        {
            res+=a[3];
        }
    }
    cout<<res;
return 0;
}
