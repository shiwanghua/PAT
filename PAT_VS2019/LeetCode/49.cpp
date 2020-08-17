//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <vector>
//#include <cmath>
//#include<set>
//#include<unordered_map>
//#include<queue>
//#include<stack>
//#include<algorithm>
//#define _for(i,a,b) for( int i=a; i<b; ++i)
//#define mfor(i,b,a) for(int i=b;i>=a;i--)
//
//using namespace std;
////  还有两个错
//class Solution {
//public:
//    vector<vector<string>> groupAnagrams(vector<string>& strs) {
//        vector<vector<string>> ans;
//        vector<vector<int>> cn;
//        unordered_map<string, bool> m;
//
//        for (int i = 0; i < strs.size(); i++) {
//            string s = strs[i];
//            vector<int> in(26, 0);
//            for (int j = 0; j < s.length(); j++)
//                in[s[j] - 'a'] += 1;
//            cn.push_back(in);
//        }
//        for (int i = 0; i < strs.size(); i++) {
//            if (m[strs[i]] == 0) {
//                m[strs[i]] = 1;
//                vector<string> v;
//                v.push_back(strs[i]);
//                for (int j = i + 1; j < strs.size(); j++) {
//                    if (m[strs[j]] == 0) {
//                        bool isSame = 1;
//                        for (int w = 0; w < 26; w++) {
//                            if (cn[i][w] != cn[j][w]) {
//                                isSame = 0;
//                                break;
//                            }
//                        }
//                        if (isSame)
//                        {
//                            v.push_back(strs[j]);
//                            m[strs[j]] = 1;
//                        }
//                    }
//                    if (strs[j] == strs[i])
//                        v.push_back(strs[j]);
//                }
//                ans.push_back(v);
//            }
//        }
//        return ans;
//    }
//};
//int main()
//{
//	int n;
//    Solution sol;
//    vector<string> a;
//    a.push_back("eat");
//    a.push_back("tea");
//    a.push_back("tan");
//    a.push_back("ate");
//    a.push_back("nat");
//    a.push_back("bat");
//    sol.groupAnagrams(a);
//	return 0;
//}