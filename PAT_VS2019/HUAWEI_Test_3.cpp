//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <vector>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//// num[i]=max{num[i-1]+1,num[i-2]+1,num[i]}
//int main()
//{
//	string s;
//	cin >> s;
//	int len = s.length();
//	if (len == 1) return 1;
//	else if (len == 2) return 2;
//
//	int* num = new int[len];
//	_for(0, len) num[i] = 0;
//	
//	num[0] = 1;
//	num[1] = 2;
//	for (int i = 2; i <len; i++) {  //  判断每个s[i]是划分为1个值好还是与前面的值合在一起好
//		for (int j = len - 1; j >= i; j--)  // 处理包含s[i]的子字符串, 每个子字符串是s[0]-s[j]
//		{
//			int theLarger = num[i];
//			if (s[i - 1] <= '2' && s[i - 1] >= '0' ) // 如果两个字符编码比较好
//				theLarger = num[i - 2] + 1;
//			if (theLarger < num[i - 1]+1 )
//				theLarger = num[i - 1]+1;
//			num[i] = theLarger;
//		}
//	}
//	printf("%d", num[len - 1]);
//	return 0;
//}