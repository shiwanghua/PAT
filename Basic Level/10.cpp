#include<iostream>
#include<string>
#include<memory.h>

#define _for(i,a,b) for( int i=(a); i<(b); ++i)
#define __for(i,a,b) for( int i=(a); i<=(b); ++i)

using namespace std;

int main()
{
   int a,b;
   bool flag=false;
   while(cin>>a>>b)
   {
       if(b>0)
            {
                if(flag) cout<<" ";
                cout<<a*b<<" "<<b-1;
                flag=1;
            }
   }
   if(!flag) cout<<"0 0";
    return 0;
}