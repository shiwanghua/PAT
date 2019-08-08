//#include<iostream>
//#include<string>
//#include<memory.h>
//#include <iomanip>
//#include <vector>
//
//#define _for(i,a,b) for( int i=(a); i<(b); ++i)
//#define __for(i,a,b) for( int i=(a); i<=(b); ++i)
//
//using namespace std;
//
//int main13()
//{
//	int m, n;
//	cin >> m >> n;
//	int * prime = new int[n];   //  保存质数
//	memset(prime, -1, n * 4);
//	bool* isNotP = new bool[110000];   //  记录是否是质数  2--n
//	memset(isNotP, 0, 110000);
//
//	int num = 0; //  质数的个数
//	int i = 2;
//	int t;
//	while(num<n)
//	{
//		if (!isNotP[i])
//		{
//			prime[num++] = i;
//		}
//		_for(j, 0, num)
//		{
//			t = i * prime[j];
//			if (t < 110000 && t>0)
//				isNotP[t] = 1;
//			else break;
//			if (i % prime[j] == 0) break;
//		}
//		i++;
//	}
//
//	if (num == 0) return 0;
//	else if (num == 1)
//	{
//		cout << prime[0];
//		return 0;
//	}
//
//	int c = 0;
//	_for(p, m-1, n-1)
//	{
//			c++;
//			if (c == 10)
//			{
//				c = 0;
//				cout << prime[p];
//				cout << "\n";
//			}
//			else 
//				cout << prime[p] << " ";
//	}
//
//		cout << prime[n-1];
//	
//	return 0;
//}
//
