//#include<iostream>
//#include<string>
//#include<iomanip>
//#include<cmath>
//using namespace std;
//void getRight(int& a, int& b) {
//    if (a <= 0 && b <= 0) a = 0;
//    else if (b <= 0) return;
//    else if (a <= 0) a = b;
//    else a = a - b;
//    return;
//}
//int getx2(string s) {
//    string q = "x^2";
//    int f = s.find(q);
//    if (f<0 || f>(int)s.length()) return -1;
//    if (f == 0 || s[f - 1] == '+') return 1;
//    return s[f - 1];
//}
//int getx1(string s) {
//    for (int i = 0; i < (int)s.length(); i++)
//        if (s[i] == 'x') {
//            if (i == 0 && (s.length() == 1 || s[1] == '+')) return 1;
//            else if (i == 0 || s[i + 1] == '^') continue;
//            if (s[i - 1] == '+') return 1;
//            return s[i - 1] - '0';
//        }
//    return -1;
//}
//int getc(string s) {
//    for (int i = 0; i < (int)s.length(); i++)
//        if (isdigit(s[i]))
//        {
//            if (i + 1 == (int)s.length()) return s[i] - '0';
//            else if (s[i + 1] == '+') {
//                if (i == 0 || s[i - 1] == '+')
//                    return s[i] - '0';
//            }
//        }
//    return 0;
//}
////  没做出来
//int main() {
//    string a; cin >> a;
//    float f1, f2;
//    int k1x2, k2x2, k1x1, k2x1, c1, c2, l = a.length(), ei = 0;
//    while (a[ei] != '=')ei++;
//    k1x2 = getx2(a.substr(0, ei));
//    k2x2 = getx2(a.substr(ei + 1, l - ei));
//    getRight(k1x2, k2x2);
//
//    k1x1 = getx1(a.substr(0, ei));
//    k2x1 = getx1(a.substr(ei + 1, l - ei));
//    getRight(k1x1, k2x1);
//
//    c1 = getc(a.substr(0, ei));
//    c2 = getc(a.substr(ei + 1, l - ei));
//    getRight(c1, c2);
//
//    float del = sqrt(k1x1 * k1x1 - 4 * k1x2 * c1);
//    f1 = (k1x1 + del) * (-1) / (2 * k1x2);
//    f2 = ((-1) * k1x1 + del) / (2 * k1x2);
//    cout << k1x2 << " " << k1x1 << " " << c1 << endl;
//    printf("%.2f %.2f", f1, f2);
//    return 0;
//}