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
//		if (a[i] >= 0) isP = 1;  //  Bug: ��д�˸����ڣ�����
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
//	while (sum != dp[maxSumJ]) sum += a[--maxSumI];  // ������ʱ��maxSumIǰ�滹��һ�������еĺ�Ϊ0�����Ǿ����������ѭ������û����������
//	// while(i>=0) {
//	//     sum+=a[i];
//	//     if(sum==dp[maxSumJ]) maxSumI=i;
//	//     i--;
//	// }
//	cout << dp[maxSumJ] << " " << a[maxSumI] << " " << a[maxSumJ];
//	// cout<<dp[maxSumJ]<<" "<<a[s[maxSumJ]]<<" "<<a[maxSumJ]<<endl;
//	return 0;
//}