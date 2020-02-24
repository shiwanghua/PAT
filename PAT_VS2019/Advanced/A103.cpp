//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <vector>
//#include<cmath>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//vector<int> power, ans, temp;
//int n, k, p, maxSumFac=0;
//void DFS(int index, int nowK, int sum, int sumFac) {
//	if (sum == n && nowK == k) {  
//		if (sumFac > maxSumFac)  //  Bug: 两个if不能合并成一个if，因为有return
//		{
//			ans = temp;
//			maxSumFac = sumFac;
//		}
//		return;  // Bug3：sum<n 且 nowK等于k时也可以return了，这里不影响通过测试，可以把sum==n移到里面的if里 或者在下面的if里加 nowK>=k
//	}
//	if (nowK > k || sum > n) return;   //  进行了错误的压栈，现在才返回，减慢了运行速度，可以在递归调用DFS时判断
//	if (index >= 1) {
//		temp.push_back(index);
//		DFS(index, nowK + 1, sum + power[index], sumFac + index);
//		temp.pop_back();
//		DFS(index - 1, nowK, sum, sumFac);  //Bug2: 本来这行前面后面把index-1 push和pop了一遍
//	}
//}
//
//int main()
//{
//	cin >> n >> k >> p;
//	int t1 = 0, t2 =pow(double(t1++), double(p));
//	while (t2<=n) {
//		power.push_back(t2);
//		t2 = pow(double(t1++), double(p));
//	}
//	DFS(power.size() - 1, 0, 0, 0);
//	if (maxSumFac == 0) {
//		cout << "Impossible";
//		return 0;
//	}
//	printf("%d = %d^%d", n,ans[0],p);
//	_for(1, ans.size())
//		printf(" + %d^%d", ans[i], p);
//	return 0;
//}