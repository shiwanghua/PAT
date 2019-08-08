#include<iostream>
#include<string>

#define _for(i,a,b) for( int i=(a); i<(b); ++i)

using namespace std;

int main()
{
    string a;int b;
    cin>>a>>b;
    int t=(a[0]-'0')/b;

    if(t!=0&&a.length()>1 || a.length()==1) {cout<<t;}
    t=(a[0]-'0')%b;
    _for(i,1,a.length())
    {
        t=a[i]-'0'+t*10;
        cout<<t/b;
            
        t=t%b;
    }
    cout<<" "<<t;
    return 0;
}

