//#include<iostream>
//#include<stack>
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//int main()
//{
//	int m, n, k, t;
//	scanf("%d %d %d", &m, &n, &k);
//	while (k--)
//	{
//		bool is = 1;
//		int cap = 0, input = 1;
//		stack<int> s;
//		_for(1, n + 1)
//		{
//			cin >> t;
//			if (s.size() > 0 && s.top() == t) {
//				s.pop();
//				continue;
//			}
//			while (input != t && input <= n && s.size() < m - 1)s.push(input++); // Bug2: s的容量应该是小于m-1, 给input留个位置
//			if (input != t)
//				is = 0;
//			else input++;  //  Bug: input等于t时直接入栈出栈，需要加一
//		}
//		if (is) cout << "YES\n";
//		else cout << "NO\n";
//	}
//	return 0;
//}