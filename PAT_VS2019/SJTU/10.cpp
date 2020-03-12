//#include<iostream>
//#include<string>
//#include<iomanip>
//#include<algorithm>
//#include<vector>
//using namespace std;
//int main() {
//    int n;
//    while (cin >> n) {
//        vector<string> v(10);
//        for (int i = 0; i < n; i++) cin >> v[i];
//        sort(v.begin(), v.begin()+n);
//        for (int i = 0; i < n; i++) {
//            if (i > 0 && v[i][0] == v[i - 1][0]) {
//                string dir = "";
//                int cnt = 0, j;
//                for (j = 0; j < v[i].size(); j++) {
//                    if (v[i][j] == '\\')cnt++;
//                    if (j >= v[i - 1].size() || v[i][j] != v[i - 1][j]) {
//                        while (j > 0 && v[i][j - 1] != '\\')j--;
//                        break;
//                    }
//                }
//                for (; j < v[i].size(); j++) {
//                    while (j < v[i].size() && v[i][j] != '\\')dir += v[i][j++];
//                    cout << setw(2 * cnt) << setfill(' ') << "" << dir << endl;
//                    dir = ""; cnt++;
//                }
//            }
//            else {
//                string dir = "";
//                int cnt = 0;
//                for (int j = 0; j < v[i].size(); j++) {
//                    while (j<v[i].size()&&v[i][j] != '\\')dir += v[i][j++];
//                    cout << setw(cnt * 2) << setfill(' ') << "" << dir << endl;
//                    dir = ""; cnt++;
//                }
//
//            }
//        }
//
//    }
//    return 0;
//}