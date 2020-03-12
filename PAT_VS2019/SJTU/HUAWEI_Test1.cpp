//#include<iostream>
//#include<string>
//#include <vector>
//#include<algorithm>
//using namespace std;
//
////bool in = 0;//  进入一个带双引号或逗号的字段
//string input = "", temp, ans = "";
//int num = 0, len;
//char c;
//bool check = 1;
//string have = "!@#$%^&*() ";
//bool checkPart(int i) {
//	if (input[i] != ',') return 1;
//	if ((i < len - 1 && input[i + 1] == ' ') || (i > 0 && input[i - 1] == ' '))
//		return 0;
//	return 1;
//}
//// 表格数据分析
//int main()
//{
//	getline(cin, input);
//	len = input.length();
//	for (int i = 0; i < len; i++) {
//		if (have.find(input[i], 0) == string::npos && !isalnum(input[i])) {
//			check = 0; break;
//		}
//		temp = "\n";
//		if (input[i] == ',') {
//			if (!checkPart(i)) { check = 0; break; }
//			ans += "\n--"; num++;
//			continue;
//		}
//		if (input[i] == '"') { //  处理带双引号字段
//			int iout = input.find("\",", i);
//			if (!checkPart(iout + 1)) { check = 0; break; }
//			if (iout == string::npos) iout = len - 1;
//			if (iout == i + 1) { ans += "\n--"; num++;  continue; }  // 两个双引号形成的空字段
//			for (int j = i + 1; j < iout; j++) {
//				if (input[j] != '\"') temp += input[j];
//				else
//					temp += input[j++];
//			}
//			ans += temp; num++;
//			i = iout + 1;
//		}
//		else {
//			int iout = input.find(',', i);
//			if (!checkPart(iout)) { check = 0; break; }
//			if (iout == string::npos) iout = len;
//			ans += "\n" + input.substr(i, iout - i);
//			num++;
//			i = iout;
//		}
//	}
//	if (!check) {
//		cout << "ERROR"; return 0;
//	}
//	if (input[len - 1] == ',') { ans += "\n--"; num++; }
//	cout << num << ans;
//
//	return 0;
//}
