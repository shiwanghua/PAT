#include<iostream>
#include<string>
#include<cstdio>
#include <iomanip>
#include <vector>
#include<cmath>
#include<map>
#include<algorithm>
#include<stdlib.h>

#define _for(a,b) for( int i=(a); i<(b); ++i)
#define __for(i,a,b) for( int i=(a); i<=(b); ++i)

using namespace std;
//map<pair<int, int>, vector<string>> mpv;
//
//  ��Kλ�����ɺ�k��1���ַ����ļ���
//vector<string> SubsetCodeGeneration(int k, int K) {      
//	if (k == 0) return { string(K,'0') };
//	if (mpv.count(make_pair(k, K))) return mpv[make_pair(k, K)];
//	vector<string> strSet;
//	for (int i = k; i <= K; i++)  //  ֻ��ǰ i λ��1�ҵ� i λ������1
//	{
//		string highStr = string(K - i,'0') + "1";
//		  ��ǰi-1λ�����ɺ�k-1��1���ַ����ļ���
//		vector<string> lowPart = SubsetCodeGeneration(k - 1, i - 1);    
//		mpv[make_pair(k - 1, i - 1)] = lowPart;
//		for (auto& item : lowPart)
//			strSet.push_back(highStr + item);
//	}
//	return strSet;
//}
//
//void CodeTransfer(vector<string> subset) {
//	int K = subset[0].size();
//	vector <vector<int>> set_subno(K);  // �ڶ��㼯���д�����Щsubno
//	for (int subno = 0; subno < subset.size(); subno++) {
//		for (int setno = 0; setno < subset[subno].size(); setno++) {
//			if (subset[subno][setno] == '1')
//				set_subno[K - 1 - setno].push_back(subno);
//		}
//	}  
//	cout << "\n\n  Machine Set:\n\n";
//	for (int s = 0; s < set_subno.size();s++) {
//		cout << "  Machine" << s << ": ";
//		for (auto& no : set_subno[s])
//			cout << no << " ";
//		cout << endl;
//	}
//	return;
//}
//
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
    int sumNumbers(TreeNode* root) {
        if (!root) return -1;
        if (!root->left && !root->right) return root->val;
        int v = root->val;
        int l = sumNumbers(root->left);
        int r = sumNumbers(root->right);
        if (l != -1) l += v * pow(10.0, double(l / 10 + 1.0));
        if (r != -1) r += v * pow(10.0, double(r / 10 + 1.0));
        return l + r;
    }
};
int main()
{
//	int k, K;
//	cout << "\n\n  k = ";
//	cin >> k;
//	cout << "  K = ";
//	cin >> K;
//	cout << "\n";
//	vector<string> subsetCode = SubsetCodeGeneration(k, K);
//	cout << "  subscription coding:\n\n";
//	for (int i=0;i< subsetCode.size();i++)
//		cout <<"  "<<i<<": "<< subsetCode[i] << endl;
//	CodeTransfer(subsetCode);
//	return 0;
//	
    Solution s;
    TreeNode* root=new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    cout << s.sumNumbers(root);
    delete root->left;
    delete root->right;
    delete root;
//	/*cout << "type: \t\t\t" << "************size**************" << endl;
//	cout << "short: \t\t\t" << "�ֽ�����" << sizeof(short) << endl;
//	cout << "���ֵ��" << (numeric_limits<short>::max)();
//	cout << "\t\t��Сֵ��" << (numeric_limits<short>::min)() << endl;
//	cout << "int: \t\t\t" << "�ֽ�����" << sizeof(int) << endl;
//	cout << "���ֵ��" << (numeric_limits<int>::max)();
//	cout << "\t��Сֵ��" << (numeric_limits<int>::min)() << endl;
//	cout << "unsigned: \t\t" << "�ֽ�����" << sizeof(unsigned) << endl;
//	cout << "���ֵ��" << (numeric_limits<unsigned>::max)();
//	cout << "\t��Сֵ��" << (numeric_limits<unsigned>::min)() << endl;
//	cout << "long: \t\t\t" << "�ֽ�����" << sizeof(long) << endl;
//	cout << "���ֵ��" << (numeric_limits<long>::max)();
//	cout << "\t��Сֵ��" << (numeric_limits<long>::min)() << endl;
//	cout << "unsigned long: \t\t" << "�ֽ�����" << sizeof(unsigned long) << endl;
//	cout << "���ֵ��" << (numeric_limits<unsigned long>::max)();
//	cout << "\t��Сֵ��" << (numeric_limits<unsigned long>::min)() << endl;
//	cout << "long long: \t\t" << "�ֽ�����" << sizeof(long long) << endl;
//	cout << "���ֵ��" << (numeric_limits<long long>::max)();
//	cout << "\t\t��Сֵ��" << (numeric_limits<long long>::min)() << endl;
//	cout << "unsigned long long: \t" << "�ֽ�����" << sizeof(unsigned long long) << endl;
//	cout << "���ֵ��" << (numeric_limits<unsigned long long>::max)();
//	cout << "\t\t��Сֵ��" << (numeric_limits<unsigned long long>::min)() << endl;
//	cout << "double: \t\t" << "�ֽ�����" << sizeof(double) << endl;
//	cout << "���ֵ��" << (numeric_limits<double>::max)();
//	cout << "\t��Сֵ��" << (numeric_limits<double>::min)() << endl;
//	cout << "long double: \t\t" << "�ֽ�����" << sizeof(long double) << endl;
//	cout << "���ֵ��" << (numeric_limits<long double>::max)();
//	cout << "\t��Сֵ��" << (numeric_limits<long double>::min)() << endl;
//	cout << "float: \t\t\t" << "�ֽ�����" << sizeof(float) << endl;
//	cout << "���ֵ��" << (numeric_limits<float>::max)();
//	cout << "\t��Сֵ��" << (numeric_limits<float>::min)() << endl;*/
//
	return 0;
}


