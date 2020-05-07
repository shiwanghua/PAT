//#include<iostream>    
//
//using namespace std;
//
//#define MAXN 100    
//#define MAXIND 256 //线段树节点个数    
//
////构建线段树,目的:得到M数组.    
//void build(int node, int b, int e, int M[], int A[])
//{
//    if (b == e)
//        M[node] = b; //只有一个元素,只有一个下标    
//    else
//    {
//        build(2 * node, b, (b + e) / 2, M, A);
//        build(2 * node + 1, (b + e) / 2 + 1, e, M, A);
//
//        if (A[M[2 * node]] <= A[M[2 * node + 1]])
//            M[node] = M[2 * node];
//        else
//            M[node] = M[2 * node + 1];
//    }
//}
//
////找出区间 [i, j] 上的最小值的索引    
//int query(int node, int b, int e, int M[], int A[], int i, int j)
//{
//    int p1, p2;
//
//    //查询区间和要求的区间没有交集    
//    if (i > e || j < b)
//        return -1;
//
//    if (b >= i && e <= j)
//        return M[node];
//
//    p1 = query(2 * node, b, (b + e) / 2, M, A, i, j);
//    p2 = query(2 * node + 1, (b + e) / 2 + 1, e, M, A, i, j);
//
//    //return the position where the overall    
//    //minimum is    
//    if (p1 == -1)
//        return M[node] = p2;
//    if (p2 == -1)
//        return M[node] = p1;
//    if (A[p1] <= A[p2])
//        return M[node] = p1;
//    return M[node] = p2;
//
//}
//
//int main()
//{
//    int M[MAXIND]; //下标1起才有意义,否则不是二叉树,保存下标编号节点对应区间最小值的下标.    
//    memset(M, -1, sizeof(M));
//    int a[] = { 3,4,5,7,2,1,0,3,4,5 };
//    build(1, 0, sizeof(a) / sizeof(a[0]) - 1, M, a);
//    cout << query(1, 0, sizeof(a) / sizeof(a[0]) - 1, M, a, 0, 7) << endl;
//    return 0;
//}

////https://blog.csdn.net/weixin_37282581/article/details/77793418
//#include <cstdio>    
//#include <algorithm>    
//using namespace std;
//
//#define lson l , m , rt << 1    
//#define rson m + 1 , r , rt << 1 | 1   
//#define root 1 , N , 1   
//#define LL long long    
//const int maxn = 111111;
//LL add[maxn << 2];
//LL sum[maxn << 2];
//void PushUp(int rt) {
//    sum[rt] = sum[rt << 1] + sum[rt << 1 | 1];
//}
//void PushDown(int rt, int m) {
//    if (add[rt]) {
//        add[rt << 1] += add[rt];
//        add[rt << 1 | 1] += add[rt];
//        sum[rt << 1] += add[rt] * (m - (m >> 1));
//        sum[rt << 1 | 1] += add[rt] * (m >> 1);
//        add[rt] = 0;
//    }
//}
//void build(int l, int r, int rt) {
//    add[rt] = 0;
//    if (l == r) {
//        scanf("%lld", &sum[rt]);
//        return;
//    }
//    int m = (l + r) >> 1;
//    build(lson);
//    build(rson);
//    PushUp(rt);
//}
//void update(int L, int R, int c, int l, int r, int rt) {
//    if (L <= l && r <= R) {
//        add[rt] += c;
//        sum[rt] += (LL)c * (r - l + 1);
//        return;
//    }
//    PushDown(rt, r - l + 1);
//    int m = (l + r) >> 1;
//    if (L <= m) update(L, R, c, lson);
//    if (m < R) update(L, R, c, rson);
//    PushUp(rt);
//}
//LL query(int L, int R, int l, int r, int rt) {
//    if (L <= l && r <= R) {
//        return sum[rt];
//    }
//    PushDown(rt, r - l + 1);
//    int m = (l + r) >> 1;
//    LL ret = 0;
//    if (L <= m) ret += query(L, R, lson);
//    if (m < R) ret += query(L, R, rson);
//    return ret;
//}
//int main() {
//    int N, Q;
//    scanf("%d%d", &N, &Q);
//    build(root);
//    while (Q--) {
//        char op[2];
//        int a, b, c;
//        scanf("%s", op);
//        if (op[0] == 'Q') {
//            scanf("%d%d", &a, &b);
//            printf("%lld\n", query(a, b, root));
//        }
//        else {
//            scanf("%d%d%d", &a, &b, &c);
//            update(a, b, c, root);
//        }
//    }
//    return 0;
//}