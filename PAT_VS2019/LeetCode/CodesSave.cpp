//
//// 40 组合总和II 5-12
//class Solution {
//    vector<vector<int>> ans;
//    int n, t;
//public:
//    void r(vector<int> v, int sum, int s, vector<int>& candidates) {
//        sum += candidates[s];
//        v.push_back(candidates[s]);
//        if (sum == t) {
//            ans.push_back(v);
//            return;
//        }
//        else if (sum > t || s == n - 1) return;
//
//        for (int i = s + 1; i < n; i++) {
//            if (i > s + 1 && candidates[i] == candidates[i - 1]) continue;
//            else r(v, sum, i, candidates);
//        }
//        v.pop_back();
//    }
//    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
//        n = candidates.size();
//        t = target;
//        sort(candidates.begin(), candidates.end());
//        vector<int> v;
//        for (int i = 0; i < n; i++)
//            if (i > 0 && candidates[i] == candidates[i - 1]) continue;
//            else r(v, 0, i, candidates);
//        return ans;
//    }
//};


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */ 
 // // 102  层序遍历
 // class Solution {
 // public:
 //     vector<vector<int>> levelOrder(TreeNode* root) {
 //         vector<vector<int>> ans;
 //         if(!root) return ans;
 //         vector<int> le;
 //         TreeNode* last=root,*next=nullptr;
 //         queue<TreeNode*> q;
 //         q.push(root);
 //         while(!q.empty()){
 //             TreeNode* o=q.front();
 //             if(o->left!=NULL) {
 //                 next=o->left;
 //                 q.push(o->left);
 //             }
 //             if(o->right!=NULL) {
 //                 next=o->right;
 //                 q.push(o->right);
 //             }
 //             q.pop();
 //             le.push_back(o->val);
 //             if(o==last){
 //                 last=next;
 //                 ans.push_back(le);
 //                 le.clear();
 //             }
 //         }
 //         return ans;
 //     }
 // };

 // class Solution {
 // public:
 //     vector<vector<int>> levelOrder(TreeNode* root) {
 //         vector <vector <int>> ret;
 //         if (!root) return ret;

 //         queue <TreeNode*> q;
 //         q.push(root);
 //         while (!q.empty()) {
 //             int currentLevelSize = q.size();
 //             ret.push_back(vector <int> ());
 //             for (int i = 1; i <= currentLevelSize; ++i) {
 //                 auto node = q.front(); q.pop();
 //                 ret.back().push_back(node->val);
 //                 if (node->left) q.push(node->left);
 //                 if (node->right) q.push(node->right);
 //             }
 //         }

 //         return ret;
 //     }
 // };


//  5
// 法1
// class Solution {
// public:
//     string longestPalindrome(string s) {
//         int n = s.size();
//         vector<vector<int>> dp(n, vector<int>(n));
//         string ans;
//         for (int l = 0; l < n; ++l) {
//             for (int i = 0; i + l < n; ++i) {
//                 int j = i + l;
//                 if (l == 0) {
//                     dp[i][j] = 1;
//                 }
//                 else if (l == 1) {
//                     dp[i][j] = (s[i] == s[j]);
//                 }
//                 else {
//                     dp[i][j] = (s[i] == s[j] && dp[i + 1][j - 1]);
//                 }
//                 if (dp[i][j] && l + 1 > ans.size()) {
//                     ans = s.substr(i, l + 1);
//                 }
//             }
//         }
//         return ans;
//     }
// };

// class Solution {
// public:
//     int expand(const string& s, int left, int right) {
//         while (left >= 0 && right < s.size() && s[left] == s[right]) {
//             --left;
//             ++right;
//         }
//         return (right - left - 2) / 2;
//     }

//     string longestPalindrome(string s) {
//         int start = 0, end = -1;
//         string t = "#";
//         for (char c: s) {
//             t += c;
//             t += '#';
//         }
//         t += '#';
//         s = t;

// 法2
//class Solution {
//public:
//    pair<int, int> expandAroundCenter(const string& s, int left, int right) {
//        while (left >= 0 && right < s.size() && s[left] == s[right]) {
//            --left;
//            ++right;
//        }
//        return { left + 1, right - 1 };
//    }
//
//    string longestPalindrome(string s) {
//        int start = 0, end = 0;
//        for (int i = 0; i < s.size(); ++i) {
//            auto [left1, right1] = expandAroundCenter(s, i, i);
//            auto [left2, right2] = expandAroundCenter(s, i, i + 1);
//            if (right1 - left1 > end - start) {
//                start = left1;
//                end = right1;
//            }
//            if (right2 - left2 > end - start) {
//                start = left2;
//                end = right2;
//            }
//        }
//        return s.substr(start, end - start + 1);
//    }
//};

