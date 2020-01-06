#include<iostream>
#include<string>
#include <iomanip>
#include <vector>

#define _for(i,a,b) for( int i=(a); i<(b); ++i)

using namespace std;

int main()
{
    string s;
    cin>>s;
    if(s[0]=='-')cout<<"-";
    bool ep=0;
    int e_symbol=4;
    for(;e_symbol<(int)s.length();e_symbol++)
    if(s[e_symbol]=='+') 
    {
        ep=1;
        break;
    } 
    else if(s[e_symbol]=='-') break;
    stringstream ss;
    ss<<s.substr(e_symbol+1);
    int evalue;
    ss>>evalue;

    if(evalue==0)
    {
        _for(i,1,e_symbol-1)
        cout<<s[i];
        return 0;
    }
    if(ep)
    {
        cout<<s[1];
        if(e_symbol-4>evalue)
        {
            _for(i,0,evalue)
            cout<<s[3+i];
            
            // 多此一举，小数点后面全是0时不要省略
            // bool allZero=1;
            // _for(i,evalue+3,e_symbol-1)
            // if(s[i]!='0')
            // {
            //     allZero=0;
            //     break;
            // }
            // if(!allZero)
            // {
            //     cout<<".";
            //     _for(i,evalue+3,e_symbol-1)
            //     cout<<s[i];
            // }
            cout<<".";
            _for(i,evalue+3,e_symbol-1)
            cout<<s[i];
            return 0;
        }
        else 
        {
            _for(i,3,e_symbol-1)
            cout<<s[i];
            _for(i,0,evalue-e_symbol+4)
            cout<<0;
        }
    }
    else //  指数是负数
    {
        cout<<"0.";
        _for(i,0,evalue-1)cout<<0;
        cout<<s[1];
        _for(i,3,e_symbol-1)cout<<s[i];
    }

    return 0;
}

