#include <iostream>
#include <string>
#include <vector>
using namespace std;
string num[10] = { "ling","yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu" };
string c[6] = { "Ge","Shi", "Bai", "Qian", "Yi", "Wan" };
int J[] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000};
vector<string> res;
int main() {
    int n;
    cin >> n;
    if (n == 0) {
        cout << "ling";
        return 0;
    }
    if (n < 0) {
        cout << "Fu ";
        n = -n;
    }
    int part[3];
    part[0]= n / 100000000; //  几个亿（第9位）
    part[1]= (n % 100000000) / 10000; // 几个万，第5-8位
    part[2] = n % 10000;    // 后四位
    bool zero = false; //是否在非零数字前输出合适的ling
    int printCnt = 0; //用于维护单词前没有空格，除了第一个非0数字，之后输入的单词都在前面加一个空格。
    for (int i = 0; i < 3; i++) {
        int temp = part[i]; //三个部分，每部分内部的命名规则都一样，都是X千X百X十X 四位
        for (int j = 3; j >= 0; j--) {  // 三四一十二轮，取9-11时不算，一共9轮
            int curPos = 8 - i * 4 + j; //当前数字的位置，依次取 876543210
            if (curPos >= 9) continue;  //最多九位数
            int cur = (temp / J[j]) % 10;//取出当前数字，当是亿位时temp==cur
            if (cur != 0) //当上亿时，当没上亿时，直接进入i=1,j=3的循环
            { 
                if (zero) { //cur前面有0
                    printCnt++ == 0 ? cout<<"ling" : cout<<" ling";  // 这里不需要第一种情况，ling前面一定有空格 printCnt++; cout<<" ling";  
                    zero = false; //这4轮里只输出一个0
                }

                if (j == 0)
                    printCnt++ == 0 ? cout << num[cur] : cout << ' ' << num[cur]; //在个位，直接输出
                else                             
                    printCnt++ == 0 ? cout << num[cur] << ' ' << c[j] : cout << ' ' << num[cur] << ' ' << c[j]; //在其他位，还要输出十百千
            } 
            else if (!zero&&j != 0 && n / J[curPos] >= 10) zero = true;   //注意100020这样的情况，第亿8、万4、个0位上的cur==0不计ling
        }                             // 大于等于10才会出现零，比如8012时i=2, j=3, curPos=3, n/J[curPos]等于8, 不计0，curPos=2时n/J[curPos]等于80>10，计0

        if (i != 2 && part[i]>0) cout << ' ' << c[i + 4]; //处理完每部分之后，最后输出单位，Yi/Wan
    }
    return 0;
}