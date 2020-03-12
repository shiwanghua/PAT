//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <vector>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//int main()
//{
//	int n, t, stack[100000], size = 0, blockNum[316] = { 0 }, hashNum[100000] = { 0 }; cin >> n;
//	string s;
//	while (n--) {
//		cin >> s;
//		if (s[1] == 'o')
//		{
//			if(size==0)
//			cout << "Invalid\n";
//			else
//			{
//				cout << stack[--size] << endl;
//				hashNum[stack[size]]--;
//				blockNum[stack[size] / 316]--;
//			}
//		}
//		else if (s[1] == 'u')
//		{
//			cin >> t;
//			stack[size++] = t;
//			hashNum[t]++;
//			blockNum[t / 316]++;
//		}
//		else {
//			if (size == 0) { 
//				cout << "Invalid\n"; continue;
//			}
//			else if (size % 2 == 0)
//				t = size / 2;
//			else t = size / 2 + 1;
//
//			int i = 0, num = 0;
//			while (num + blockNum[i] < t) num += blockNum[i++];
//			i = i * 316;
//			while (num + hashNum[i] < t) num += hashNum[i++];
//			cout << i << endl;
//
//
//		}
//	}
//
//	return 0;
//}