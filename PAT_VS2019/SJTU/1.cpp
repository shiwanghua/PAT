//#include<iostream>
//#include<string>
//#include<cstdio>
//#include <iomanip>
//#include <vector>
//#include<cmath>
//#include<algorithm>
//using namespace std;
//void r(string& a) {
//    int l = a.length();
//    for (int i = 0, j = l - 1; i < l / 2; i++, j--)
//        swap(a[i], a[j]);
//}
//int main2() {
//    int n;
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        string a, b;
//        cin >> a >> b;
//        int res = stoi(a) + stoi(b);
//        string sum = to_string(stoi(a) + stoi(b));
//        r(sum);
//        r(a); r(b);
//        string sum2 = to_string(stoi(a) + stoi(b));
//        if (sum == sum2)
//            cout << res << endl;
//        else cout << "NO\n";
//    }
//    return 0;
//}
//int re(int q) {
//    int s = 0;
//    while (q) {
//        s = s * 10 + q % 10;
//        q = q / 10;
//    }
//    return s;
//}
//
//int main() {
//    int n;
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        int a, b, c, ra, rb, rc;
//        cin >> a >> b;
//        c = a + b;
//        rc = re(c);
//        ra = re(a);
//        rb = re(b);
//        if (rc == ra + rb)
//            cout << c << endl;
//        else cout << "NO\n";
//    }
//    return 0;
//}