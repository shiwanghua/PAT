//#include<iostream>
//#include<string>
//#include<algorithm>
//
//using namespace std;
////  75%   20'
//int main() {
//	string num1, num2;
//	cin >> num1 >> num2;
//	reverse(num1.begin(),num1.end());
//	reverse(num2.begin(),num2.end());
//	string ans="";
//	int ia=0, ib = 0;
//	while (ia < num1.length() && num1[ia] != '.') ia++;
//	while (ib < num2.length() && num2[ib] != '.') ib++;
//	int a = 0, b = 0, ca = 0;
//	if (ia == num1.length()) {
//		if (ib != num2.length())
//		{
//			for (; b < ib; b++) {
//				if (num2[b] == '9') {
//					ans += '0' + ca;
//					ca = 1;
//				}
//				else {
//					ans += num2[b] + ca;
//					ca = 0;
//				}
//			}
//			b++;
//			ans += '.';
//		}
//	}
//	else {
//		if (ib == num2.length())
//		{
//			for (; a < ia; a++) {
//				if (num1[a] == '9') {
//					ans += '0' + ca; ca = 1;
//				}
//				else {
//					ans += num1[a] + ca; ca = 0;
//				}
//			}
//			a++;
//		}
//		else {  //  都有小数点
//			if (ib > ia) {
//				string c = num1; num1 = num2;
//				num2 = c;
//				int C = ib; ib = ia;
//				ia = C;
//			}
//			for (; a < ia - ib; a++) {
//				if (num1[a] == '9') {
//					ans += '0' + ca; ca = 1;
//				}
//				else {
//					ans += num1[a] + ca; ca = 0;
//				}
//			}
//			for (; a < ia; a++,b++) {
//				int sum = num1[a] - '0' + num2[b] - '0' + ca;
//				ca = sum / 9;
//				ans += sum % 9 + '0';
//			}
//			a++; b++;
//		}
//		ans += '.';
//	}
//
//	while (a < num1.length() && b < num2.length()) {
//		int sum = num1[a] - '0' + num2[b] - '0' + ca;
//		ca = sum / 9;
//		ans += sum % 9 + '0';
//		a++; b++;
//	}
//	while (a < num1.length()) ans += num1[a++];
//	while (b < num2.length()) ans += num2[b++];
//	reverse(ans.begin(), ans.end());
//	cout << ans;
//	return 0;
//}