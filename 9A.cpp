#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    int y,w;
    cin>>y>>w;
    int x=max(y,w);
    const string prob[7]={"","1/1","5/6","2/3","1/2","1/3","1/6"};
    cout<<prob[x];
return 0;
}
