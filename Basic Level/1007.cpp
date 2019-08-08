#include<iostream>
#include<memory.h>


#define _for(i,a,b) for( int i=(a); i<(b); ++i)
#define __for(i,a,b) for( int i=(a); i<=(b); ++i)

using namespace std;

int main()
{
    int n;
    cin>>n;

    int num=0; // 找到的质数的个数
    int prime[40000]; // prime[1]是第一个质数
    bool* isPrime=new bool[n+1];
    memset(isPrime,1,sizeof(bool)*(n+1));

    // for(int i=2;i<=n/2;i++)
    __for(i,2,n/2)
    {
        if(isPrime[i]) prime[++num]=i;
        for(int j=1;j<=num&&i*prime[j]<=n;j++)
        {
            isPrime[i*prime[j]]=false;
            if(i%prime[j]==0) break;
        }
    }

    __for(i,n/2,n)
        if(isPrime[i]) prime[++num]=i;

    int c=0;
    __for(i,2,num)
        if(prime[i]-prime[i-1]==2)
            c++;
        // cout<<prime[i];
    cout<<c;

    return 0;
}