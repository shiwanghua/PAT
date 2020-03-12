//#include<iostream>
//using namespace std;
//int q[6][6], a, b, c, d, cost = 0, state = 1, mincost = 9999999, v[6][6], nextstate, nextcost;
//void dfs(int nowa, int nowb, int nowcost, int nowstate) {
//    if (nowa == c && nowb == d) {
//        if (nowcost < mincost)
//            mincost = nowcost;
//        return;
//    }
//    // bug:  下面要用4个单独的if，不要else
//    if (v[nowa + 1][nowb] == 0 && nowa < c) { //  往下
//        v[nowa + 1][nowb] = 1;
//        nextcost = q[nowa + 1][nowb] * nowstate;
//        nextstate = nextcost % 4 + 1;
//        dfs(nowa + 1, nowb, nowcost + nextcost, nextstate);
//        v[nowa + 1][nowb] = 0;
//    }
//    if (nowb < d && v[nowa][nowb + 1] == 0) {
//        v[nowa][nowb + 1] = 1;
//        nextcost = q[nowa][nowb + 1] * nowstate;
//        nextstate = nextcost % 4 + 1;
//        dfs(nowa, nowb + 1, nowcost + nextcost, nextstate);
//        v[nowa][nowb + 1] = 0;
//    }
//    if (nowa > c&& v[nowa - 1][nowb] == 0) {
//        v[nowa - 1][nowb] = 1;
//        nextcost = q[nowa - 1][nowb] * nowstate;
//        nextstate = nextcost % 4 + 1;
//        dfs(nowa - 1, nowb, nowcost + nextcost, nextstate);
//        v[nowa - 1][nowb] = 0; //  写成了== 1 ， 检查了好久才查出来
//    }
//    if (nowb > d&& v[nowa][nowb - 1] == 0) {
//        v[nowa][nowb - 1] = 1;
//        nextcost = q[nowa][nowb - 1] * nowstate;
//        nextstate = nextcost % 4 + 1;
//        dfs(nowa, nowb - 1, nowcost + nextcost, nextstate);
//        v[nowa][nowb - 1] = 0;
//    }
//    return;
//}
//int main()
//{
//    for (int i = 0; i < 6; i++)
//        for (int j = 0; j < 6; j++)
//        {
//            cin >> q[i][j];
//            v[i][j] = 0;
//        }
//    cin >> a >> b >> c >> d;
//    v[a][b] = 1;
//    dfs(a, b, 0, 1);
//    cout << mincost;
//    return 0;
//}