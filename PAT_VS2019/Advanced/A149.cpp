//#include <iostream>
//#include <vector>
//#include<set>
//using namespace std;
////   ����A121 ��
////Bug: һ��Υ��Ʒ����������Ʒ������
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
//            for(auto j:s[goods[i]])  //  ����Υ���� �� �в�����
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