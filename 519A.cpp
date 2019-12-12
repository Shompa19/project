#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    int A=0,B=0;
    int a=8;
    while(a--)
    {
        char a[8];
        for(int i=0;i<8;i++)
        {
            cin>>a[i];
                if(a[i]=='q')
                    B+=9;
                else if(a[i]=='r')
                    B+=5;
                else if(a[i]=='b'||a[i]=='n')
                    B+=3;
                else if(a[i]=='p')
                    B+=1;
                else if(a[i]=='k')
                    B+=0;
                else if(a[i]=='Q')
                    A+=9;
                else if(a[i]=='R')
                    A+=5;
                else if(a[i]=='B'||a[i]=='N')
                    A+=3;
                else if(a[i]=='P')
                    A+=1;
                else if(a[i]=='K')
                    A+=0;

        }
    }
    if(A==B)
       cout<<"Draw";
    else if(A>B)
        cout<<"White";
    else
        cout<<"Black";

return 0;
}