//  法3
//         vector<int> arm_len;
//         int right = -1, j = -1;
//         for (int i = 0; i < s.size(); ++i) {
//             int cur_arm_len;
//             if (right > i) {
//                 int i_sym = j * 2 - i;
//                 int min_arm_len = min(arm_len[i_sym], right - i);
//                 cur_arm_len = expand(s, i - min_arm_len, i + min_arm_len);
//             }
//             else {
//                 cur_arm_len = expand(s, i, i);
//             }
//             arm_len.push_back(cur_arm_len);
//             if (i + cur_arm_len > right) {
//                 j = i;
//                 right = i + cur_arm_len;
//             }
//             if (cur_arm_len * 2  > end - start) {
//                 start = i - cur_arm_len;
//                 end = i + cur_arm_len;
//             }
//         }

//         string ans;
//         for (int i = start; i <= end; ++i) {
//             if (s[i] != '#') {
//                 ans += s[i];
//             }
//         }
//         return ans;
//     }
// };

// 25 
//class Solution {
//public:
//    // 翻转一个子链表，并且返回新的头与尾
//    pair<ListNode*, ListNode*> myReverse(ListNode* head, ListNode* tail) {
//        ListNode* prev = tail->next;
//        ListNode* p = head;
//        while (prev != tail) {
//            ListNode* nex = p->next;
//            p->next = prev;
//            prev = p;
//            p = nex;
//        }
//        return { tail, head };
//    }
//
//    ListNode* reverseKGroup(ListNode* head, int k) {
//        ListNode* hair = new ListNode(0);
//        hair->next = head;
//        ListNode* pre = hair;
//
//        while (head) {
//            ListNode* tail = pre;
//            // 查看剩余部分长度是否大于等于 k
//            for (int i = 0; i < k; ++i) {
//                tail = tail->next;
//                if (!tail) {
//                    return hair->next;
//                }
//            }
//            ListNode* nex = tail->next;
//            // 这里是 C++17 的写法，也可以写成
//            // pair<ListNode*, ListNode*> result = myReverse(head, tail);
//            // head = result.first;
//            // tail = result.second;
//            tie(head, tail) = myReverse(head, tail);
//            // 把子链表重新接回原链表
//            pre->next = head;
//            tail->next = nex;
//            pre = tail;
//            head = tail->next;
//        }
//        return hair->next;
//    }
//};

//  105
//class Solution {
//public:
//    int n;
//    TreeNode* con(vector<int>& preorder, map<int, int>& inPos, int index, int l, int r) {
//        if (l > r || index == n) return NULL;
//        else if (l == r) {
//            TreeNode* h = new TreeNode(preorder[index]);
//            return h;
//        }
//        int pos = inPos[preorder[index]];
//        TreeNode* h = new TreeNode(preorder[index]);
//        h->left = con(preorder, inPos, index + 1, l, pos - 1);
//        h->right = con(preorder, inPos, index + pos - l + 1, pos + 1, r);
//        return h;
//    }
//    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//        n = preorder.size();
//        map<int, int> inPos;
//        for (int i = 0; i < n; i++)
//            inPos[inorder[i]] = i;
//        return con(preorder, inPos, 0, 0, n - 1);
//    }
//};

//// 法2
//class Solution {
//public:
//    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//        if (!preorder.size()) {
//            return nullptr;
//        }
//        TreeNode* root = new TreeNode(preorder[0]);
//        stack<TreeNode*> stk;
//        stk.push(root);
//        int inorderIndex = 0;
//        for (int i = 1; i < preorder.size(); ++i) {
//            int preorderVal = preorder[i];
//            TreeNode* node = stk.top();
//            if (node->val != inorder[inorderIndex]) {
//                node->left = new TreeNode(preorderVal);
//                stk.push(node->left);
//            }
//            else {
//                while (!stk.empty() && stk.top()->val == inorder[inorderIndex]) {
//                    node = stk.top();
//                    stk.pop();
//                    ++inorderIndex;
//                }
//                node->right = new TreeNode(preorderVal);
//                stk.push(node->right);
//            }
//        }
//        return root;
//    }
//};

