//#include<iostream>
//#include<string>
//#include <vector>
//#include<algorithm>
//
//using namespace std;
//
//int main()
//{
//	int j=0;
//	string a, b;
//	cin >> a >> b;
//	vector<char> con;
//	for (int i = 0; i < a.length(); i++)
//		a[i] = toupper(a[i]);
//	for (int i = 0; i < b.length(); i++)
//		b[i] = toupper(b[i]);
//
//	for (int i = 0; i < a.length(); )
//	{
//		while (a[i] != b[j] && i < a.length())
//			if (count(con.begin(), con.end(), a[i]) == 0)  // 如果不存在
//				con.push_back(a[i++]);
//			else i++;
//		i++; j++;
//		if (j == b.length())
//			while (i < a.length())
//				if (count(con.begin(), con.end(), a[i]) == 0)
//					con.push_back(a[i++]);
//				else i++;
//	}
//	// Bug: 这种方法会打乱顺序
//	//sort(con.begin(), con.end());
//	//auto it = unique(con.begin(), con.end());
//	//con.erase(it, con.end()); // 删除重复元素
//	for (auto it : con)
//		cout << it;
//	return 0;
//}