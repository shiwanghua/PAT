//#include <iostream>
//#include <vector>
//#include <numeric>
//#include <limits>
//#include <map>
//using namespace std;
//
//
///*������������������ʵ����ĿҪ��Ĺ���
//��Ȼ����Ҳ���Բ������������ģ����������ȫ�����Լ����뷨�� ^-^
//******************************��ʼд����******************************/
//long countDolphin(int n, int m, vector < int > birthYear, int x) {
//    long sum = n;
//    vector < int > num(m+2);
//    num[0] = n;
//    for (int i = 1; i <= x; i++) {
//        num[m + 1] += num[m];
//        for (int j = m; j>0; --j)
//            num[j] = num[j - 1];
//        num[0] = 0;
//        for (int q = 0; q < birthYear.size(); q++)
//            num[0] += num[birthYear[q]];
//        sum += num[0];
//    }
//    return sum-num[m+1];
//}
///******************************����д����******************************/
//
////  63%  Bug: û�м�ȥ������
//int main() {
//    long res;
//
//    int _n;
//    cin >> _n;
//    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//
//
//    int _m;
//    cin >> _m;
//    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//
//
//    int _birthYear_size = 0;
//    cin >> _birthYear_size;
//    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//    vector<int> _birthYear;
//    int _birthYear_item;
//    for (int _birthYear_i = 0; _birthYear_i < _birthYear_size; _birthYear_i++) {
//        cin >> _birthYear_item;
//        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//        _birthYear.push_back(_birthYear_item);
//    }
//
//
//    int _x;
//    cin >> _x;
//    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//
//
//
//    res = countDolphin(_n, _m, _birthYear, _x);
//    cout << res;
//
//    return 0;
//
//}
