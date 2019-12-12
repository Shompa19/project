#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[m];
    bool b=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(i%2==0)
            {
                if(b==0)
                {
                    if(j<m)
                        cout<<".";
                    else if(j==m)
                    {
                        cout<<"#";
                        b=1;
                    }
                }
                else if(b==1)
                {
                    if(j==1)
                        cout<<"#";
                    else if(j<m){
                        cout<<".";}
                    else if(j==m)
                    {
                      cout<<".";
                      b=0;
                    }
                }
            }
            else
            {
                cout<<"#";
            }
        }
        cout<<endl;
    }
return 0;
}