// 76
//class Solution {
//public:
//    unordered_map<char, int> ori, cnt;
//    bool check() {
//        for (auto& c : ori) {
//            if (cnt[c.first] < c.second)
//                return false;
//        }
//        return true;
//    }
//
//    string minWindow(string s, string t) {
//        for (const auto& c : t)
//            ori[c]++;
//        int l = 0, r = -1, distance = 0;
//        int len = INT_MAX, ansL = -1;
//        while (r<int(s.length())) {
//            cnt[s[++r]]++;
//            if (ori[s[r]] >= cnt[s[r]])
//                distance++;
//            // else continue;
//            while (distance == t.length() && l <= r) {
//                if (r - l + 1 < len) {
//                    len = r - l + 1;
//                    ansL = l;
//                }
//                if (ori[s[l]] == cnt[s[l]])
//                    distance--;
//                cnt[s[l++]]--;
//            }
//        }
//        return ansL == -1 ? "" : s.substr(ansL, len);
//    }
//};



// 146
// 法一
//  struct Node {
//     int time, key, value;

//     Node(int _time, int _key, int _value):time(_time), key(_key), value(_value){}

//     bool operator < (const Node& rhs) const {
//         return  time < rhs.time ;
//     }
// };

// class LRUCache {
//     // 缓存容量，时间戳
//     int capacity, time;
//     unordered_map<int, Node> key_table;
//     set<Node> S;
// public:
//     LRUCache(int _capacity) {
//         capacity = _capacity;
//         time = 0;
//         key_table.clear();
//         S.clear();
//     }

//     int get(int key) {
//         if (capacity == 0) return -1;
//         auto it = key_table.find(key);
//         // 如果哈希表中没有键 key，返回 -1
//         if (it == key_table.end()) return -1;
//         // 从哈希表中得到旧的缓存
//         Node cache = it -> second;
//         // 从平衡二叉树中删除旧的缓存
//         S.erase(cache);
//         // 将旧缓存更新
//         cache.time = ++time;
//         // 将新缓存重新放入哈希表和平衡二叉树中
//         S.insert(cache);
//         it -> second = cache;
//         return cache.value;
//     }

//     void put(int key, int value) {
//         if (capacity == 0) return;
//         auto it = key_table.find(key);
//         if (it == key_table.end()) {
//             // 如果到达缓存容量上限
//             if (key_table.size() == capacity) {
//                 // 从哈希表和平衡二叉树中删除最近最少使用的缓存
//                 key_table.erase(S.begin() -> key);
//                 S.erase(S.begin());
//             }
//             // 创建新的缓存
//             Node cache = Node(++time, key, value);
//             // 将新缓存放入哈希表和平衡二叉树中
//             key_table.insert(make_pair(key, cache));
//             S.insert(cache);
//         }
//         else {
//             // 这里和 get() 函数类似
//             Node cache = it -> second;
//             S.erase(cache);
//             cache.time = ++time;
//             cache.value = value;
//             S.insert(cache);
//             it -> second = cache;
//         }
//     }
// };

//  法3
// 缓存的节点信息
// struct Node {
//     int key, val;
//     Node(int _key,int _val): key(_key), val(_val){}
// };
// class LRUCache {
//     int minfreq, capacity;
//     unordered_map<int, list<Node>::iterator> key_table;
//     list<Node> freq_table;
// public:
//     LRUCache(int _capacity) {
//         minfreq = 0;
//         capacity = _capacity;
//         key_table.clear();
//         freq_table.clear();
//     }

//     int get(int key) {
//         if (capacity == 0) return -1;
//         auto it = key_table.find(key);
//         if (it == key_table.end()) return -1;
//         list<Node>::iterator node = it -> second;
//         int val = node -> val;
//         freq_table.erase(node);
//         // 插入到 freq + 1 中
//         freq_table.push_front(Node(key, val));
//         key_table[key] = freq_table.begin();
//         return val;
//     }

