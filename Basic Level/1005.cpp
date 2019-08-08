#include<iostream>
#include<memory.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int* input=new int[n];

    bool* d=new bool[151]; // 记录是不是关键字1-150
    bool* h=new bool[101]; // 记录是否输入了这个数字 2-100
    memset(d,0,sizeof(bool)*151);
    memset(h,0,sizeof(bool)*101);
    
    int i=0;
    while(i<n)
    {
        cin>>input[i];
        h[input[i]]=1;  // h[3]==1表示输入了3
        i++;
    }

    i=0;
    while (i<n)
    {
        while(input[i]!=1)   // 直接在input上改数值
        {
            if(input[i]%2==1)
                input[i]=input[i]*3+1;
            input[i]/=2;
            if(input[i]<101) d[input[i]]=1;   //  这时的input[i]值是关键字
        }
        i++;
    }

    int minKey=2; // 最小的非关键字用于输出
    while(true)   // 找出最小的关键字
    {
        if(minKey>100) return 0;  // 所有输入都被覆盖，都是关键字
        if(!h[minKey])   // 如果minKey不是输入
        {
            minKey++;    
            continue;
        } 
        //  如果minKey是输入
        if(!d[minKey]) break; // 如果minKey不是关键字则代表找到了
        else minKey++;  //  minKey是关键字, 加1
    }


    for(i=100;i>minKey;i--)
    {
        if(h[i])
        {
            if(!d[i])
                cout<<i<<" ";
        }
    }
    cout<<minKey;
    
    return 0;
}