#include<iostream>
#include <iomanip>
#include <vector>

#define _for(i,a,b) for( int i=(a); i<(b); ++i)

using namespace std;

struct node
{
    double d;
    int index;
}d_index;
int main()
{
    int n;
    double x;  //    需求量
    cin>>n>>x;
    // if(n==0) cout<<"0.00";
    vector<double> k(n),s(n);  //   库存，售价，单价
    node d_index[n];
    _for(i,0,n)
        cin>>k[i];
    _for(i,0,n)
    {
        cin>>s[i];
        d_index[i].d=s[i]/k[i];
        d_index[i].index=i;
    }
    
    _for(i,0,n-1)
    {
        int t=i;
        _for(j,i+1,n)
            if(d_index[t].d<d_index[j].d)
                t=j;
        if(t==i)   continue;
        node temp;
        temp=d_index[i];
        d_index[i]=d_index[t];
        d_index[t]=temp;  
    }

    double m=0.0;  // 已经满足的需求吨数
    double q=0.0;  //   钱
    int index=0; // 从d_i数组记录的第0种月饼开始卖
    while(m<x)
    {
        if(k[d_index[index].index]+m<=x)
        {
            m+=k[d_index[index].index];
            q+=s[d_index[index].index];
        }
        else 
        {
           q+=d_index[index].d*(x-m);
           m=x;
        }
        index++;
        if(index==n)
        break;
    }

    cout<<fixed<<setprecision(2)<<q;
    return 0;
}