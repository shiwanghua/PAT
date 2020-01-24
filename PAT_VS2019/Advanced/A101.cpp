//#include<iostream>
//#include <vector>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//int main()
//{
//	int n, num = 0; cin >> n;
//	int* q = new int[n];
//	vector<int> ans;
//	_for(0, n) cin >> q[i];
//	bool is;
//	_for(0, n)
//	{
//		is = true;
//		for(int j=0;j<i;j++)
//			if (q[j] > q[i])
//			{
//				is = false;
//				break;
//			}
//		if(is) for(int j=i+1;j<n;j++)
//			if (q[j] < q[i])
//			{
//				is = false;
//				break;
//			}
//		if (is) ans.push_back(q[i]);
//	}
//	sort(ans.begin(),ans.end());
//	cout << ans.size() << endl;
//	if (ans.size() == 0) {
//		cout << endl;
//		return 0;
//	}
//	_for(0,ans.size()-1)
//		cout << ans[i] << " ";
//	if(ans.size()>0) cout << ans[ans.size() - 1];
//
//	//int* maxl = new int[n], * minr = new int[n], max = -1, min = 999999999;
//	//_for(0, n)
//	//{
//	//	if (q[i] > max)
//	//		maxl[i] = max = q[i];
//	//	else maxl[i] = max;
//	//}
//	//for(int i=n-1; i>=0;i--)
//	//{
//	//	if (q[i] < min)
//	//		minr[i] = min = q[i];
//	//	else minr[i] = min;
//	//}
//	//_for(1, n-1)
//	//{
//	//	if (q[i] > maxl[i - 1] && q[i] < minr[i + 1])  //   答案里的maxl[i]指i左边的数的最大值，不包括i位置
//	//		ans.push_back(q[i]);
//	//}
//	//if (q[0] < minr[1])
//	//	ans.push_back(q[0]);
//	//if (q[n - 1] > maxl[n - 2])
//	//	ans.push_back(q[n - 1]);
//	//sort(ans.begin(), ans.end());
//	//cout << ans.size() << endl;
//	//if (ans.size() == 0)           //        这段if检查了几小时，为0时下面的for循环里size()返回无符号数，-1后出现段错误
//	//{
//	//	cout << endl;
//	//	return 0;
//	//}
//	//_for(0, ans.size() - 1)
//	//	cout << ans[i] << " ";
//	//if (ans.size() > 0) cout << ans[ans.size() - 1];
//	return 0;
//}