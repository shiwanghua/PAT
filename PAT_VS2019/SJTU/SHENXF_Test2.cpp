//#include<iostream>
//#define _for(i,a,b) for( int i=a; i<b; ++i)
//using namespace std;
//int main()
//{
//	int n, m, k = 0, h[1001], index = 1; cin >> n >> m;
//	_for(i, 0, 1001) h[i] = 1;
//	_for(i, 1, n) {  //  出来n-1个人
//		k = 0;
//		while (k < m) {  //  ||(index-1)%10==m
// 			while (h[index] == 0) {
//				index++;
//				if (index > n) index = 1;
//			}
//			k++;
//			index++;
//			if (index > n) index = 1;
//		}
//		if (index == 1) h[n] = 0;
//		else h[index - 1] = 0;
//	}
//	_for(i, 1, n + 1)
//		if (h[i]) {
//			cout << i;
//			break;
//		}
//	return 0;
//}