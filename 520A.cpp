#include<iostream>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<set>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int m=26;
    string str;
    cin>>str;
    set<char>s;
    if(n<26)
        cout<<"NO";
    else
    {
    for(int i=0;i<n;i++)
    {
        char c;
        c=tolower(str[i]);
        s.insert(c);
    }
    if(s.size()==m)
        cout<<"YES";
    else
        cout<<"NO";
    }
return 0;
}
