//#include<iostream>
//#include <vector>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//int n, bst[2004], temp = 1, input[2004];
//void inO(int index) {
//	if (index > n) return;
//	inO(2 * index);
//	bst[index] = input[temp++];
//	inO(2 * index + 1);
//	return;
//}
//int main()
//{
//	cin >> n;
//	_for(1, n + 1)  cin >> input[i];
//	sort(input + 1, input + 1 + n);
//	inO(1);
//	_for(1, n) cout << bst[i] << " ";
//	cout << bst[n];
//
//
//	return 0;
//}