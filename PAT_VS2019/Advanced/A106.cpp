//#include <iostream>
//#include <cmath>
//#include <vector>
//using namespace std;
//int n, mindepth = 100000, minnum = 0, temp, child;
//vector<int> v[100010];
//void dfs(int index, int depth) {
//    if (depth > mindepth) return;
//    if (v[index].size() == 0) {
//        if (mindepth == depth)
//            minnum++;
//        if (mindepth > depth) {
//            mindepth = depth;
//            minnum = 1;
//        }
//        return;
//    }
//    for (int i = 0; i < v[index].size(); i++)
//        dfs(v[index][i], depth + 1);
//}
//int main() {
//    double p, r;
//    scanf("%d %lf %lf", &n, &p, &r);
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &temp);
//        for (int j = 0; j < temp; j++) {
//            scanf("%d", &child);
//            v[i].push_back(child);
//        }
//    }
//    dfs(0, 0);
//    printf("%.4f %d", p * pow(1 + r / 100, mindepth), minnum);
//    return 0;
//}