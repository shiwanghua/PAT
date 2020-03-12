//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//bool isp(string a) {
//	string b = a;
//	reverse(a.begin(), a.end());
//	if (a == b) return 1;
//	return 0;
//}
//string plusab(string a, string b) {
//	string c;
//	reverse(a.begin(), a.end());
//	reverse(b.begin(), b.end());
//	if (a.length() < b.length()) {
//		c = a; a = b; b = c;
//	}
//	c = "";
//	int k = 0, q = 0;
//	for (; q < b.length(); q++)
//	{
//		k += a[q] - '0' + b[q] - '0';
//		c += to_string(k % 10);
//		k = k / 10;
//	}
//	for (; q < a.length(); q++) {
//		k += a[q] - '0';
//		c += to_string(k % 10);
//		k /= 10;
//	}
//	if (k > 0) c += to_string(k);
//	reverse(c.begin(), c.end());
//	return c;
//}
//int main()
//{
//	string a, b, c; int time = 0;
//	cin >> a;
//	while (time < 10) {
//		if (isp(a))
//			break;
//		b = a;
//		reverse(b.begin(), b.end());
//		c = plusab(a, b);
//		cout << a << " + " << b << " = " << c << endl;
//		a = c;
//		time++;
//	}
//	if (isp(a))
//		cout << a << " is a palindromic number.\n";
//	else  cout << "Not found in 10 iterations.";
//	return 0;
//}