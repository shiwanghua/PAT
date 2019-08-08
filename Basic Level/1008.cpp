#include<iostream>
#include<string>
#include<memory.h>

#define _for(i,a,b) for( int i=(a); i<(b); ++i)
#define __for(i,a,b) for( int i=(a); i<=(b); ++i)

using namespace std;

void t(int* an,int b,int c)
{
    int t;

    while(b<c)
    {
        t=an[b];
        an[b]=an[c];
        an[c]=t;
        b++;
        c--;
    }
}

int main()
{
    int n,m;
    cin>>n>>m;
    m=m%n;

    int* an= new int[n];

    _for(i,0,n)
    cin>>an[i];

    t(an,n-m,n-1);
    t(an,0,n-m-1);
    t(an,0,n-1);

    _for(i,0,n-1)
    cout<<an[i]<<' ';
    cout<<an[n-1];

    return 0;
}