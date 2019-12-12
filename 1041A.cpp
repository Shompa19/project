#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<vector>
typedef long long int ll;
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    cout<<abs(((v[n-1]-v[0])+1)-n)<<endl;
return 0;
}