//     void put(int key, int value) {
//         if (capacity == 0) return;
//         auto it = key_table.find(key);
//         if (it == key_table.end()) {
//             // 缓存已满，需要进行删除操作
//             if (key_table.size() == capacity) {
//                 // 通过 minFreq 拿到 freq_table[minFreq] 链表的末尾节点
//                 auto it2 = freq_table.back();
//                 key_table.erase(it2.key);
//                 freq_table.pop_back();
//             } 
//             freq_table.push_front(Node(key, value));
//             key_table[key] = freq_table.begin();
//         } 
//         else {
//             // 与 get 操作基本一致，除了需要更新缓存的值
//             list<Node>::iterator node = it -> second;
//             freq_table.erase(node);
//             freq_table.push_front(Node(key, value));
//             key_table[key] = freq_table.begin();
//         }
//     }
// };

// 法4
// struct DLinkedNode {
//     int key, value;
//     DLinkedNode* prev;
//     DLinkedNode* next;
//     DLinkedNode(): key(0), value(0), prev(nullptr), next(nullptr) {}
//     DLinkedNode(int _key, int _value): key(_key), value(_value), prev(nullptr), next(nullptr) {}
// };

// class LRUCache {
// private:
//     unordered_map<int, DLinkedNode*> cache;
//     DLinkedNode* head;
//     DLinkedNode* tail;
//     int size;
//     int capacity;

// public:
//     LRUCache(int _capacity): capacity(_capacity), size(0) {
//         // 使用伪头部和伪尾部节点
//         head = new DLinkedNode();
//         tail = new DLinkedNode();
//         head->next = tail;
//         tail->prev = head;
//     }

//     int get(int key) {
//         if (!cache.count(key)) {
//             return -1;
//         }
//         // 如果 key 存在，先通过哈希表定位，再移到头部
//         DLinkedNode* node = cache[key];
//         moveToHead(node);
//         return node->value;
//     }

//     void put(int key, int value) {
//         if (!cache.count(key)) {
//             // 如果 key 不存在，创建一个新的节点
//             DLinkedNode* node = new DLinkedNode(key, value);
//             // 添加进哈希表
//             cache[key] = node;
//             // 添加至双向链表的头部
//             addToHead(node);
//             ++size;
//             if (size > capacity) {
//                 // 如果超出容量，删除双向链表的尾部节点
//                 DLinkedNode* removed = removeTail();
//                 // 删除哈希表中对应的项
//                 cache.erase(removed->key);
//                 --size;
//             }
//         }
//         else {
//             // 如果 key 存在，先通过哈希表定位，再修改 value，并移到头部
//             DLinkedNode* node = cache[key];
//             node->value = value;
//             moveToHead(node);
//         }
//     }

//     void addToHead(DLinkedNode* node) {
//         node->prev = head;
//         node->next = head->next;
//         head->next->prev = node;
//         head->next = node;
//     }

//     void removeNode(DLinkedNode* node) {
//         node->prev->next = node->next;
//         node->next->prev = node->prev;
//     }

//     void moveToHead(DLinkedNode* node) {
//         removeNode(node);
//         addToHead(node);
//     }

//     DLinkedNode* removeTail() {
//         DLinkedNode* node = tail->prev;
//         removeNode(node);
//         return node;
//     }
// };

// 287
//class Solution {
//public:
//    // 法1
//    // int findDuplicate(vector<int>& nums) {
//    //     int n = nums.size();
//    //     int l = 1, r = n - 1, ans = -1;
//    //     while (l <= r) {
//    //         int mid = (l + r) >> 1;
//    //         int cnt = 0;
//    //         for (int i = 0; i < n; ++i) {
//    //             cnt += nums[i] <= mid;
//    //         }
//    //         if (cnt <= mid) {
//    //             l = mid + 1;
//    //         } else {
//    //             r = mid - 1;
//    //             ans = mid;
//    //         }
//    //     }
//    //     return ans;
//    // }
//
//    // 法2
//    // int findDuplicate(vector<int>& nums) {
//    //     int n=nums.size(), bitmax=31, ans=0;
//    //     while((n-1)&(1<<bitmax)==0)
//    //         bitmax-=1;
//    //     for(int i=0;i<=bitmax;i++){
//    //         int x=0,y=0;
//    //         for(int j=0;j<n;j++){
//    //             if(j>0&&(j&(1<<i)))
//    //                 y++;
//    //             if(nums[j]&(1<<i))
//    //                 x++;
//    //         }
//    //         if(x>y) ans|=(1<<i);
//    //     }
//    //     return ans;
//    // }
//
//    // 法3 O(n);O(1)
//    int findDuplicate(vector<int>& nums) {
//        int slow = 0, fast = 0;
//        do {
//            slow = nums[slow];
//            fast = nums[nums[fast]];
//        } while (slow != fast);
//        slow = 0;
//        while (slow != fast) {
//            slow = nums[slow];
//            fast = nums[fast];
//        }
//        return slow;
//    }
//};


