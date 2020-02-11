//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <vector>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//string ge[13] = { "tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec" };
//string high[13] = { "tret","tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou" };
//// 方法麻烦
//// Bug: 忘了0用tret表示
//int main()
//{
//	int n; cin >> n; getchar();  //  Bug:  没有读取回车，下一行getline时读取了回车就结束了
//	//scanf("%d\n", &n);
//	string s;
//	_for(0, n)
//	{
//		getline(cin, s);
//		if (isdigit(s[0]))
//		{
//			int num = stoi(s), u = 0;
//			string ans[20];
//			if (num == 0) {      // Bug:  额外处理0, 检查了好久
//				cout << "tret\n";
//				continue;
//			}
//			if(num%13) //  个位的0不显示
//			ans[u++] = ge[num % 13];
//			num /= 13;
//			while (num) {
//				ans[u++] = high[num % 13];
//				num /= 13;
//			}
//			int j = u-1;
//			//while (ans[j] == ""&&j>0)j--;
//			cout << ans[j--];    //   先输出第一个非空字符串
//			for (; j > -1; j--)
//				 cout << " " << ans[j];
//			cout << endl;
//		}
//		else {
//			unsigned int sum = 0, j = 0, num = 0, index;
//			bool ishigh = 0; // 最后一位是高位字符串时设成1  
//			while (j < s.length()) {
//				int J = j;
//				num = 0;
//				while (j <s.length() && s[j] != ' ') {
//					j++;
//					num++;
//				}
//				string d = s.substr(J, num);
//				if (j < s.length()||s[j]==' ')  //  不是最后一位，s[j]是空格
//				{
//					for (int k = 0; k < 13; k++)
//					{
//						if (high[k] == d) {
//							index = k;
//							break;
//						}
//					}
//					j++;  //  防止下次while s[j]还是 ‘ ’ 导致死循环
//				}
//				else for (int k = 0; k < 13; k++)
//				{
//					if (ge[k] == d) {
//						index = k;
//						ishigh = 0;
//						break;
//					}
//					else ishigh = 1;
//				}
//
//				if (ishigh) // 最后一位是高位
//				{
//					for (int k = 0; k < 13; k++)
//					{
//						if (high[k] == d) {
//							index = k;
//							break;
//						}
//					}
//					sum = (sum*13+index) * 13;
//				}
//				else
//				sum = sum*13+index; //个位
//			}
//			cout << sum << endl;
//		}
//	}
//	return 0;
//}