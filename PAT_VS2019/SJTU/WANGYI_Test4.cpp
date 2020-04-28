//#include<iostream>
//#include<algorithm>
//using namespace std;
//class Solution {
//public:
//    /**
//     *
//     * @param boxes int整型二维数组
//     * @param boxesRowLen int boxes数组行数
//     * @param boxesColLen int* boxes数组列数
//     * @return int整型
//     */
//    struct box {
//        int l, w, h;
//    }b[100];
//    static bool cmp(box b1, box b2) {
//        if (b1.l != b2.l) return b1.l < b2.l;
//        else if (b1.w != b2.w) return b1.w < b2.w;
//        else return b1.h < b2.h;
//    }
//    bool vis[100] = { 0 };
//    int n, mink;
//    bool fit(box b1, box b2) {
//        if (b1.w < b2.w && b1.h < b2.h) return true;
//        return false;
//    }
//    void dfs(int i, int k) {
//        if (k < mink) mink = k;
//        if (i == n) return;
//        vis[i] = 1;
//        for (int j = i + 1; j < n; j++) {
//            if (fit(b[i], b[j]) && vis[j] == 0)
//                dfs(j, k - 1);
//        }
//        vis[i] = 0;
//    }
// 
//    //  30%   35'
//    int maxBoxes(int** boxes, int boxesRowLen, int* boxesColLen) {
//        // write code here
//        for (int i = 0; i < boxesRowLen; i++) {
//            b[i].l = boxes[i][0];
//            b[i].w = boxes[i][1];
//            b[i].h = boxes[i][2];
//        }
//        sort(b, b + boxesRowLen, cmp);
//        mink = boxesRowLen;
//        n = boxesRowLen;
//        for (int i = 0; i < n; i++)
//            dfs(i, n);
//        return mink;
//    }
//};