// 974
// 法1
// class Solution {
// public:
//     int subarraysDivByK(vector<int>& A, int K) {
//         int sum=0,ans=0;
//         unordered_map<int,int> m;
//         m[0]=1;
//         for(auto i : A){
//             sum+=i;
//             int mo=(sum%K+K)%K;
//             if(m[mo]>0){
//                 ans+=m[mo];
//             }
//             m[mo]++;
//         }
//         return ans;
//     }
// };

// 法2
// class Solution {
// public:
//     int subarraysDivByK(vector<int>& A, int K) {
//         unordered_map<int, int> record = {{0, 1}};
//         int sum = 0;
//         for (int elem: A) {
//             sum += elem;
//             // 注意 C++ 取模的特殊性，当被除数为负数时取模结果为负数，需要纠正
//             int modulus = (sum % K + K) % K;
//             ++record[modulus];
//         }

//         int ans = 0;
//         // for (auto [x, cx]: record) 
//         //     ans += cx * (cx - 1) / 2;
//         // for(auto it : record)
//         //     ans+=it.second*(it.second-1)/2;
//         for(auto it=record.begin();it!=record.end();it++)
//             ans+=it->second*(it->second-1)/2;
//         return ans;
//     }
// };


// 64
//class Solution {
//public:
//    int sumNums(int n) {
//        // return (1+n)*n/2;
//
//        // n&&(n+=sumNums(n-1));
//        // return n;
//
//        // int a=n+1,b=n,ans=0;
//        // for(;b;b>>=1){
//        //     if(b&1) ans+=a;
//        //     a=a<<1;
//        // }
//        // return ans>>1;
//
//
//    }
//};


// 837 
//class Solution {
//public:
//    double new21Game(int N, int K, int W) {
//        if (K == 0) return 1;
//        vector<double> dp(K + W);
//        for (int i = K; i < K + W && i <= N; i++) {
//            dp[i] = 1;
//        }
//        dp[K - 1] = 1.0 * min(N - K + 1, W) / W;  // 不乘以0.1只能得到整数！
//        for (int i = K - 2; i >= 0; i--)
//            dp[i] = dp[i + 1] + (dp[i + 1] - dp[i + W + 1]) / W;
//        return dp[0];
//    }
//};

// 238
//class Solution {
//public:
//    vector<int> productExceptSelf(vector<int>& nums) {
//        int length = nums.size();
//
//        // L 和 R 分别表示左右两侧的乘积列表
//        vector<int> L(length, 0);
//
//        // L[i] 为索引 i 左侧所有元素的乘积
//        // 对于索引为 '0' 的元素，因为左侧没有元素，所以 L[0] = 1
//        L[0] = 1;
//        for (int i = 1; i < length; i++)
//            L[i] = nums[i - 1] * L[i - 1];
//
//        int r = 1;
//        for (int i = length - 1; i >= 0; i--) {
//            L[i] = L[i] * r;
//            r *= nums[i];
//        }
//        return L;
//    }
//};


// 面试题29
// class Solution {
//     int m,n;
//     int x[4]={0,1,0,-1};
//     int y[4]={1,0,-1,0};
// public:
//     vector<int> spiralOrder(vector<vector<int>> matrix) {
//         m=matrix.size();
//         if(m==0) return {};
//         n=matrix[0].size();
//         int i=0,j=0,cnt=0,maxn=m*n,f=0;
//         int ii,jj;
//         vector<int> ans(maxn);
//         while(cnt<maxn){
//             ans[cnt++]=matrix[i][j];
//             matrix[i][j]=-10101;
//             ii=i+x[f];
//             jj=j+y[f];
//             if(ii>=0&&ii<m&&jj>=0&&jj<n&&matrix[ii][jj]!=-10101){
//                 i=ii;
//                 j=jj;
//             }
//             else {
//                 f=(f+1)%4;
//                 i=i+x[f];
//                 j=j+y[f];
//             }
//         }
//         return ans;
//     }
// };

// // 法2
// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         if (matrix.size() == 0 || matrix[0].size() == 0) {
//             return {};
//         }

