#include<iostream>
#include<string>
#include<memory.h>
#include <iomanip>
#include <vector>
#include<algorithm>
#include<math.h>

#define _for(i,a,b) for( int i=(a); i<(b); ++i)
#define __for(i,a,b) for( int i=(a); i<=(b); ++i)

using namespace std;

void printA(int a)
{
    if(a<10) cout<<"000"<<a;
    else if(a<100) cout<<"00"<<a;
    else if(a<1000) cout<<"0"<<a;
    else cout<<a;
}
int main()
{
    int n;
    cin>>n;
    int a,b;
    int s[4];
    while(true)
    {
        s[0]=n/1000;
        s[1]=n/100 %10;
        s[2]=n/10 %10;
        s[3]=n%10;
        sort(s,s+4);
        a=s[3]*1000+s[2]*100+s[1]*10+s[0];
        b=s[0]*1000+s[1]*100+s[2]*10+s[3];
        n=a-b;
        printA(a);
        cout<<" - ";
        printA(b);
        cout<<" = ";
        printA(n);
        if(n!=6174&&n!=0)
        cout<<endl;
        else break;
    }
    
    return 0;
}

