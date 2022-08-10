#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;

// https://leetcode.cn/problems/most-common-word/ 

int main()
{
    string paragraph;
    unordered_map<string, int> wordCount;
    unordered_set<string> banned;
    banned.insert("hit");
    // cin >> paragraph;
    paragraph = "Bob hit a ball, the hit BALL flew far after it was hit.";

    int n = paragraph.length();
    int maxCount = 0;
    string maxCountString;

    for (int i = 0; i < n;)
    {
        int j = i;
        string word = "";
        while (j < n && isalpha(paragraph[j]))
        {
            // char c = (paragraph[j]>='A' && paragraph[j]<='Z') ? paragraph[j]+32:paragraph[j];
            // cout<<paragraph[j]<<", "<<c<<"\n";
            word.append(string(1,tolower(paragraph[j])));
            j++;
        }

        wordCount[word]++;

        while (j < n && !isalpha(paragraph[j]))
            j++;
        i = j;
    }

    for (auto &[word, cnt] : wordCount)
    {
        if (cnt > maxCount&&banned.count(word)==0)
        {
            maxCount = cnt;
            maxCountString = word;
        }
    }

    cout<<maxCountString<<"\n";

    return 0;
}
