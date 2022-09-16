四题，每题100，每题都有给范围，
如果只考虑小范围，也是能拿几十分的。

第一题-100%-23min

第二题-61min-0% （最后几分钟有了10%）
（一会儿过了第一个用例，一会儿过了第二个用例，最后两个用例都过了，却是0%）

第三题-16min-100%

第四题-20%-9min

题目私聊。



```
// // 23min 100% 100'
// #include <iostream>
// #include <vector>
// #include <map>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     int n;
//     unsigned long long k;
//     cin >> n >> k;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++)
//         cin >> a[i];
//     vector<int> b = a;
//     sort(b.begin(), b.end());
//     map<int, int> c;
//     for (auto &i : b)
//         c[i]++;
//     int rn = n, lasti = 0;
//     for (auto &[i, cnt] : c)
//     {
//         if (k > (unsigned long long)(i - lasti) * (unsigned long long)rn)
//         {
//             k -= (unsigned long long)(i - lasti) * rn;
//             rn -= cnt;
// //             cout<<"k= "<<k<<", rn= "<<rn<<"\n";
//             lasti = i;
//         }
//         else
//         {
// //             cout << "k1 = " << k << "rn= " << rn << " k%rn= " << k % rn << "\n";
//             k = k % rn; // 10  5  k=48
//             if (k == 0)
//                 k = rn;
//             int q = 0;
//             for (int j = 0; j < n; j++)
//             {
//                 if (a[j] >= i)
//                 {
//                     q++;
//                     if (q == k)
//                     {
//                         cout << j + 1;
//                         return 0;
//                     }
//                 }
//             }
//         }
//     }
//     return 0;
// }


// 61min 100' 过了两个示例用例，但10%
// #include <iostream>
// #include <vector>
// #include <map>
// #include <algorithm>
// using namespace std;
// #define _for(i,a,b) for(int i=a;i<b;i++)

// 求循环长度
// int getcir(const vector<string>& e, vector<vector<int>>& iscir, int i, int j){
//     int ii=i,jj=j,cir=1;
//     iscir[i][j]=2;
// //     cout<<i<<", "<<j<<"\n";
//     if(e[i][j]=='^')
//             ii--;
//     else if(e[i][j]=='>')
//             jj++;
//     else if(e[i][j]=='v')
//             ii++;
//     else jj--;
//     while(ii!=i||jj!=j){
//         if(e[ii][jj]=='^')
//             ii--;
//         else if(e[ii][jj]=='>')
//             jj++;
//         else if(e[ii][jj]=='v')
//             ii++;
//         else jj--;
//         iscir[ii][jj]=2;
//         cir++;
//     }
// //     cout<<i<<", "<<j<<"2222222222222222222\n";
//     return cir;
// }

// int dfs(const vector<string>& e, vector<vector<int>>& c, vector<vector<int>>& v, int i, int j){
//     int a=1;
//     v[i][j]=1; // 本轮遍历
//     bool isc=0;
//     if(e[i][j]=='^'){
//         if(i>0){
//             if(v[i-1][j]==0){
//                 a=max(a,1+dfs(e,c,v,i-1,j));
//                 if(v[i][j]==2) // 属于循环中
//                     a=c[i-1][j];
//             }
//             else if(v[i-1][j]==1) // 发现循环，终止搜索，求循环长度
//                 a=getcir(e,v,i,j);
//             else a=max(a,1+c[i-1][j]); // 下一步已经算出来（v为2或3）
//         }
//     }else if(e[i][j]=='>')
//     {
//         if(j<e[0].length()-1){
//             if(v[i][j+1]==0){
//                 a=max(a,1+dfs(e,c,v,i,j+1));
//                 if(v[i][j]==2)
//                     a=c[i][j+1];
//             }
//             else if(v[i][j+1]==1)
//                 a=getcir(e,v,i,j);
//             else a=max(a,1+c[i][j+1]);
//         }
//     }else if(e[i][j]=='v')
//     {
//         if(i<e.size()-1){
//             if(v[i+1][j]==0){
//                 a=max(a,1+dfs(e,c,v,i+1,j));
//                 if(v[i][j]==2)
//                     a=c[i+1][j];
//             }
//             else if(v[i+1][j]==1){   // loop 
//                 a=getcir(e,v,i,j);
//             }else a=max(a,1+c[i+1][j]);
//         }
//     }else 
//     {
//         if(j>0){
//             if(v[i][j-1]==0){
//                 a=max(a,1+dfs(e,c,v,i,j-1));
//                 if(v[i][j]==2)
//                     a=c[i][j-1];
//             }
//             else if(v[i][j-1]==1)a=getcir(e,v,i,j);
//             else a=max(a,1+c[i][j-1]);
//         }
//     }
// //     cout<<i<<", "<<j<<", a= "<<a<<"\n";
//     c[i][j]=a;
//     if(v[i][j]!=2) // 不是循环，标记为3
//         v[i][j]=3;
//     return a;
// }

// int main()
// {
//     int n,m;
//     cin>>n>>m;
// //     n=2,m=3; // bug 10%
//     vector<string> e(n);
//     _for(i,0,n) 
//         cin>>e[i];
// //     e[0]="^v<";
// //     e[1]=">>^";
//     vector<vector<int>> c(n,vector<int>(m,0));
//     vector<vector<int>> v(n,vector<int>(m,0));
//     int maxn=1;
//     _for(i,0,n)
//         _for(j,0,m){
//         if(c[i][j]==0){
//             maxn=max(maxn,dfs(e,c,v,i,j));
//         }
//         maxn=max(maxn,c[i][j]);
//     }
//     cout<<maxn;
//     return 0;
// }



// 100' 100% 16min
// #include <iostream>
// #include <vector>
// #include <map>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     int l;cin>>l;
//     string s;
//     cin>>s;
//     l=s.length();
//     int p=0,o=0,n=0,y=0;
//     int P=0,O=0,N=0,Y=0;
//     for(int i=0;i<l;i++){
//         if(s[i]=='p') p++;
//         else if(s[i]=='o'){
//             o++;
//             O=min(O+1,p);
// //             cout<<i<<", O= "<<O<<"\n";
//         }
//         else if(s[i]=='n'){
//             n++;
//             N=min(N+1,O);
// //             cout<<i<<", N= "<<N<<"\n";
//         }
//         else{
//             y++;
//             Y=min(Y+1,N);
// //             cout<<i<<", Y= "<<Y<<"\n";
//         }
//     }
//     cout<<Y;
//     return 0;
// }



// 100' 20% 9min
// #include <iostream>
// #include <vector>
// #include <map>
// #include <algorithm>
// using namespace std;
// #define _for(i,a,b) for(int i=a;i<b;i++)

// int main()
// {
//     int n,m;cin>>n>>m;
//     vector<unsigned long long> a(n);
//     _for(i,0,n) cin>>a[i];
//     // 10432, 10321, 10210
//     bool f=true;
//     while(f){
//         f=false;
//         _for(i,0,n-m+1){
//             bool b=true;
//             _for(j,i,i+m)
//                 if(a[j]<=0){
//                     b=false;
//                     break;
//                 }
//             if(b){
//                 f=true;
//                 _for(j,i,i+m)
//                     a[j]--;
//             }
//         }
//     }
//     unsigned long long ans=0LL;
//     _for(i,0,n)
//         ans+=a[i];
//     cout<<ans;
//     return 0;
// }

```