//#include<iostream>
//#include<set>
//using namespace std;
//int main() {
//    int n, t; scanf("%d", &n);
//    set<int> s;
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &t);
//        int sum = 0;
//        while (t > 0) {
//            sum += t % 10; t = t / 10;
//        }
//        s.insert(sum);
//    }
//    cout << s.size() << endl;
//    for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//    {
//        if (it == s.begin()) cout << *it;
//        else cout << " " << *it;
//    }
//}