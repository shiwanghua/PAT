#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int smallestChair(vector<vector<int> > times, int targetStudent)
{
    int n = times.size();
    vector<int> exits;
    int earlyNum = 0, exitNum = 0;
    for (int i = 0; i < n; i++)
    {
        if (times[i][0] < times[targetStudent][0])
        {
            earlyNum++;
            if (times[i][1] < times[targetStudent][1])
                exitNum++;
        }
    }
    return earlyNum - exitNum; // 比 targetStudent 早到的人数 - 在 targetStudent 到达之前离开的人数
}

// https://leetcode.cn/problems/the-number-of-the-smallest-unoccupied-chair/ 

int main()
{
    vector<vector<int> > times;
    vector<int> time;
    time.push_back(1);
    time.push_back(4);
    times.push_back(time);
    time[0] = 2;
    time[1] = 3;
    times.push_back(time);
    time[0] = 4;
    time[1] = 6;
    times.push_back(time);
    cout << smallestChair(times, 2) << "\n";
    return 0;
}
