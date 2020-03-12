//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <cmath>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//int main()
//{
//	int n; cin >> n;
//	int* q = new int[n];
//	_for(0, n) cin >> q[i];
//	sort(q, q+n);
//	int m = sqrt(n);
//	while (n % m != 0 || n / m > m) m++;
//	int** w = new int* [m];
//	_for(0, m) w[i] = new int[n/m];
//	int dir[4] = { 0,m-1,0,n/m-1 }; //  上下左右的边界
//	int i = 0, j = 0, d = 0; // d==0往右移动，d==1 往下移，d==2 往左移动 ，d==3往上移动
//	for (int k = n-1; k>=0; k--) {
//		if (d == 0) {
//			if (j <= dir[3]) {
//				w[i][j] = q[k];
//				j++;
//			}
//			else { // 往下移动
//				w[++i][--j] = q[k];
//				d = 1;
//				dir[0] = i; //  上边界等于i
//				i++;   //  下次直接赋值
//			}
//		}
//		else if (d == 1) {
//			if (i <= dir[1]) {
//				w[i][j] = q[k];
//				i++;
//			}
//			else {//  往左移动
//				w[--i][--j] = q[k];
//				d = 2;
//				dir[3] = j;
//				j--;
//			}
//		}
//		else if (d == 2) {
//			if (j >= dir[2]) {
//				w[i][j] = q[k];
//				j--;
//			}
//			else { // 向上移动
//				w[--i][++j] = q[k];
//				d = 3;
//				dir[1] = i;
//				i--;
//			}
//		}
//		else if (d == 3) {
//			if (i >= dir[0]) {
//				w[i][j] = q[k];
//				i--;
//			}
//			else {//向右移动
//				w[++i][++j] = q[k];
//				d = 0;
//				dir[2] = j;
//				j++;
//			}
//		}
//	}
//	n = n / m-1;
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++)
//		{
//			cout << w[i][j] << " ";
//		}
//		cout << w[i][n] << endl;
//	}
//	return 0;
//}