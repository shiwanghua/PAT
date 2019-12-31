#include<iostream>
#include<string>
#include<memory.h>
#include <iomanip>
#include <vector>
#include<algorithm>
#include<math.h>

#define _for(i,a,b) for( int i=(a); i<(b); ++i)

using namespace std;
bool cmp(char a, char b) {return a > b;}
int main()
{
    string n;
    cin>>n;
    int c[10];
    memset(c,0,40);
    int len=n.length();
    int t;
    _for(i,0,len)
    {
        t=n[i]-'0';
        c[t]++;
    }
    _for(i,0,10)
    {
        if(c[i]>0)
        cout<<i<<":"<<c[i]<<endl;
    }
    return 0;
}

