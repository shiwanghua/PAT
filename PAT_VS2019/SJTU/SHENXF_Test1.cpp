//#include<iostream>
//#include<vector>
//using namespace std;
//int main() {
//    int n, x, t1, t2, out = 0; cin >> n >> x;
//    vector<int> ca, pu;
//    for (int i = 0; i < n; i++) {
//        cin >> t1 >> t2;
//        ca.push_back(t1);
//        pu.push_back(t2);
//    }
//    int ans = 0;
//    for (int i = n - 1; i >= 0; i--) {
//        ca[i] += pu[i];
//        if (ca[i] < x) continue;
//        int more = ca[i] - x;
//        ca[i] = x;
//        for (int j = i + 1; j < n; j++)
//            if (ca[j] == x) continue;
//            else if (ca[j] + more <= x)
//            {
//                ca[j] += more;
//                more = 0;
//                break;
//            }
//            else {
//                more = more - (x - ca[j]);
//                ca[j] = x;
//            }
//        ans += more;
//    }
//    cout << ans;
//    return 0;
//}



