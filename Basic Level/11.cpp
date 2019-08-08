#include<iostream>
#include<string>
#include<memory.h>

#define _for(i,a,b) for( int i=(a); i<(b); ++i)
#define __for(i,a,b) for( int i=(a); i<=(b); ++i)

using namespace std;

int main()
{
   long int a,b,c,n;
   cin>>n;
   if(n==0) return 0;
   int i=0;
   while(--n)
   {
       cin>>a>>b>>c;
       if(a+b>c)
       cout<<"Case #"<<++i<<": true\n";
       else cout<<"Case #"<<++i<<": false\n";
   }

        cin>>a>>b>>c;
       if(a+b>c)
       cout<<"Case #"<<++i<<": true";
       else cout<<"Case #"<<++i<<": false";
    return 0;
}