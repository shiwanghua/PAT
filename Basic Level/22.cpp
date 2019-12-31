#include<iostream>
#include<string>
#include<memory.h>
#include <iomanip>
#include <vector>
#include<algorithm>
#include<math.h>

#define _for(i,a,b) for( int i=(a); i<(b); ++i)
#define __for(i,a,b) for( int i=(a); i<=(b); ++i)
#define mfor(i,a,b) for(int i=(a);i>=(b);--i)

using namespace std;

int main()
{
    /* 可以用int表示！！！不用string
    string o,a,b;
    int d;
    cin>>a>>b>>d;
    int l1=a.length(),l2=b.length();
    if(l2>l1)
    {
        o=b;
        b=a;
        a=o;
        l2=l2^l1;
        l1=l1^l2;
        l2=l1^l2;
    }
    else o=a;
    int he,jin=0;
    while(l2--)
    {
        he=o[l1-1]+b[l2]-'0'-'0'+jin;
        // cout<<"he:"<<he<<endl;
        o[l1-1]=(he%10)+'0';
        // cout<<"o["<<l1-1<<"]: "<<o[l1-1]<<endl;
        jin=he/10;
        l1--;
    }
    // cout<<o;

    vector<int> t;
    for(int i=o.length()-1;i>=0;i--)
    {
        t.push_back((o[i]-'0')%d);
        //这里o的值应该除以d
    }
    */
   int a,b,d;
   cin>>a>>b>>d;
   a=a+b;
   vector<int> o;
   if(a==0)
   {
       cout<<0;
       return 0;
   }
   while(a!=0)
   {
       o.push_back(a%d);
       a=a/d;
   }
    mfor(i,o.size()-1,0)
    {
        cout<<o[i];
    }


    return 0;
}

