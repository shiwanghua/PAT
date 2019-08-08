#include<iostream>
#include<string>
#include<memory.h>

#define _for(i,a,b) for( int i=(a); i<(b); ++i)
#define __for(i,a,b) for( int i=(a); i<=(b); ++i)

using namespace std;

int main()
{
    char in[80];
    char i;
    i=getchar();
    int n=0; // 读取了n个字符
    while(i!='\n')
    {
        in[n++]=i;
        i=getchar();
    }

    int start;
    int end=-1;  // 这里没初始化花了很久
    while(n>0)
    {
        if(in[n-1]!=' '&&end<n)
        {
            end=n;
            n--;
            continue;
        }
        if(in[n-1]!=' ')
        {
            n--;
            continue;
        }
        if(in[n-1]==' ')
        {
            // cout<<"end= "<<end<<endl;
            // cout<<"n= "<<n<<endl;
            // cout<<"in[end-1]= "<<in[end-1]<<endl;
            _for(j,n,end)
            {
             cout<<in[j];
            }
            cout<<" ";
            end=-1;
            n--;
            
        }
    }
    _for(j,0,end)
    {
        cout<<in[j];
    }
    return 0;
}


/*
#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<string> v;
    string s;
    while(cin >> s) v.push(s);
    cout << v.top();
    v.pop();
    while(!v.empty()) {
        cout << " " << v.top();
        v.pop();
    }
    return 0;
}

*/ 
