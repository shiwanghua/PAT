#include<iostream>
#include<string>
#include<memory.h>
#include <iomanip>
#include <vector>
#include<algorithm>
#include<math.h>

#define _for(i,a,b) for( int i=(a); i<(b); ++i)
#define mfor(i,a,b) for(int i=(a);i>=(b);--i)

using namespace std;

struct lnode{
    string address;
    int data;
    string next; 
    void print()
        {cout<<address<<" "<<data<<" "<<next<<endl;}
};

int find(lnode* ln, string f_add,int n)
{
    _for(i,0,n)
    if(f_add==ln[i].address) return i;
    exit(1);
}
int main()
{
    string start;
    int n,k,f;
    cin>>start>>n>>k;
    lnode ln[n],change[n];   
    _for(i,0,n)
    cin>>ln[i].address>>ln[i].data>>ln[i].next;
    int count=0;
    while(start!="-1")
    {
        f=find(ln,start,n);
        change[count]=ln[f];        
        start=change[count++].next;   
    }
    n=count;
    if(n<k||k==0)
    {
        _for(i,0,n) change[i].print();
        return 0;
    }

    _for(i,0,n/k-1)  //    一共有n/k轮反转
    {
        int base=i*k;// 第i+1轮反转的起始下标
        mfor(j,base+k-1,base+1)
            change[j].next=change[j-1].address;
        change[base].next=change[base+2*k-1].address;
        mfor(j,base+k-1,base) change[j].print();
    }
    change[(n/k-1)*k].next=change[(n/k-1)*k+k-1].next;
    for(int i=(n/k-1)*k+k-1;i>=(n/k-1)*k+1;i--)
    change[i].next=change[i-1].address;
    for(int i=(n/k-1)*k+k-1;i>=(n/k-1)*k;i--)
    change[i].print();
    for(int i=(n/k)*k;i<n;i++)
    change[i].print();
    return 0;
}

// int main()
// {
//     int f,n,k,temp;
//     cin>>f>>n>>k;
//     int data[100005],next[100005],list[100005];
//     for(int i=0;i<n;i++){
//         cin>>temp;
//         cin>>data[temp]>>next[temp];
//     }
//     int sum=0;
//     while(f!=-1){
//         list[sum++]=f;
//         f=next[f];
//     }
//     for(int i=0;i<(sum-sum%k);i+=k) reverse(begin(list)+i,begin(list)+k+i);
//     for(int i=0;i<sum-1;i++) printf("%05d %d %05d\n",list[i],data[list[i]],list[i+1]);
//     printf("%05d %d -1",list[sum-1],data[list[sum-1]]);
//     return 0;
// }
