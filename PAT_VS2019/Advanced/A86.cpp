//#include<iostream>
//#include<string>
//#include <stack>
//#include <vector>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//int pre[30], in[30];
//stack<int> ans;
//void post(int inl, int inr, int prel, int prer) {
//	if (inl > inr) return;
//	ans.push(pre[prel]);
//	int i = inl;
//	while (i < inr && in[i] != pre[prel]) i++;
//	int leftNum = i - inl;
//	post(i + 1, inr, prel + 1 + leftNum,prer);
//	post(inl, i - 1, prel + 1, prel + leftNum);
//}
//int main()
//{
//	int n,i_in=0,i_pre=0; cin >> n;
//	string t;
//	stack<int> st;
//	_for(0, 2*n) {  //  Bug: 应该有2n行而不是n
//		cin >> t;
//		if (t == "Push") {
//			cin >> pre[i_pre];
//			st.push(pre[i_pre++]);
//		}
//		else {
//			in[i_in++] = st.top();
//			st.pop();
//		}
//	}
//	post(0,n-1,0,n-1);
//	for (int j = 0; j < n - 1; j++) {
//		cout << ans.top() << " ";
//		ans.pop();
//	}
//	cout << ans.top();
//	return 0;
//}