//         int rows = matrix.size(), columns = matrix[0].size();
//         vector<int> order;
//         int left = 0, right = columns - 1, top = 0, bottom = rows - 1;
//         while (left <= right && top <= bottom) {
//             for (int column = left; column <= right; column++) {
//                 order.push_back(matrix[top][column]);
//             }
//             for (int row = top + 1; row <= bottom; row++) {
//                 order.push_back(matrix[row][right]);
//             }
//             if (left < right && top < bottom) {
//                 for (int column = right - 1; column > left; column--) {
//                     order.push_back(matrix[bottom][column]);
//                 }
//                 for (int row = bottom; row > top; row--) {
//                     order.push_back(matrix[row][left]);
//                 }
//             }
//             left++;
//             right--;
//             top++;
//             bottom--;
//         }
//         return order;
//     }
// };

// 128
//class Solution {
//public:
//    int longestConsecutive(vector<int>& nums) {
//        int n = nums.size(), ma = 0, qq;
//        // unordered_map<int,int> m;
//        unordered_set<int> m;
//        for (const int& i : nums)
//            // m[i]=1;
//            m.insert(i);
//        for (const int& q : nums) {
//            if (m.count(q - 1)) continue;
//            qq = q;
//            // while(m[++qq]);
//            // while(m.count(++qq));
//            int cnt = 1;
//            while (m.count(qq + 1)) {
//                cnt += 1;
//                qq += 1;
//            }
//            // ma=max(ma,qq-q);  //  做三次加法居然比做一次减法还快
//            ma = max(ma, cnt);
//        }
//        return ma;
//    }
//};

// 126
//class Solution {
//public:
//    vector<vector<string>> ans;
//    vector<vector<int>> e;
//    unordered_map<string, int> m;
//    vector<string> s;
//    int id = 0;
//
//    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
//        s.push_back("");
//        for (auto& w : wordList)
//            if (m[w] == 0)
//            {
//                m[w] = ++id;
//                s.push_back(w);
//            }
//        if (!m[beginWord]) {
//            m[beginWord] = ++id;
//            s.push_back(beginWord);
//        }
//        if (!m[endWord]) return {};
//        e.resize(id + 1);
//        for (int i = 0; i < s.size(); i++)
//            for (int j = i + 1; j < s.size(); ++j)
//                if (check(s[i], s[j])) {
//                    e[i].push_back(j);
//                    e[j].push_back(i);
//                }
//        queue<vector<string>> q;
//        vector<int> cost(id + 1, 1 << 20);
//        cost[m[beginWord]] = 0;
//        q.push({ beginWord });
//        while (!q.empty()) {
//            vector<string> v = q.front();
//            q.pop();
//            string t = v.back();
//            int tid = m[t];
//            if (t == endWord)
//                ans.push_back(v);
//            else
//                for (int i = 0; i < e[tid].size(); i++)
//                {
//                    int next = e[tid][i];
//                    if (cost[tid] + 1 <= cost[next]) {
//                        v.push_back(s[e[m[t]][i]]);
//                        cost[next] = cost[tid] + 1;
//                        q.push(v);
//                        v.pop_back();
//                    }
//                }
//        }
//        return ans;
//    }
//
//    bool check(string& s1, string& s2) {
//        int d = 0;
//        for (int i = 0; i < s1.length() && d < 2; i++)
//            if (s1[i] != s2[i])
//                d++;
//        return d == 1;
//    }
//};

// 面试题46
// class Solution {
// public:
//     int translateNum(int num) {
//         int p1=1,p2=1;
//         string s=to_string(num);
//         int n=s.length();
//         if(n==1) return 1;
//         if(stoi(s.substr(0,2))<26)
//             p2++;
//         for(int i=2;i<n;i++){
//             int p3=p2;
//             int t=stoi(s.substr(i-1,2));
//             if(t<26&&t>9)
//                 p3+=p1;
//             p1=p2;
//             p2=p3;
//         }
//         return p2;
//     }
// };
//
//class Solution {
//public:
//    int translateNum(int num) {
//        if (num == 0) return 1;
//        return f(num);
//    }
//
//    int f(int num) {
//        if (num < 10) {
//            return 1;
//        }
//        if (num % 100 < 26 && num % 100 > 9) {
//            return f(num / 10) + f(num / 100);
//        }
//        else {
//            return f(num / 10);
//        }
//    }
//};