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

int getP(int a, int da)
{
    int pa=0;
    int i=0;
    while(a!=0)
    {
        if(a%10==da)
        pa+=da*pow(10,i++);
        // cout<<pa<<endl;
        a=a/10;
    }
    return pa;
}
int main()
{
    int a,da,b,db;
    cin>>a>>da>>b>>db;
    int pa,pb;
    pa=getP(a,da);
    pb=getP(b,db);
    cout<<pa+pb;
    return 0;
}

