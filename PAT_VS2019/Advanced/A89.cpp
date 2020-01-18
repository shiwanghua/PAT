//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <vector>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//bool isSame(int a[], int b[], int n)
//{
//	_for(0, n)
//		if (a[i] != b[i])
//			return false;
//	return true;
//}
//
//void merge(int a[], int i, int j, int k, int n)  //  归并 [i, i+k-1] [i+k, i+2*k -1] 
//{
//	int* q = new int[k];
//	for (int w = 0; w < k; w++)
//		q[w] = a[i + w];
//	int e = 0, r = j, l = min(j + k,n);
//	while (e < k && r < l)
//	{
//		if (q[e] > a[r])
//			a[i++] = a[r++];
//		else a[i++] = q[e++];
//	}
//	while (e < k) a[i++] = q[e++];
//	while (r < l)a[i++] = a[r++];
//}
//int main()
//{
//	int n; cin >> n;
//	int* a = new int[n], * m = new int[n], * b = new int[n];
//	_for(0, n)cin >> a[i];
//	_for(0, n)b[i] = a[i];
//	_for(0, n)cin >> m[i];
//
//	_for(1, n)
//	{
//		for (int j = i; j > 0; j--)
//		{
//			if (b[j] < b[j - 1]) swap(b[j], b[j - 1]);
//			else break;
//		}
//		if (isSame(b, m, n))
//		{
//			cout << "Insertion Sort" << endl;
//			for (int j = i+1; j > 0; j--)
//			{
//				if (b[j] < b[j - 1]) swap(b[j], b[j - 1]);
//				else break;
//			}
//			for (int j = 0; j < n - 1; j++)
//				cout << b[j] << " ";
//			cout << b[n - 1];
//			return 0;
//		}
//	}
//	cout << "Merge Sort\n";
//	for (int i = 1; i < n ; i = i * 2)   //   i 应该从1开始，不是从2开始
//	{
//		int p = 2 * i;
//		for (int j = 0; j < n-i; j+=p)
//			merge(a, j, j + i, i, n); 
//		if (isSame(a, m, n))
//		{
//			i = i * 2;
//			int p = 2 * i;
//			for (int j = 0; j < n - i; j += p)
//				merge(a, j, j + i, i, n);
//			for (int j = 0; j < n - 1; j++)
//				cout << a[j] << " ";
//			cout << a[n - 1];
//			return 0;
//
//		}
//	}
//	return 0;
//}