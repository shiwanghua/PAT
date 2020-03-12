//#include<iostream>
//using namespace std;
//void p(int n) {
//    int i = 0;
//    while ((2 << i) <= n) i++;
//    if (i > 1) {
//        cout << "2(";
//        p(i);
//        cout << ")";
//    }
//    else if (i == 1) cout << "2";
//    else {
//        cout << "2(0)";
//        return;  //  此时i==0, 不能再减了
//    }
//    if (n - (2 << --i)) {
//        cout << "+";
//        p(n - (2 << i));
//    }
//}
//int main() {
//    int n;
//    while (cin >> n) {
//        p(n);
//        cout << endl;
//    }
//    return 0;
//}