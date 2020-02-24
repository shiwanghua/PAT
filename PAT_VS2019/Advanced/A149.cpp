//#include <iostream>
//#include <vector>
//#include<set>
//using namespace std;
////   类似A121 题
////Bug: 一个违禁品可能与多个物品不兼容
//int main() {
//    int n, a, b, m, k;
//    set<int> s[23000];
//    scanf("%d%d", &n,&m);
//    for (int i = 0; i < n; i++) {
//        scanf("%d%d", &a, &b);
//        s[a].insert(b);
//        s[b].insert(a);
//    }
//    while (m--) {
//        scanf("%d", &k);
//        vector<int> goods(k), isExist(100000);
//        for (int i = 0; i < k; i++) {
//            scanf("%d", &goods[i]);
//            isExist[goods[i]] = 1;
//        }
//        int i, out = 0;
//        for ( i = 0; i < k&&out==0; i++)
//            for(auto j:s[goods[i]])  //  存在违禁物 且 有不兼容
//            {
//                if (isExist[j]) {
//                    cout << "No\n";
//                    out = 1;
//                    break;
//                }
//            }
//        if (out==0)cout << "Yes\n";
//    }
//    return 0;
//}