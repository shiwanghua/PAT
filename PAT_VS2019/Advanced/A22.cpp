//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <map>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//typedef struct b {
//	string s[5];
//	//string t, a, k, p, y;
//};
//int main()
//{
//	int n,id,q,qt; cin >> n;
//	string temp;
//	map<int, b> m;
//	_for(0, n)
//	{
//		cin >> id;
//		getchar();
//		for (int j = 0; j < 5; j++)
//		{
//			getline(cin, temp);
//			m[id].s[j] = temp;
//		}
//	}
//	cin >> q;
//	while (q--)
//	{
//		bool f = 0;
//		scanf("%d: ", &qt);
//		getline(cin, temp);
//		printf("%d: %s\n", qt--, temp.c_str());
//		//cout << qt-- << ": " << temp << endl;
//		if (qt != 2)  // Bug1:  上面已经减去1，所以不是3是2
//			for (auto it : m)
//			{	if (it.second.s[qt] == temp)
//				{
//					//cout << it.first << endl;
//					printf("%07d\n", it.first);   //  Bug2: 7位数
//					f = 1;
//				}
//			}
//		else for (auto it : m)
//			{	
//			if (it.second.s[qt].find(temp)!=string::npos)
//				{
//				//cout << it.first << endl;
//				printf("%07d\n", it.first);
//					f = 1;
//				}
//			}
//		
//		if (!f) printf("Not Found\n");
//	}
//	return 0;
//}