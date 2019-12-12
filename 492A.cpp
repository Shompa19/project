#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int temp=n;
    int c=0;
    for(int i=1;i<=n;i++)
    {
      int sum=0;
      sum=(i*(i+1))/2;
      if(temp>=sum)
      {
          c++;
          temp-=sum;
      }
      else
        break;
    }
    cout<<c;
return 0;
}
