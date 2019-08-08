#include<iostream>
#include<string>
#include<memory.h>
#include<vector>
#include<algorithm>

#define _for(i,a,b) for( int i=(a); i<(b); ++i)
#define __for(i,a,b) for( int i=(a); i<=(b); ++i)
#define max_cost 1000000

using namespace std;

struct edge
{
    int city_a,city_b,cost,avali;
    bool operator <(edge& b)const{
        return avali!=b.avali? avali>b.avali:cost<b.cost;
    }
    void input()
    {
        scanf("%d %d %d %d",&city_a,&city_b,&cost,&avali);
    }
};

vector<int> cost, father;
vector<edge> ve;
int getFather(int a)
{
    return a==father[a] ? a : father[a]=getFather(father[a]);
}

int main()
{
    int city_num,edge_num;
    cin>>city_num>>edge_num;
    int *isC = new int[n+1];  //  is connected 第一条连接链编号为1， 第二条为2，初始是每个城市独自属于一条连接
    _for(i,0,n+1)
    isC[i]=i;

    int **m4 = new int*[m]; // m行4列的数组
    int * d=new int[m];  //  存储被destroyed的路所在的行 从0开始
    int di=0; // 记录d数组记录的个数
    memset(d,-1,m);
    _for(i,0,m)
    {
        m4[i]=new int[4];
        _for(j,0,4)
        cin>>m4[i][j];

        if(m4[i][3]==1)
        {
            if(isC[m4[i][0]]<isC[m4[i][1]])
            isC[m4[i][1]] = isC[m4[i][0]];
        else isC[m4[i][0]] = isC[m4[i][1]];   // 后面的有可能比前面小！！
        }
        else{
            d[di++]=i;  // 此路被毁，需要修复
        }
    }

    if(di==0)
    {
        cout<<0;
        return 0;
    } 

    int* cost=new int[di]; //  存储di条被毁连接的cost
    _for(i,0,di)
    {
        cost[i]=m4[d[i]][2];
    }
    int* scost=new int[di];// 排序cost，存cost的索引 cost[scost[0]]是cost的最小值

    _for(i,0,di)
    {
        int min=1000000;
        int index=-1; // 最小值的索引
        _for(j,i,di)
        {
            if(cost[j]<min)
            {
                min=cost[j];
                index=j;
            }
        }
        cost[index]=cost[i];
        cost[i]=min;
        scost[i]=d[index]; // 可以直接m4数组上获取cost值
    }
    cout<<"isC: \n";
     _for(i,1,n+1)
    {
        cout<<isC[i]<<" ";
    }cout<<"\n";


    int* out = new int[n];  //  存储输出结果的数组
    int nout=0;
    memset(out,0,4*n);

    _for(i,0,n)  //  假设i城市沦陷
    {
        if(isC[m4[scost[i]][0]]==isC[m4[scost[i]][1]]) {cout<<isC[m4[scost[i]][0]]<<" ";continue;}

        if(isC[m4[scost[i]][0]]>isC[m4[scost[i]][1]])
        isC[m4[scost[i]][0]]=isC[m4[scost[i]][1]];
        else 
        isC[m4[scost[i]][1]]=isC[m4[scost[i]][0]];
        cout<<"i= "<<i<<endl;
        out[nout++]=m4[scost[i]][0];
        out[nout++]=m4[scost[i]][1];

    }
     cout<<"\ncost:\n";
    _for(i,0,di)
    {
        cout<<scost[i]<<" ";
    }
    cout<<"\n";
    _for(i,0,8*m)
    {
        cout<<out[i]<<" ";
    }

    return 0;
}
