////#include<iostream>
////#include<string>
////#include<iomanip>
////#include<cmath>
////using namespace std;
////void getRight(int& a, int& b) {
////    if (a <= 0 && b <= 0) a = 0;
////    else if (b <= 0) return;
////    else if (a <= 0) a = b;
////    else a = a - b;
////    return;
////}
////int getx2(string s) {
////    string q = "x^2";
////    int f = s.find(q);
////    if (f<0 || f>(int)s.length()) return -1;
////    if (f == 0 || s[f - 1] == '+') return 1;
////    return s[f - 1];
////}
////int getx1(string s) {
////    for (int i = 0; i < (int)s.length(); i++)
////        if (s[i] == 'x') {
////            if (i == 0 && (s.length() == 1 || s[1] == '+')) return 1;
////            else if (i == 0 || s[i + 1] == '^') continue;
////            if (s[i - 1] == '+') return 1;
////            return s[i - 1] - '0';
////        }
////    return -1;
////}
////int getc(string s) {
////    for (int i = 0; i < (int)s.length(); i++)
////        if (isdigit(s[i]))
////        {
////            if (i + 1 == (int)s.length()) return s[i] - '0';
////            else if (s[i + 1] == '+') {
////                if (i == 0 || s[i - 1] == '+')
////                    return s[i] - '0';
////            }
////        }
////    return 0;
////}
//////  没做出来
////int main() {
////    string a; cin >> a;
////    float f1, f2;
////    int k1x2, k2x2, k1x1, k2x1, c1, c2, l = a.length(), ei = 0;
////    while (a[ei] != '=')ei++;
////    k1x2 = getx2(a.substr(0, ei));
////    k2x2 = getx2(a.substr(ei + 1, l - ei));
////    getRight(k1x2, k2x2);
////
////    k1x1 = getx1(a.substr(0, ei));
////    k2x1 = getx1(a.substr(ei + 1, l - ei));
////    getRight(k1x1, k2x1);
////
////    c1 = getc(a.substr(0, ei));
////    c2 = getc(a.substr(ei + 1, l - ei));
////    getRight(c1, c2);
////
////    float del = sqrt(k1x1 * k1x1 - 4 * k1x2 * c1);
////    f1 = (k1x1 + del) * (-1) / (2 * k1x2);
////    f2 = ((-1) * k1x1 + del) / (2 * k1x2);
////    cout << k1x2 << " " << k1x1 << " " << c1 << endl;
////    printf("%.2f %.2f", f1, f2);
////    return 0;
////}
//
//
//#include<iostream>
//#include<string>
//#include<iomanip>
//#include<cmath>
//using namespace std;
//
//int main() {
//    string s; cin >> s;
//    float f1, f2;
//    int a = 0, b = 0, c = 0, l = s.length();
//    int flag = 1, sign = 1;   //Bug:  不能设置成bool ！
//    for (int i = 0; i < l; i++) {
//        if (s[i] == '+')
//        {
//            sign = 1; i++;
//        }
//        else if (s[i] == '-')
//        {
//            sign = -1; i++;
//        }
//        else if (s[i] == '=')
//        {
//            flag = -1;  sign = 1; // Bug:  等于号后面要默认符号为正！而且这里不能 i++, 否则for后面又加一次，跳过了等号后面的负号 =-
//        }
//        int d = 0;
//        if (isdigit(s[i])) {
//            while (i < l && isdigit(s[i])) {
//                d = d * 10 + s[i] - '0';
//                i++;
//            }
//            if (i == l || s[i] != 'x')
//            {
//                c = c + flag * sign * d;
//                i--;   //  同样 for后面++抵消
//            }
//            else if (i == l - 1 || s[i + 1] != '^')
//                b = b + flag * sign * d;
//            else { a = a + flag * sign * d; i += 2; }  //Bug:  不要加三，for循环结束会加一
//        }
//        else if (s[i] == 'x') {
//            if (i == l - 1 || s[i + 1] != '^')
//                b = b + flag * sign;
//            else {
//                a = a + flag * sign; i += 2;
//            }
//        }
//    }
//   //cout << a << " " << b << " " << c << endl;
//    int de = b * b - 4 * a * c;
//    if (de < 0) {
//        cout << "No Solution";
//        return 0;
//    }
//    float del = sqrt(de);
//    f1 = (-b - del) / (2 * a);
//    f2 = (-b + del) / (2 * a);
//    if (f1 > f2)swap(f1, f2);
//    printf("%.2f %.2f", f1, f2);
//    return 0;
//}