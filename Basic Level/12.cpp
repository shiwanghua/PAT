#include<iostream>
#include<string>
#include <iomanip>
#include<memory.h>

#define _for(i,a,b) for( int i=(a); i<(b); ++i)
#define __for(i,a,b) for( int i=(a); i<=(b); ++i)

using namespace std;

int main()
{
    int a1=0,a2=0,a3=0,a4=0,a5=0;
    bool a2_have=false;
    bool plus=true;
    int a4_n=0;
    int n;
    int num;
    cin>>n;
    while(n--)
    {
        cin>>num;
        if(num%5==0)
        {
            if(num%2==0)    a1+=num;
        }
        else if(num%5==1)
        {
            a2_have=true;
            if(plus)
            {
                a2+=num;
                plus=false;
            }
            else 
            {
                a2-=num;
                plus=true;
            }
        }
        else if(num%5==2)
        {
            a3++;
        }
        else if(num%5==3)
        {
            a4+=num;
            a4_n++;
        }
        else{
            if(num>a5)  a5=num;
        }
    }

    if(a1==0)   cout<<"N "; else cout<<a1<<" ";
    if(!a2_have)   cout<<"N "; else cout<<a2<<" ";
    if(a3==0)   cout<<"N "; else cout<<a3<<" ";
    if(a4==0)   cout<<"N "; else cout<<fixed<<setprecision(1)<<double(a4)/double(a4_n)<<" ";
    if(a5==0)   cout<<"N"; else cout<<a5;

    return 0;
}