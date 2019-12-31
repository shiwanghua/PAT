#include<iostream>
#define _for(i,a,b) for( int i=(a); i<(b); ++i)
using namespace std;

int main()
{
    int in[10];
    _for(i,0,10) cin>>in[i];
    int f=1;
    while(in[f]==0) f++;
    cout<<f;
    _for(i,0,in[0]) cout<<0;
    while(--in[f]) cout<<f;
    _for(i,f+1,10)
    {
        while(in[i]!=0)
        {
            cout<<i;
            in[i]--;
        }
    }
    return 0;
}

