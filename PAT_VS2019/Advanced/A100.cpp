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
//// �����鷳
//// Bug: ����0��tret��ʾ
//int main()
//{
//	int n; cin >> n; getchar();  //  Bug:  û�ж�ȡ�س�����һ��getlineʱ��ȡ�˻س��ͽ�����
//	//scanf("%d\n", &n);
//	string s;
//	_for(0, n)
//	{
//		getline(cin, s);
//		if (isdigit(s[0]))
//		{
//			int num = stoi(s), u = 0;
//			string ans[20];
//			if (num == 0) {      // Bug:  ���⴦��0, ����˺þ�
//				cout << "tret\n";
//				continue;
//			}
//			if(num%13) //  ��λ��0����ʾ
//			ans[u++] = ge[num % 13];
//			num /= 13;
//			while (num) {
//				ans[u++] = high[num % 13];
//				num /= 13;
//			}
//			int j = u-1;
//			//while (ans[j] == ""&&j>0)j--;
//			cout << ans[j--];    //   �������һ���ǿ��ַ���
//			for (; j > -1; j--)
//				 cout << " " << ans[j];
//			cout << endl;
//		}
//		else {
//			unsigned int sum = 0, j = 0, num = 0, index;
//			bool ishigh = 0; // ���һλ�Ǹ�λ�ַ���ʱ���1  
//			while (j < s.length()) {
//				int J = j;
//				num = 0;
//				while (j <s.length() && s[j] != ' ') {
//					j++;
//					num++;
//				}
//				string d = s.substr(J, num);
//				if (j < s.length()||s[j]==' ')  //  �������һλ��s[j]�ǿո�
//				{
//					for (int k = 0; k < 13; k++)
//					{
//						if (high[k] == d) {
//							index = k;
//							break;
//						}
//					}
//					j++;  //  ��ֹ�´�while s[j]���� �� �� ������ѭ��
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
//				if (ishigh) // ���һλ�Ǹ�λ
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
//				sum = sum*13+index; //��λ
//			}
//			cout << sum << endl;
//		}
//	}
//	return 0;
//}