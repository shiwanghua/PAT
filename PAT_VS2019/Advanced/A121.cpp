//#include <iostream>
//#include <set>
//#include <vector>
//using namespace std;
//int main() {
//    int n, a, b, m;
//    scanf("%d", &n);
//    vector<int> couple(100000);
//    for (int i = 0; i < 100000; i++)
//        couple[i] = -1;
//    for (int i = 0; i < n; i++) {
//        scanf("%d%d", &a, &b);
//        couple[a] = b;
//        couple[b] = a;
//    }
//    scanf("%d", &m);
//    vector<int> guest(m), isExist(100000);
//    for (int i = 0; i < m; i++) {
//        scanf("%d", &guest[i]);
//        //if (couple[guest[i]] != -1)  //  他有对象
//          //  isExist[couple[guest[i]]] = 1;  //  假设他对象来了party
//            isExist[guest[i]] = 1; //  表示他来了party
//    }
//    set<int> s;
//    for (int i = 0; i < m; i++)
//      //  if (!isExist[guest[i]]) s.insert(guest[i]);  // 看guest在否  
//        if (couple[guest[i]]==-1|| !isExist[couple[guest[i]]]) s.insert(guest[i]); //  没对象 或者 对象没来
//    printf("%d\n", s.size());
//    for (auto it = s.begin(); it != s.end(); it++) {
//        if (it != s.begin()) printf(" ");
//        printf("%05d", *it);
//    }
//
//    //cout << endl << couple[55555] << " " << couple[66666] << endl;
//    //cout << isExist[55555] << " " << isExist[66666] << endl;;
//    return 0;
//}