//#include<iostream>
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//int main()
//{
//	int n; cin >> n;
//	bool isP = 0;
//	int* a = new int[n], * dp = new int[n], * s = new int[n];
//	_for(0, n) {
//		cin >> a[i];
//		if (a[i] >= 0) isP = 1;  //  Bug: 少写了个等于！！！
//	}
//	if (isP == 0) {
//		cout << "0 " << a[0] << " " << a[n - 1] << endl;
//		return 0;
//	}
//	dp[0] = a[0];
//	_for(1, n) {
//		if (dp[i - 1] > 0) {
//			dp[i] = dp[i - 1] + a[i];
//			//s[i]=s[i-1];
//		}
//		else {
//			dp[i] = a[i]; // s[i]=i;}
//		}
//	}
//	int maxSumJ = 0;
//	_for(1, n)
//		if (dp[maxSumJ] < dp[i])
//			maxSumJ = i;
//	int maxSumI = maxSumJ, sum = a[maxSumJ], i = maxSumJ - 1;
//	while (sum != dp[maxSumJ]) sum += a[--maxSumI];  // 可能这时的maxSumI前面还有一段子序列的和为0，于是就有了下面的循环，但没有这种用例
//	// while(i>=0) {
//	//     sum+=a[i];
//	//     if(sum==dp[maxSumJ]) maxSumI=i;
//	//     i--;
//	// }
//	cout << dp[maxSumJ] << " " << a[maxSumI] << " " << a[maxSumJ];
//	// cout<<dp[maxSumJ]<<" "<<a[s[maxSumJ]]<<" "<<a[maxSumJ]<<endl;
//	return 0;
//}