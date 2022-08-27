// 第一题
// from collections import Counter
// def solution(A):
//     c = Counter(A)
//     for i, cnt in c.items():
//         if cnt%2 >0:
//             return False
//     return True

// 第2题
int solution2(string &S, vector<int> &C) {
    int cost=0;
    for(unsigned int i=0;i<S.size();){
        unsigned int j=i;
        int maxCost = C[i];
        while(j<S.size()&&S[i]==S[j]){
            cost += C[j];
            if(C[j]>maxCost)
                maxCost = C[j];
            j++;
        }
        cost -= maxCost;
        i=j;
    }
    return cost;
}


// 第3题
#include <functional>
#include <memory>
#include<iostream>
using namespace std;
#include <vector>
int dfs(const string s, const vector<int>& A, const vector<vector<int> >& children, int& maxLen, int no){
    int l1=0,l2=0,t;
    for(auto cno: children[no]){
        t=dfs(s,A,children,maxLen,cno);
        if(s[cno]==s[no])
            continue;
        if(t>=l1){
            l2=l1;
            l1=t;
        }else if(t>l2)
            l2=t;
    }
    maxLen=max(maxLen, l1+l2+1);
    return l1+1;
}

int solution3(string &S, vector<int> &A) {
    int n=S.length();
    if(n<2) return n;
    vector<vector<int> > children(n);
    for(int i=1;i<n;i++){
        children[A[i]].push_back(i);
    }
    int maxLen=0;
    dfs(S,A,children,maxLen,0);
    return maxLen;
}

int main()
{
    string s="abbab";
    vector<int> a(5);
    a[0]=-1;
    a[1]=a[2]=a[3]=0;
    a[4]=2;
    // cout<< solution3(s,a);

    a.resize(4);
    a[0]=-1;
    a[1]=2;
    a[2]=0;
    a[3]=1;
    s="abab";
    cout<< solution3(s,a);
    return 0;
}