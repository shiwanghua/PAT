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
// �?
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

// �?
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

//  �?
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
//            // 这里�?C++17 的写法，也可以写�?
//            // pair<ListNode*, ListNode*> result = myReverse(head, tail);
//            // head = result.first;
//            // tail = result.second;
//            tie(head, tail) = myReverse(head, tail);
//            // 把子链表重新接回原链�?
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

//// �?
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
//         // 如果哈希表中没有�?key，返�?-1
//         if (it == key_table.end()) return -1;
//         // 从哈希表中得到旧的缓�?
//         Node cache = it -> second;
//         // 从平衡二叉树中删除旧的缓�?
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
//             // 这里�?get() 函数类似
//             Node cache = it -> second;
//             S.erase(cache);
//             cache.time = ++time;
//             cache.value = value;
//             S.insert(cache);
//             it -> second = cache;
//         }
//     }
// };

//  �?
// 缓存的节点信�?
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
//         // 插入�?freq + 1 �?
//         freq_table.push_front(Node(key, val));
//         key_table[key] = freq_table.begin();
//         return val;
//     }

//     void put(int key, int value) {
//         if (capacity == 0) return;
//         auto it = key_table.find(key);
//         if (it == key_table.end()) {
//             // 缓存已满，需要进行删除操�?
//             if (key_table.size() == capacity) {
//                 // 通过 minFreq 拿到 freq_table[minFreq] 链表的末尾节�?
//                 auto it2 = freq_table.back();
//                 key_table.erase(it2.key);
//                 freq_table.pop_back();
//             } 
//             freq_table.push_front(Node(key, value));
//             key_table[key] = freq_table.begin();
//         } 
//         else {
//             // �?get 操作基本一致，除了需要更新缓存的�?
//             list<Node>::iterator node = it -> second;
//             freq_table.erase(node);
//             freq_table.push_front(Node(key, value));
//             key_table[key] = freq_table.begin();
//         }
//     }
// };

// �?
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
//         // 使用伪头部和伪尾部节�?
//         head = new DLinkedNode();
//         tail = new DLinkedNode();
//         head->next = tail;
//         tail->prev = head;
//     }

//     int get(int key) {
//         if (!cache.count(key)) {
//             return -1;
//         }
//         // 如果 key 存在，先通过哈希表定位，再移到头�?
//         DLinkedNode* node = cache[key];
//         moveToHead(node);
//         return node->value;
//     }

//     void put(int key, int value) {
//         if (!cache.count(key)) {
//             // 如果 key 不存在，创建一个新的节�?
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
//             // 如果 key 存在，先通过哈希表定位，再修�?value，并移到头部
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
//    // �?
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
//    // �?
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
//    // �? O(n);O(1)
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
// �?
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

// �?
// class Solution {
// public:
//     int subarraysDivByK(vector<int>& A, int K) {
//         unordered_map<int, int> record = {{0, 1}};
//         int sum = 0;
//         for (int elem: A) {
//             sum += elem;
//             // 注意 C++ 取模的特殊性，当被除数为负数时取模结果为负数，需要纠�?
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
//        dp[K - 1] = 1.0 * min(N - K + 1, W) / W;  // 不乘�?.1只能得到整数�?
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
//        // L �?R 分别表示左右两侧的乘积列�?
//        vector<int> L(length, 0);
//
//        // L[i] 为索�?i 左侧所有元素的乘积
//        // 对于索引�?'0' 的元素，因为左侧没有元素，所�?L[0] = 1
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


// 面试�?9
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

// // �?
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
//            // ma=max(ma,qq-q);  //  做三次加法居然比做一次减法还�?
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

// 面试�?6
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

// 9
// class Solution {
// public:
//     bool isPalindrome(int x) {
//         string s=to_string(x);
//         int i=0,j=s.length()-1;
//         while(i<j){
//             if(s[i]!=s[j]) return 0;
//             i++;j--;
//         }
//         return 1;
//     }
// };
//
//class Solution {
//public:
//    bool isPalindrome(int x) {
//        // 特殊情况�?
//        // 如上所述，�?x < 0 时，x 不是回文数�?
//        // 同样地，如果数字的最后一位是 0，为了使该数字为回文�?
//        // 则其第一位数字也应该�?0
//        // 只有 0 满足这一属�?
//        if (x < 0 || (x % 10 == 0 && x != 0)) {
//            return false;
//        }
//
//        int revertedNumber = 0;
//        while (x > revertedNumber) {
//            revertedNumber = revertedNumber * 10 + x % 10;
//            x /= 10;
//        }
//
//        // 当数字长度为奇数时，我们可以通过 revertedNumber/10 去除处于中位的数字�?
//        // 例如，当输入�?12321 时，�?while 循环的末尾我们可以得�?x = 12，revertedNumber = 123�?
//        // 由于处于中位的数字不影响回文（它总是与自己相等），所以我们可以简单地将其去除�?
//        return x == revertedNumber || x == revertedNumber / 10;
//    }
//};


// 297
// class Codec {
// public:
//     void s(TreeNode* root,string& str){
//         if(!root) {
//             str=str+"null,";
//             return;
//         }
//         str+=to_string(root->val)+",";
//         s(root->left,str);
//         s(root->right,str);
//     }
//     // Encodes a tree to a single string.
//     string serialize(TreeNode* root) {
//         string ans="";
//         s(root,ans);
//         return ans;
//     }

//     // Decodes your encoded data to tree.
//     TreeNode* deserialize(string data) {
//         queue<string> q;
//         for(int i=0;i<data.length();i++){
//             string str="";
//             while(i<data.length()&&data[i]!=',') str+=data[i++];
//             q.push(str);
//         }
//         TreeNode* t=de(q);
//         return t;
//     }

//     TreeNode* de(queue<string>& q){
//         if(q.size()==0) return NULL;
//         string str=q.front();
//         q.pop();
//         if(str=="null") return NULL;
//         TreeNode* h=new TreeNode(stoi(str));
//         h->left=de(q);
//         h->right=de(q);
//         return h;
//     }
// };

//class Codec {
//public:
//    string serialize(TreeNode* root) {
//        if (!root) return "X";
//        auto l = "(" + serialize(root->left) + ")";
//        auto r = "(" + serialize(root->right) + ")";
//        return  l + to_string(root->val) + r;
//    }
//
//    inline TreeNode* parseSubtree(const string& data, int& ptr) {
//        ++ptr; // 跳过左括�?
//        auto subtree = parse(data, ptr);
//        ++ptr; // 跳过右括�?
//        return subtree;
//    }
//
//    inline int parseInt(const string& data, int& ptr) {
//        int x = 0, sgn = 1;
//        if (!isdigit(data[ptr])) {
//            sgn = -1;
//            ++ptr;
//        }
//        while (isdigit(data[ptr])) {
//            x = x * 10 + data[ptr++] - '0';
//        }
//        return x * sgn;
//    }
//
//    TreeNode* parse(const string& data, int& ptr) {
//        if (data[ptr] == 'X') {
//            ++ptr;
//            return nullptr;
//        }
//        auto cur = new TreeNode(0);
//        cur->left = parseSubtree(data, ptr);
//        cur->val = parseInt(data, ptr);
//        cur->right = parseSubtree(data, ptr);
//        return cur;
//    }
//
//    TreeNode* deserialize(string data) {
//        int ptr = 0;
//        return parse(data, ptr);
//    }
//};

//1028
//class Solution {
//public:
//    TreeNode* recoverFromPreorder(string S) {
//        stack<TreeNode*> st;
//        int p = 0;
//        while (p < S.length()) {
//            int l = 0, val = 0;
//            while (S[p] == '-') {
//                p++;
//                l++;
//            }
//            while (p < S.length() && isdigit(S[p])) {
//                val = val * 10 + (S[p] - '0');
//                p++;
//            }
//            TreeNode* t = new TreeNode(val);
//            if (l == st.size()) {
//                if (st.size() > 0)
//                    st.top()->left = t;
//            }
//            else {
//                while (l != st.size()) st.pop();
//                st.top()->right = t;
//            }
//            st.push(t);
//        }
//        while (st.size() > 1) st.pop();
//        return st.top();
//    }
//};

//10
//class Solution {
//public:
//    bool isMatch(string s, string p) {
//        int m = s.size();
//        int n = p.size();
//
//        auto matches = [&](int i, int j) {
//            if (i == 0) {
//                return false;
//            }
//            if (p[j - 1] == '.') {
//                return true;
//            }
//            return s[i - 1] == p[j - 1];
//        };
//
//        vector<vector<int>> f(m + 1, vector<int>(n + 1));
//        f[0][0] = true;
//        for (int i = 0; i <= m; ++i) {
//            for (int j = 1; j <= n; ++j) {
//                if (p[j - 1] == '*') {
//                    f[i][j] |= f[i][j - 2] | f[i][j - 1];
//                    if (!f[i][j] && matches(i, j - 1)) {
//                        f[i][j] |= f[i - 1][j - 2] | f[i - 1][j];
//                    }
//                }
//                else {
//                    if (matches(i, j)) {
//                        f[i][j] |= f[i - 1][j - 1];
//                    }
//                }
//            }
//        }
//        return f[m][n];
//    }
//};
//// 101
//// 011
//// 00


//面试�?6.18
//class Solution {
//public:
//    bool patternMatching(string pattern, string value) {
//        int ca = 0, cb = 0;
//        for (char& c : pattern)
//            if (c == 'a') ca++;
//            else cb++;
//        if (ca < cb) {
//            int c = ca;
//            ca = cb;
//            cb = c;
//            for (char& c : pattern)
//                c = (c == 'a') ? 'b' : 'a';
//        }
//        if (value.length() == 0) return cb == 0;
//        if (pattern.length() == 0) return false;
//        for (int la = 0; la * ca <= value.length(); la++) {
//            int rest = value.length() - la * ca;
//            if ((rest == 0 && cb == 0) || (cb != 0 && rest % cb == 0)) {
//                int lb = (cb == 0) ? 0 : rest / cb;
//                bool good = 1;
//                int pos = 0;
//                string a, b;
//                for (char& c : pattern)
//                    if (c == 'a') {
//                        if (a.length() == 0)
//                            a = value.substr(pos, la);
//                        else if (a != value.substr(pos, la)) {
//                            good = 0;
//                            break;
//                        }
//                        pos += la;
//                    }
//                    else {
//                        if (b.length() == 0)
//                            b = value.substr(pos, lb);
//                        else if (b != value.substr(pos, lb)) {
//                            good = 0; break;
//                        }
//                        pos += lb;
//                    }
//                if (good && a != b) return 1;
//            }
//        }
//        return 0;
//    }
//};


// 112  �?
//class Solution {
//public:
//    int _sum;
//    bool is = 0;
//    void has(TreeNode* r, int v) {
//        if (is) return;
//        v += r->val;
//        if (r->left == NULL && r->right == NULL) {
//            if (v == _sum) is = 1;
//            return;
//        }
//        if (r->left) has(r->left, v);
//        if (r->right) has(r->right, v);
//        return;
//    }
//    bool hasPathSum(TreeNode* root, int sum) {
//        this->_sum = sum;
//        if (root == NULL) return 0;
//        has(root, 0);
//        return is;
//    }
//};

// �?
// class Solution {
// public:
//     bool hasPathSum(TreeNode *root, int sum) {
//         if (root == nullptr) {
//             return false;
//         }
//         if (root->left == nullptr && root->right == nullptr) {
//             return sum == root->val;
//         }
//         return hasPathSum(root->left, sum - root->val) ||
//                hasPathSum(root->right, sum - root->val);
//     }
// };

// �?
// class Solution {
// public:
//     bool hasPathSum(TreeNode *root, int sum) {
//         if (root == nullptr) {
//             return false;
//         }
//         queue<TreeNode *> que_node;
//         queue<int> que_val;
//         que_node.push(root);
//         que_val.push(root->val);
//         while (!que_node.empty()) {
//             TreeNode *now = que_node.front();
//             int temp = que_val.front();
//             que_node.pop();
//             que_val.pop();
//             if (now->left == nullptr && now->right == nullptr) {
//                 if (temp == sum) return true;
//                 continue;
//             }
//             if (now->left != nullptr) {
//                 que_node.push(now->left);
//                 que_val.push(now->left->val + temp);
//             }
//             if (now->right != nullptr) {
//                 que_node.push(now->right);
//                 que_val.push(now->right->val + temp);
//             }
//         }
//         return false;
//     }
// };

// 309
//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        int n = prices.size();
//        if (n == 0) return 0;
//        int f0 = -prices[0], f1 = 0, f2 = 0;
//        int nf0, nf1, nf2;
//        for (int i = 0; i < n; i++) {
//            nf0 = max(f0, f2 - prices[i]);
//            nf1 = f0 + prices[i];
//            nf2 = max(f2, f1);
//            f0 = nf0;
//            f1 = nf1;
//            f2 = nf2;
//        }
//        return max(f1, f2);
//    }
//};


//  312
//class Solution {
//public:
//    vector<int> val;
//    vector<vector<int>> sol;
//    int solve(int i, int j) {
//        if (i >= j - 1) return 0;
//        if (sol[i][j] != -1) return sol[i][j];
//        for (int q = i + 1; q < j; q++) {
//            int c = val[i] * val[q] * val[j];
//            c += solve(i, q) + solve(q, j);
//            sol[i][j] = max(c, sol[i][j]);
//        }
//        return sol[i][j];
//    }
//    int maxCoins(vector<int>& nums) {
//        int n = nums.size();
//        val.resize(n + 2, 1);
//        for (int i = 1; i <= n; i++)
//            val[i] = nums[i - 1];
//        sol.resize(n + 2, vector<int>(n + 2, -1));
//        return solve(0, n + 1);
//    }
//};
//
//class Solution {
//public:
//    int maxCoins(vector<int>& nums) {
//        int n = nums.size();
//        vector<vector<int>> rec(n + 2, vector<int>(n + 2));
//        vector<int> val(n + 2);
//        val[0] = val[n + 1] = 1;
//        for (int i = 1; i <= n; i++) {
//            val[i] = nums[i - 1];
//        }
//        for (int i = n - 1; i >= 0; i--) {
//            for (int j = i + 2; j <= n + 1; j++) {
//                for (int k = i + 1; k < j; k++) {
//                    int sum = val[i] * val[k] * val[j];
//                    sum += rec[i][k] + rec[k][j];
//                    rec[i][j] = max(rec[i][j], sum);
//                }
//            }
//        }
//        return rec[0][n + 1];
//    }
//};


 
// 647  �?  Manacher 
//class Solution {
//public:
//    int countSubstrings(string s) {
//        int n = s.size();
//        string t = "$#";
//        for (const char& c : s) {
//            t += c;
//            t += '#';
//        }
//        n = t.size();
//        t += '!';
//
//        auto f = vector <int>(n);
//        int iMax = 0, rMax = 0, ans = 0;
//        for (int i = 1; i < n; ++i) {
//            // 初始�?f[i]
//            f[i] = (i <= rMax) ? min(rMax - i + 1, f[2 * iMax - i]) : 1;
//            // 中心拓展
//            while (t[i + f[i]] == t[i - f[i]]) ++f[i];
//            // 动态维�?iMax �?rMax
//            if (i + f[i] - 1 > rMax) {
//                iMax = i;
//                rMax = i + f[i] - 1;
//            }
//            // 统计答案, 当前贡献�?(f[i] - 1) / 2 上取�?
//            ans += (f[i] / 2);
//        }
//
//        return ans;
//    }
//};

// �?
// class Solution {
// public:
//     int countSubstrings(string s) {
//         int n = s.size(), ans = 0;
//         for (int i = 0; i < 2 * n - 1; ++i) {
//             int l = i>>1, r = l + i % 2;
//             while (l >= 0 && r < n && s[l] == s[r]) {
//                 --l;
//                 ++r;
//                 ++ans;
//             }
//         }
//         return ans;
//     }
// };


// 529
// class Solution {
// public:
//     int dir_x[8] = {0, 1, 0, -1, 1, 1, -1, -1};
//     int dir_y[8] = {1, 0, -1, 0, 1, -1, 1, -1};
//     void dfs(vector<vector<char>>& board, int x, int y) {
//         int cnt = 0;
//         for (int i = 0; i < 8; ++i) {
//             int tx = x + dir_x[i];
//             int ty = y + dir_y[i];
//             if (tx < 0 || tx >= board.size() || ty < 0 || ty >= board[0].size()) {
//                 continue;
//             }
//             // 不用判断 M，因为如果有 M 的话游戏已经结束�?
//             cnt += board[tx][ty] == 'M';
//         }
//         if (cnt > 0) {
//             // 规则 3
//             board[x][y] = cnt + '0';
//         } else {
//             // 规则 2
//             board[x][y] = 'B';
//             for (int i = 0; i < 8; ++i) {
//                 int tx = x + dir_x[i];
//                 int ty = y + dir_y[i];
//                 // 这里不需要在存在 B 的时候继续扩展，因为 B 之前被点击的时候已经被扩展过了
//                 if (tx < 0 || tx >= board.size() || ty < 0 || ty >= board[0].size() || board[tx][ty] != 'E') {
//                     continue;
//                 }
//                 dfs(board, tx, ty);
//             }
//         }
//     }
//     vector<vector<char>> updateBoard(vector<vector<char>>& board, vector<int>& click) {
//         int x = click[0], y = click[1];
//         if (board[x][y] == 'M') {
//             // 规则 1
//             board[x][y] = 'X';
//         } else {
//             dfs(board, x, y);
//         }
//         return board;
//     }
// };

// 529 BFS
//class Solution {
//public:
//    int dir_x[8] = { 0, 1, 0, -1, 1, 1, -1, -1 };
//    int dir_y[8] = { 1, 0, -1, 0, 1, -1, 1, -1 };
//
//    void bfs(vector<vector<char>>& board, int sx, int sy) {
//        queue<pair<int, int>> Q;
//        vector<vector<int>> vis(board.size(), vector<int>(board[0].size(), 0));
//        Q.push({ sx, sy });
//        vis[sx][sy] = true;
//        while (!Q.empty()) {
//            auto pos = Q.front();
//            Q.pop();
//            int cnt = 0, x = pos.first, y = pos.second;
//            for (int i = 0; i < 8; ++i) {
//                int tx = x + dir_x[i];
//                int ty = y + dir_y[i];
//                if (tx < 0 || tx >= board.size() || ty < 0 || ty >= board[0].size()) {
//                    continue;
//                }
//                // 不用判断 M，因为如果有 M 的话游戏已经结束�?
//                cnt += board[tx][ty] == 'M';
//            }
//            if (cnt > 0) {
//                // 规则 3
//                board[x][y] = cnt + '0';
//            }
//            else {
//                // 规则 2
//                board[x][y] = 'B';
//                for (int i = 0; i < 8; ++i) {
//                    int tx = x + dir_x[i];
//                    int ty = y + dir_y[i];
//                    // 这里不需要在存在 B 的时候继续扩展，因为 B 之前被点击的时候已经被扩展过了
//                    if (tx < 0 || tx >= board.size() || ty < 0 || ty >= board[0].size() || board[tx][ty] != 'E' || vis[tx][ty]) {
//                        continue;
//                    }
//                    Q.push(make_pair(tx, ty));
//                    vis[tx][ty] = true;
//                }
//            }
//        }
//    }
//    vector<vector<char>> updateBoard(vector<vector<char>>& board, vector<int>& click) {
//        int x = click[0], y = click[1];
//        if (board[x][y] == 'M') {
//            // 规则 1
//            board[x][y] = 'X';
//        }
//        else {
//            bfs(board, x, y);
//        }
//        return board;
//    }
//};


//  111
// class Solution {
// public:
//     int minDepth(TreeNode *root) {
//         if (root == nullptr) {
//             return 0;
//         }

//         if (root->left == nullptr && root->right == nullptr) {
//             return 1;
//         }

//         int min_depth = INT_MAX;
//         if (root->left != nullptr) {
//             min_depth = min(minDepth(root->left), min_depth);
//         }
//         if (root->right != nullptr) {
//             min_depth = min(minDepth(root->right), min_depth);
//         }

//         return min_depth + 1;
//     }
// };

// class Solution {
// public:
//     int minDepth(TreeNode *root) {
//         if (root == nullptr) {
//             return 0;
//         }

//         queue<pair<TreeNode *, int> > que;
//         que.emplace(root, 1);
//         while (!que.empty()) {
//             TreeNode *node = que.front().first;
//             int depth = que.front().second;
//             que.pop();
//             if (node->left == nullptr && node->right == nullptr) {
//                 return depth;
//             }
//             if (node->left != nullptr) {
//                 que.emplace(node->left, depth + 1);
//             }
//             if (node->right != nullptr) {
//                 que.emplace(node->right, depth + 1);
//             }
//         }

//         return 0;
//     }
// };


// 201
// class Solution {
// public:
//     int rangeBitwiseAnd(int m, int n) {
//         int shift = 0;
//         // 找到公共前缀
//         while (m < n) {
//             m >>= 1;
//             n >>= 1;
//             ++shift;
//         }
//         return m << shift;
//     }
// };

// class Solution {
// public:
//     int rangeBitwiseAnd(int m, int n) {
//         while (m < n) {
//             // 抹去最右边�?1
//             n = n & (n - 1);
//         }
//         return n;
//     }
// };



//剑指offer 20
// class Solution {
// public:
//     bool isNumber(string s) {
//         int n=s.length();
//         int en=0,dn=0,sn=0,digitn=0;
//         int i=0,j=0,k=n-1;
//         while(i<n){
//             if(s[i]==' ') i++;
//             else break;
//         }
//         if(i==n&&s[i-1]==' ') return 0;
//         j=i;
//         while(k>j){
//             if(s[k]==' ')k--;
//             else break;
//         }
//         for(int i=j+1;i<k;i++)
//             if(s[i]==' ')  return 0;

//         for(int i=j;i<=k;i++){
//             if(s[i]=='+'||s[i]=='-'){
//                 sn++;
//                 if(i==j) 
//                     continue;
//                 return 0;
//             }
//             if(s[i]=='e'||s[i]=='E'){
//                 if(en>0||i==k||i==0) return 0;
//                 en++;
//                 if(s[i-1]=='.'&&i>j+1) ;
//                 else if(!isdigit(s[i-1])) return 0; 
//                 if(s[i+1]=='+'||s[i+1]=='-') {
//                     i++;
//                     if(i==k) return 0;
//                 }

//                 continue;
//             }
//             if(s[i]=='.') {
//                 if(dn>0||en>0) return 0;
//                 // if(i==1&&sn>0) return 0;
//                 if(i<k&&s[i+1]==' ') return 0;
//                 dn++;
//                 continue;
//             }
//             if(isdigit(s[i])) {
//                 digitn++;
//                 continue;
//             }
//             return 0;
//         }
//         return digitn>0;
//     }
// };

//class Solution {
//public:
//    enum State {
//        STATE_INITIAL,
//        STATE_INT_SIGN,
//        STATE_INTEGER,
//        STATE_POINT,
//        STATE_POINT_WITHOUT_INT,
//        STATE_FRACTION,
//        STATE_EXP,
//        STATE_EXP_SIGN,
//        STATE_EXP_NUMBER,
//        STATE_END,
//    };
//
//    enum CharType {
//        CHAR_NUMBER,
//        CHAR_EXP,
//        CHAR_POINT,
//        CHAR_SIGN,
//        CHAR_SPACE,
//        CHAR_ILLEGAL,
//    };
//
//    CharType toCharType(char ch) {
//        if (ch >= '0' && ch <= '9') {
//            return CHAR_NUMBER;
//        }
//        else if (ch == 'e' || ch == 'E') {
//            return CHAR_EXP;
//        }
//        else if (ch == '.') {
//            return CHAR_POINT;
//        }
//        else if (ch == '+' || ch == '-') {
//            return CHAR_SIGN;
//        }
//        else if (ch == ' ') {
//            return CHAR_SPACE;
//        }
//        else {
//            return CHAR_ILLEGAL;
//        }
//    }
//
//    bool isNumber(string s) {
//        unordered_map<State, unordered_map<CharType, State>> transfer{
//            {
//                STATE_INITIAL, {
//                    {CHAR_SPACE, STATE_INITIAL},
//                    {CHAR_NUMBER, STATE_INTEGER},
//                    {CHAR_POINT, STATE_POINT_WITHOUT_INT},
//                    {CHAR_SIGN, STATE_INT_SIGN},
//                }
//            }, {
//                STATE_INT_SIGN, {
//                    {CHAR_NUMBER, STATE_INTEGER},
//                    {CHAR_POINT, STATE_POINT_WITHOUT_INT},
//                }
//            }, {
//                STATE_INTEGER, {
//                    {CHAR_NUMBER, STATE_INTEGER},
//                    {CHAR_EXP, STATE_EXP},
//                    {CHAR_POINT, STATE_POINT},
//                    {CHAR_SPACE, STATE_END},
//                }
//            }, {
//                STATE_POINT, {
//                    {CHAR_NUMBER, STATE_FRACTION},
//                    {CHAR_EXP, STATE_EXP},
//                    {CHAR_SPACE, STATE_END},
//                }
//            }, {
//                STATE_POINT_WITHOUT_INT, {
//                    {CHAR_NUMBER, STATE_FRACTION},
//                }
//            }, {
//                STATE_FRACTION,
//                {
//                    {CHAR_NUMBER, STATE_FRACTION},
//                    {CHAR_EXP, STATE_EXP},
//                    {CHAR_SPACE, STATE_END},
//                }
//            }, {
//                STATE_EXP,
//                {
//                    {CHAR_NUMBER, STATE_EXP_NUMBER},
//                    {CHAR_SIGN, STATE_EXP_SIGN},
//                }
//            }, {
//                STATE_EXP_SIGN, {
//                    {CHAR_NUMBER, STATE_EXP_NUMBER},
//                }
//            }, {
//                STATE_EXP_NUMBER, {
//                    {CHAR_NUMBER, STATE_EXP_NUMBER},
//                    {CHAR_SPACE, STATE_END},
//                }
//            }, {
//                STATE_END, {
//                    {CHAR_SPACE, STATE_END},
//                }
//            }
//        };
//
//        int len = s.length();
//        State st = STATE_INITIAL;
//
//        for (int i = 0; i < len; i++) {
//            CharType typ = toCharType(s[i]);
//            if (transfer[st].find(typ) == transfer[st].end()) {
//                return false;
//            }
//            else {
//                st = transfer[st][typ];
//            }
//        }
//        return st == STATE_INTEGER || st == STATE_POINT || st == STATE_FRACTION || st == STATE_EXP_NUMBER || st == STATE_END;
//    }
//};


//  257
// class Solution {
// public:
//     void construct_paths(TreeNode* root, string path, vector<string>& paths) {
//         if (root != nullptr) {
//             path += to_string(root->val);
//             if (root->left == nullptr && root->right == nullptr) {  // 当前节点是叶子节�?
//                 paths.push_back(path);                              // 把路径加入到答案�?
//             } else {
//                 path += "->";  // 当前节点不是叶子节点，继续递归遍历
//                 construct_paths(root->left, path, paths);
//                 construct_paths(root->right, path, paths);
//             }
//         }
//     }
//     vector<string> binaryTreePaths(TreeNode* root) {
//         vector<string> paths;
//         construct_paths(root, "", paths);
//         return paths;
//     }
// };


//class Solution {
//public:
//    vector<string> binaryTreePaths(TreeNode* root) {
//        vector<string> paths;
//        if (root == nullptr) {
//            return paths;
//        }
//        queue<TreeNode*> node_queue;
//        queue<string> path_queue;
//
//        node_queue.push(root);
//        path_queue.push(to_string(root->val));
//
//        while (!node_queue.empty()) {
//            TreeNode* node = node_queue.front();
//            string path = path_queue.front();
//            node_queue.pop();
//            path_queue.pop();
//
//            if (node->left == nullptr && node->right == nullptr) {
//                paths.push_back(path);
//            }
//            else {
//                if (node->left != nullptr) {
//                    node_queue.push(node->left);
//                    path_queue.push(path + "->" + to_string(node->left->val));
//                }
//
//                if (node->right != nullptr) {
//                    node_queue.push(node->right);
//                    path_queue.push(path + "->" + to_string(node->right->val));
//                }
//            }
//        }
//        return paths;
//    }
//};


// 216
// class Solution {
// public:
//     vector<int> path;
//     vector<vector<int>> ans;
//     int k,sum;
//     void dfs(int cur){
//         if(path.size()>k||path.size()+10-cur<k) return;
//         if(path.size()==k&&accumulate(path.begin(),path.end(),0)==sum) {
//             ans.push_back(path);
//             return ;
//         }
//         path.push_back(cur);
//         dfs(cur+1);
//         path.pop_back();
//         dfs(cur+1);
//     }
//     vector<vector<int>> combinationSum3(int k, int n) {
//         this->k=k;
//         this->sum=n;
//         dfs(1);
//         return ans;
//     }
// };

// class Solution{
// public:
//     vector<int> path;
//     vector<vector<int>> ans;
//     int n,k;
//     bool check(int mask){
//         path.clear();
//         for(int i=0;i<9;i++)
//             if(1<<i&mask) path.push_back(i+1);
//         return path.size()==k&&accumulate(path.begin(),path.end(),0)==n;
//     }

//     vector<vector<int>> combinationSum3(int k,int n){
//         this->n=n;
//         this->k=k;
//         for(int i=0;i<1<<9;i++)
//             if(check(i)) ans.push_back(path);
//         return ans;
//     }
// };


// 94
// class Solution {
// public:
//     void inorder(TreeNode* root, vector<int>& res) {
//         if (!root) {
//             return;
//         }
//         inorder(root->left, res);
//         res.push_back(root->val);
//         inorder(root->right, res);
//     }
//     vector<int> inorderTraversal(TreeNode* root) {
//         vector<int> res;
//         inorder(root, res);
//         return res;
//     }
// };


// class Solution {
// public:
//     vector<int> inorderTraversal(TreeNode* root) {
//         vector<int> res;
//         stack<TreeNode*> stk;
//         while (root != nullptr || !stk.empty()) {
//             while (root != nullptr) {
//                 stk.push(root);
//                 root = root->left;
//             }
//             root = stk.top();
//             stk.pop();
//             res.push_back(root->val);
//             root = root->right;
//         }
//         return res;
//     }
// };

// class Solution{
//     public:
//     vector<int> inorderTraversal(TreeNode* root){
//         vector<int> res;
//         TreeNode* pre=nullptr;
//         while(root){
//             if(root->left){
//                 pre=root->left;
//                 while(pre->right!=nullptr&&pre->right!=root){
//                     pre=pre->right;
//                 }
//                 if(pre->right==nullptr){
//                     pre->right=root;
//                     root=root->left;
//                 }
//                 else{
//                     res.push_back(root->val);
//                     pre->right=nullptr;
//                     root=root->right;
//                 }
//             }
//             else{
//                 res.push_back(root->val);
//                 root=root->right;
//             }
//         }
//         return res;
//     }
// };

// 1024
// class Solution {
// public:
//     int videoStitching(vector<vector<int>>& clips, int T) {
//         int n=clips.size();
//         vector<int> f(T+1,INT_MAX);
//         f[0]=0;
//         for(int i=1;i<=T;i++)
//         {
//             for(int j=0;j<n;j++)
//                 if(clips[j][0]<i&&clips[j][1]>=i)
//                     f[i]=min(f[i],f[clips[j][0]]+1);
//             if(f[i]==INT_MAX) return -1;
//         }
//         return f[T];
//     }
// };

//class Solution {
//public:
//    int videoStitching(vector<vector<int>>& clips, int T) {
//        vector<int> maxn(T);
//        int last = 0, ret = 0, pre = 0;
//        for (vector<int>& it : clips) {
//            if (it[0] < T) {
//                maxn[it[0]] = max(maxn[it[0]], it[1]);
//            }
//        }
//        for (int i = 0; i < T; i++) {
//            last = max(last, maxn[i]);
//            if (i == last) {
//                return -1;
//            }
//            if (i == pre) {
//                ret++;
//                pre = last;
//            }
//        }
//        return ret;
//    }
//};
//


// 845
// class Solution {
// public:
//     int longestMountain(vector<int>& A) {
//         int n=A.size();
//         vector<int> left(n),right(n);
//         for(int i=1;i<n;i++)
//             if(A[i]>A[i-1]) left[i]=1+left[i-1];
//         for(int i=n-2;i>=0;i--)
//             if(A[i]>A[i+1]) right[i]=1+right[i+1];
//         int ans=0;
//         for(int i=1;i<n-1;i++)
//             if(left[i]>0&&right[i]>0)
//                 ans=max(ans,left[i]+right[i]+1);
//         return ans;
//     }
// };

//class Solution {
//public:
//    int longestMountain(vector<int>& A) {
//        int n = A.size();
//        int ans = 0;
//        int left = 0;
//        while (left + 2 < n) {
//            int right = left + 1;
//            if (A[left] < A[left + 1]) {
//                while (right + 1 < n && A[right] < A[right + 1]) {
//                    ++right;
//                }
//                if (right < n - 1 && A[right] > A[right + 1]) {
//                    while (right + 1 < n && A[right] > A[right + 1]) {
//                        ++right;
//                    }
//                    ans = max(ans, right - left + 1);
//                }
//                else {
//                    ++right;
//                }
//            }
//            left = right;
//        }
//        return ans;
//    }
//};


// 1122
// class Solution {
// public:
//     vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
//         unordered_map<int, int> rank;
//         for (int i = 0; i < arr2.size(); ++i) {
//             rank[arr2[i]] = i;
//         }
//         sort(arr1.begin(), arr1.end(), [&](int x, int y) {
//             if (rank.count(x)) {
//                 return rank.count(y) ? rank[x] < rank[y] : true;
//             }
//             else {
//                 return rank.count(y) ? false : x < y;
//             }
//         });
//         return arr1;
//     }
// };

// class Solution {
// public:
//     vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
//         unordered_map<int, int> rank;
//         for (int i = 0; i < arr2.size(); ++i) {
//             rank[arr2[i]] = i;
//         }
//         auto mycmp = [&](int x) -> pair<int, int> {  // 数映射到元组
//             return rank.count(x) ? pair{0, rank[x]} : pair{1, x};
//         };
//         sort(arr1.begin(), arr1.end(), [&](int x, int y) {
//             return mycmp(x) < mycmp(y);
//         });
//         return arr1;
//     }
// };

// class Solution {
// public:
//     vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
//         unordered_map<int, int> rank;
//         int n = arr2.size();
//         for (int i = 0; i < n; ++i) {
//             rank[arr2[i]] = i - n;
//         }
//         sort(arr1.begin(), arr1.end(), [&](int x, int y) {
//             return (rank.count(x) ? rank[x] : x) < (rank.count(y) ? rank[y] : y);
//         });
//         return arr1;
//     }
// };

// class Solution {
// public:
//     vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
//         int upper = *max_element(arr1.begin(), arr1.end());
//         vector<int> frequency(upper + 1);
//         for (int x: arr1) {
//             ++frequency[x];
//         }
//         vector<int> ans;
//         for (int x: arr2) {
//             for (int i = 0; i < frequency[x]; ++i) {
//                 ans.push_back(x);
//             }
//             frequency[x] = 0;
//         }
//         for (int x = 0; x <= upper; ++x) {
//             for (int i = 0; i < frequency[x]; ++i) {
//                 ans.push_back(x);
//             }
//         }
//         return ans;
//     }
// };


// 767
// class Solution {
// public:
//     string reorganizeString(string S) {
//         if (S.length() < 2) {
//             return S;
//         }
//         vector<int> counts(26, 0);
//         int maxCount = 0;
//         int length = S.length();
//         for (int i = 0; i < length; i++) {
//             char c = S[i];
//             counts[c - 'a']++;
//             maxCount = max(maxCount, counts[c - 'a']);
//         }
//         if (maxCount > (length + 1) / 2) {
//             return "";
//         }
//         auto cmp = [&](const char& letter1, const char& letter2) {
//             return counts[letter1 - 'a']  < counts[letter2 - 'a'];
//         };
//         priority_queue<char, vector<char>,  decltype(cmp)> queue{cmp};
//         for (char c = 'a'; c <= 'z'; c++) {
//             if (counts[c - 'a'] > 0) {
//                 queue.push(c);
//             }
//         }
//         string sb = "";
//         while (queue.size() > 1) {
//             char letter1 = queue.top(); queue.pop();
//             char letter2 = queue.top(); queue.pop();
//             sb += letter1;
//             sb += letter2;
//             int index1 = letter1 - 'a', index2 = letter2 - 'a';
//             counts[index1]--;
//             counts[index2]--;
//             if (counts[index1] > 0) {
//                 queue.push(letter1);
//             }
//             if (counts[index2] > 0) {
//                 queue.push(letter2);
//             }
//         }
//         if (queue.size() > 0) {
//             sb += queue.top();
//         }
//         return sb;
//     }
// };

// class Solution {
// public:
//     string reorganizeString(string S) {
//         if (S.length() < 2) {
//             return S;
//         }
//         vector<int> counts(26, 0);
//         int maxCount = 0;
//         int length = S.length();
//         for (int i = 0; i < length; i++) {
//             char c = S[i];
//             counts[c - 'a']++;
//             maxCount = max(maxCount, counts[c - 'a']);
//         }
//         if (maxCount > (length + 1) / 2) {
//             return "";
//         }
//         string reorganizeArray(length, ' ');
//         int evenIndex = 0, oddIndex = 1;
//         int halfLength = length / 2;
//         for (int i = 0; i < 26; i++) {
//             char c = 'a' + i;
//             while (counts[i] > 0 && counts[i] <= halfLength && oddIndex < length) {
//                 reorganizeArray[oddIndex] = c;
//                 counts[i]--;
//                 oddIndex += 2;
//             }
//             while (counts[i] > 0) {
//                 reorganizeArray[evenIndex] = c;
//                 counts[i]--;
//                 evenIndex += 2;
//             }
//         }
//         return reorganizeArray;
//     }
// };


//376
// class Solution {
// public:
//     int wiggleMaxLength(vector<int>& nums) {
//         int n = nums.size();
//         if (n < 2) {
//             return n;
//         }
//         vector<int> up(n), down(n);
//         up[0] = down[0] = 1;
//         for (int i = 1; i < n; i++) {
//             if (nums[i] > nums[i - 1]) {
//                 up[i] = max(up[i - 1], down[i - 1] + 1);
//                 down[i] = down[i - 1];
//             } else if (nums[i] < nums[i - 1]) {
//                 up[i] = up[i - 1];
//                 down[i] = max(up[i - 1] + 1, down[i - 1]);
//             } else {
//                 up[i] = up[i - 1];
//                 down[i] = down[i - 1];
//             }
//         }
//         return max(up[n - 1], down[n - 1]);
//     }
// };

// class Solution {
// public:
//     int wiggleMaxLength(vector<int>& nums) {
//         int n = nums.size();
//         if (n < 2) {
//             return n;
//         }
//         int up = 1, down = 1;
//         for (int i = 1; i < n; i++) {
//             if (nums[i] > nums[i - 1]) {
//                 up = max(up, down + 1);
//             } else if (nums[i] < nums[i - 1]) {
//                 down = max(up + 1, down);
//             }
//         }
//         return max(up, down);
//     }
// };

// class Solution {
// public:
//     int wiggleMaxLength(vector<int>& nums) {
//         int n = nums.size();
//         if (n < 2) {
//             return n;
//         }
//         int up = 1, down = 1;
//         for (int i = 1; i < n; i++) {
//             if (nums[i] > nums[i - 1]) {
//                 up = down + 1;
//             } else if (nums[i] < nums[i - 1]) {
//                 down = up + 1;
//             }
//         }
//         return max(up, down);
//     }
// };

// class Solution {
// public:
//     int wiggleMaxLength(vector<int>& nums) {
//         int n = nums.size();
//         if (n < 2) {
//             return n;
//         }
//         int prevdiff = nums[1] - nums[0];
//         int ret = prevdiff != 0 ? 2 : 1;
//         for (int i = 2; i < n; i++) {
//             int diff = nums[i] - nums[i - 1];
//             if ((diff > 0 && prevdiff <= 0) || (diff < 0 && prevdiff >= 0)) {
//                 ret++;
//                 prevdiff = diff;
//             }
//         }
//         return ret;
//     }
// };


// 5245
// class Solution {
// public:
//     int maxHeight(vector<vector<int>>& cuboids) {
//         int n = cuboids.size();
//         for (auto &c : cuboids)
//             sort(c.begin(), c.end());
//         sort(cuboids.begin(), cuboids.end());
//         vector<int> dp(n);
//         int ans = 0;
//         for (int i = 0; i < n; ++i) {
//             for (int j = 0; j < i; ++j)
//                 if (cuboids[j][1] <= cuboids[i][1] && cuboids[j][2] <= cuboids[i][2])
//                     dp[i] = max(dp[i], dp[j]);
//             dp[i] += cuboids[i][2];
//             ans = max(ans, dp[i]);
//         }
//         return ans;
//     }
// };


// 1584
// Solution1
//class DisjointSetUnion {
//private:
//    vector<int> f, rank;
//    int n;
//
//public:
//    DisjointSetUnion(int _n) {
//        n = _n;
//        rank.resize(n, 1);
//        f.resize(n);
//        for (int i = 0; i < n; i++) {
//            f[i] = i;
//        }
//    }
//
//    int find(int x) {
//        return f[x] == x ? x : f[x] = find(f[x]);
//    }
//
//    int unionSet(int x, int y) {
//        int fx = find(x), fy = find(y);
//        if (fx == fy) {
//            return false;
//        }
//        if (rank[fx] < rank[fy]) {
//            swap(fx, fy);
//        }
//        rank[fx] += rank[fy];
//        f[fy] = fx;
//        return true;
//    }
//};
//
//struct Edge {
//    int len, x, y;
//    Edge(int len, int x, int y) : len(len), x(x), y(y) {
//    }
//};
//
//class Solution {
//public:
//    int minCostConnectPoints(vector<vector<int>>& points) {
//        auto dist = [&](int x, int y) -> int {
//            return abs(points[x][0] - points[y][0]) + abs(points[x][1] - points[y][1]);
//        };
//        int n = points.size();
//        DisjointSetUnion dsu(n);
//        vector<Edge> edges;
//        for (int i = 0; i < n; i++) {
//            for (int j = i + 1; j < n; j++) {
//                edges.emplace_back(dist(i, j), i, j);
//            }
//        }
//        sort(edges.begin(), edges.end(), [](Edge a, Edge b) -> int { return a.len < b.len; });
//        int ret = 0, num = 1;
//        for (auto& [len, x, y] : edges) {
//            if (dsu.unionSet(x, y)) {
//                ret += len;
//                num++;
//                if (num == n) {
//                    break;
//                }
//            }
//        }
//        return ret;
//    }
//};
// Solution2
//class DisjointSetUnion {
//private:
//    vector<int> f, rank;
//    int n;
//
//public:
//    DisjointSetUnion(int _n) {
//        n = _n;
//        rank.resize(n, 1);
//        f.resize(n);
//        for (int i = 0; i < n; i++) {
//            f[i] = i;
//        }
//    }
//
//    int find(int x) {
//        return f[x] == x ? x : f[x] = find(f[x]);
//    }
//
//    int unionSet(int x, int y) {
//        int fx = find(x), fy = find(y);
//        if (fx == fy) {
//            return false;
//        }
//        if (rank[fx] < rank[fy]) {
//            swap(fx, fy);
//        }
//        rank[fx] += rank[fy];
//        f[fy] = fx;
//        return true;
//    }
//};
//
//class BIT {
//public:
//    vector<int> tree, idRec;
//    int n;
//
//    BIT(int _n) {
//        n = _n;
//        tree.resize(n, INT_MAX);
//        idRec.resize(n, -1);
//    }
//
//    int lowbit(int k) {
//        return k & (-k);
//    }
//
//    void update(int pos, int val, int id) {
//        while (pos > 0) {
//            if (tree[pos] > val) {
//                tree[pos] = val;
//                idRec[pos] = id;
//            }
//            pos -= lowbit(pos);
//        }
//    }
//
//    int query(int pos) {
//        int minval = INT_MAX;
//        int j = -1;
//        while (pos < n) {
//            if (minval > tree[pos]) {
//                minval = tree[pos];
//                j = idRec[pos];
//            }
//            pos += lowbit(pos);
//        }
//        return j;
//    }
//};
//
//struct Edge {
//    int len, x, y;
//    Edge(int len, int x, int y) : len(len), x(x), y(y) {
//    }
//    bool operator<(const Edge& a) const {
//        return len < a.len;
//    }
//};
//
//struct Pos {
//    int id, x, y;
//    bool operator<(const Pos& a) const {
//        return x == a.x ? y < a.y : x < a.x;
//    }
//};
//
//class Solution {
//public:
//    vector<Edge> edges;
//    vector<Pos> pos;
//
//    void build(int n) {
//        sort(pos.begin(), pos.end());
//        vector<int> a(n), b(n);
//        for (int i = 0; i < n; i++) {
//            a[i] = pos[i].y - pos[i].x;
//            b[i] = pos[i].y - pos[i].x;
//        }
//        sort(b.begin(), b.end());
//        b.erase(unique(b.begin(), b.end()), b.end());
//        int num = b.size();
//        BIT bit(num + 1);
//        for (int i = n - 1; i >= 0; i--) {
//            int poss = lower_bound(b.begin(), b.end(), a[i]) - b.begin() + 1;
//            int j = bit.query(poss);
//            if (j != -1) {
//                int dis = abs(pos[i].x - pos[j].x) + abs(pos[i].y - pos[j].y);
//                edges.emplace_back(dis, pos[i].id, pos[j].id);
//            }
//            bit.update(poss, pos[i].x + pos[i].y, i);
//        }
//    }
//
//    void solve(vector<vector<int>>& points, int n) {
//        pos.resize(n);
//        for (int i = 0; i < n; i++) {
//            pos[i].x = points[i][0];
//            pos[i].y = points[i][1];
//            pos[i].id = i;
//        }
//        build(n);
//        for (int i = 0; i < n; i++) {
//            swap(pos[i].x, pos[i].y);
//        }
//        build(n);
//        for (int i = 0; i < n; i++) {
//            pos[i].x = -pos[i].x;
//        }
//        build(n);
//        for (int i = 0; i < n; i++) {
//            swap(pos[i].x, pos[i].y);
//        }
//        build(n);
//    }
//
//    int minCostConnectPoints(vector<vector<int>>& points) {
//        int n = points.size();
//        solve(points, n);
//
//        DisjointSetUnion dsu(n);
//        sort(edges.begin(), edges.end());
//        int ret = 0, num = 1;
//        for (auto& [len, x, y] : edges) {
//            if (dsu.unionSet(x, y)) {
//                ret += len;
//                num++;
//                if (num == n) {
//                    break;
//                }
//            }
//        }
//        return ret;
//    }
//};


// 5691
// 超时
// class Solution {
// public:
//     bool fadd(vector<int>& v,int sum,const int& t,int& i){
//         if(t==sum)
//             return 1;
//         if(i==v.size()||6==v[i])
//             return 0;
//         if(6-v[i]+sum<=t)
//         {
//             i++;
//             return fadd(v,sum+6-v[i-1],t,i);
//         }
//         else{
//             i++;
//             return 1;
//         }
//     }
//     bool fsub(vector<int>& v,int sum,const int& t,int& i){
//         if(t==sum)
//             return 1;
//         if(i==-1||1==v[i])
//             return 0;
//         if(sum-v[i]+1>=t)
//         {
//             i--;
//             return fsub(v,sum+1-v[i+1],t,i);
//         }
//         else{
//             i--;
//             return 1;
//         }
//     }

//     int minOperations(vector<int>& nums1, vector<int>& nums2) {
//         int n=nums1.size(),m=nums2.size();
//         sort(nums1.begin(),nums1.end());
//         sort(nums2.begin(),nums2.end());
//         int s1=0;
//         int s2=0;
//         // fsub(nums1,21,10,s1);
//         // cout<<s1;
//         for(auto s:nums1)
//             s1+=s;
//         for(auto s:nums2)
//             s2+=s;
//         if(s1>s2)
//         {
//             vector<int> t=nums2;
//             nums2=nums1;
//             nums1=t;
//             int te=s1;
//             s1=s2;
//             s2=te;
//             swap(n,m);
//         }
//         else if(s1==s2)return 0;

//         int best=100000000;
//         int bestS=-1;
//         int bestq1=-1,bestq2=-1;
//         for(int sum=s1;sum<=s2;sum++)
//         {
//             int q1=0,q2=m-1;
//             if(fadd(nums1,s1,sum,q1)&&fsub(nums2,s2,sum,q2)){
//                 if(best>q1+m-q2-1){
//                     best=q1+m-q2-1;
//                     bestS=sum;
//                     bestq1=q1;
//                     bestq2=m-1-q2;
//                 }
//             }
//         }
//         cout<<bestS<<endl<<bestq1<<endl<<bestq2<<endl;
//         return best==100000000?-1:best;

//     }
// };

// Solution1
// class Solution {
// public:
//     int minOperations(vector<int>& a, vector<int>& b) {
//         sort(a.begin(), a.end());
//         sort(b.begin(), b.end());
//         int sa = accumulate(a.begin(), a.end(), 0);
//         int sb = accumulate(b.begin(), b.end(), 0);
//         if (sa > sb) swap(sa, sb), swap(a, b);
//         int i = 0, j = b.size() - 1;
//         int cnt = 0;
//         while (i < a.size() && 0 <= j && sa < sb) {
//             if (6 - a[i] > b[j] - 1) { // 选择变化差值最大的一�?
//                 sa += 6 - a[i++];
//             } else sb -= b[j--] - 1;
//             ++cnt;
//         }
//         while (i < a.size() && sa < sb) {
//             sa += 6 - a[i++];
//             ++cnt;
//         }
//         while (0 <= j && sa < sb) {
//             sb -= b[j--] - 1;
//             ++cnt;
//         }
//         return sa >= sb ? cnt : -1;
//     }
// };
// Solution2
//class Solution {
//public:
//    int minOperations(vector<int>& nums1, vector<int>& nums2) {
//        int n = nums1.size(), m = nums2.size();
//        if (n > m * 6 || m > n * 6)
//            return -1;
//        int s1 = 0, s2 = 0;
//        vector<int> inc(6), dec(6);
//        for (int num : nums1) {
//            s1 += num;
//            if (num < 6)
//                inc[6 - num]++;
//            if (num > 1)
//                dec[num - 1]++;
//        }
//        for (int num : nums2) {
//            s2 += num;
//            if (num < 6)
//                dec[6 - num]++;
//            if (num > 1)
//                inc[num - 1]++;
//        }
//        if (s1 == s2)
//            return 0;
//
//        int cnt = 0;
//        if (s1 > s2) {
//            for (int i = 5; i >= 1; --i) {
//                while (dec[i]) {
//                    s1 -= i;
//                    dec[i]--;
//                    cnt++;
//                    if (s1 <= s2)
//                        return cnt;
//                }
//            }
//        }
//        else {
//            for (int i = 5; i >= 1; --i) {
//                while (inc[i]) {
//                    s1 += i;
//                    inc[i]--;
//                    cnt++;
//                    if (s1 >= s2)
//                        return cnt;
//                }
//            }
//        }
//
//        return -1;
//    }
//};


//338
// �?
// class Solution {
// public:
//     int countOnes(int x) {
//         int ones = 0;
//         while (x > 0) {
//             x &= (x - 1);
//             ones++;
//         }
//         return ones;
//     }

//     vector<int> countBits(int num) {
//         vector<int> bits(num + 1);
//         for (int i = 0; i <= num; i++) {
//             bits[i] = countOnes(i);
//         }
//         return bits;
//     }
// };

// �?
// class Solution {
// public:
//     vector<int> countBits(int num) {
//         vector<int> bits(num + 1);
//         int highBit = 0;
//         for (int i = 1; i <= num; i++) {
//             if ((i & (i - 1)) == 0) {
//                 highBit = i;
//             }
//             bits[i] = bits[i - highBit] + 1;
//         }
//         return bits;
//     }
// };

// �?
// class Solution {
// public:
//     vector<int> countBits(int num) {
//         vector<int> bits(num + 1);
//         for (int i = 1; i <= num; i++) {
//             bits[i] = bits[i >> 1] + (i & 1);
//         }
//         return bits;
//     }
// };

// �?
// class Solution {
// public:
//     vector<int> countBits(int num) {
//         vector<int> bits(num + 1);
//         for (int i = 1; i <= num; i++) {
//             bits[i] = bits[i & (i - 1)] + 1;
//         }
//         return bits;
//     }
// };

<<<<<<< HEAD

// 1771
// class Solution {
// public:
//     int longestPalindrome(string w1, string w2) {
//         int l1 = w1.size(), l2 = w2.size(), len = l1 + l2;
//         // ƴ��w1 w2�õ�һ���������ַ���w
//         string w = w1 + w2;
//         vector<vector<int>> dp(len, vector<int>(len, 0));
//         // �����ж�word1�����һ���ַ��Ƿ���word2��һ���ַ���ȣ��������res��ʼ��Ϊ2.
//         int res = (w[l1-1] == w[l1]) ? 2: 0;
//         // ���������������Ӵ��ⷨһ��
//         for(int i = 0 ; i < len ; i ++) {
//             dp[i][i] = 1;
//         }
//         for(int i = 0 ; i < len - 1 ; i ++) {
//             dp[i][i+1] = (w[i] == w[i+1])? 2: 1;
//         }

//         for(int l = 2 ; l < len ; l ++) {
//             for(int i = 0 ; i + l < len ; i ++) {
//                 int j = i + l;
//                 if(w[i] == w[j]) {
//                     dp[i][j] = dp[i+1][j-1] + 2;
//                     // Ψһ����������ڵ������ַ���ȸ���������Ӵ�ʱ
//                     // �� i j �ֱ����������ַ������Ÿ������ս��ֵ
//                     if(i < l1 && j >= l1){
//                         res = max(res, dp[i][j]);
//                     }
//                 }
//                 else {
//                     dp[i][j] = max(dp[i][j-1], dp[i+1][j]);
//                 }
//             }
//         }
//         return res;
//     }
// };

// class Solution {
// public:
//     static const int N = 2e3 + 5;
//     // dp[i][j]��ʾ���� i ~ j����Ĵ��ĳ���
//     int dp[N][N];

//     int dfs(int i, int j, const string &s) {
//         if (i == j) return 1;
//         if (i > j) return 0;
//         if (dp[i][j] != -1) return dp[i][j];

//         int ret = 0;
//         if (s[i] == s[j]) {
//             ret = std::max(ret, dfs(i + 1, j - 1, s) + 2);
//         } else {
//             ret = std::max(ret, dfs(i + 1, j, s));
//             ret = std::max(ret, dfs(i, j - 1, s));
//         }
//         return dp[i][j] = ret;
//     }
//     int longestPalindrome(string word1, string word2) {
//         std::memset(dp, -1, sizeof dp);

//         string s = word1 + word2;
//         int ans = 0;
//         int n1 = word1.size(), n2 = word2.size();
//         for (int i = 0; i < n1; ++i) {
//             for (int j = 0; j < n2; ++j) {
//                 // ��֤word1, word2ѡ�����Ƿǿյ�������
//                 if (s[i] == s[n1 + j])
//                     ans = std::max(ans, dfs(i, n1 + j, s));
//             }
//         }
//         return ans;
//     }
// };

//1770
//class Solution {
//public:
//    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
//        vector<vector<long long>> dp(1005, vector<long long>(1005, 0));
//        long long m = multipliers.size(), res = INT_MIN, n = nums.size();
//        for (int k = 1; k <= m; ++k) {
//            for (int i = 0; i <= k; i++) {
//                if (i == 0) dp[i][k - i] = dp[i][k - i - 1] + nums[n - k + i] * multipliers[k - 1];
//                else if (i == k) dp[i][k - i] = dp[i - 1][k - i] + nums[i - 1] * multipliers[k - 1];
//                else dp[i][k - i] = max(dp[i][k - i - 1] + nums[n - k + i] * multipliers[k - 1], dp[i - 1][k - i] + nums[i - 1] * multipliers[k - 1]);
//                if (k == m) res = max(res, dp[i][k - i]);
//            }
//        }
//        return res;
//    }
//};

// 1654
// class Solution {
// public:
//     int minimumJumps(vector<int>& forbidden, int a, int b, int x) {
//         int g = __gcd(a,b);
//         if((x % g) != 0) {
//             return -1;
//         }

//         int vis[6001], ban[2001];
//         memset(vis, 0, sizeof(vis));
//         memset(ban, 0, sizeof(ban));
//         for(int v : forbidden) {
//             vis[v] = 1;
//             ban[v] = 1;
//         }

//         priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int,int>>> q;
//         q.emplace(0, 0);

//         while(q.size()) {
//             auto [steps, node] = q.top();
//             q.pop();
//             if(a >= b && node > x) {
//                 continue;
//             }
//             if(node == x) {
//                 return steps;
//             }
//             if(!vis[node]) {
//                 vis[node] = 1;
//                 if(node + a <= 6000 && !vis[node + a]) {
//                     q.emplace(steps + 1, node + a);
//                 }
//                 if( node + a - b >= 0 && !vis[node + a - b] && !(node + a <= 2000 && ban[node + a])) {
//                     q.emplace(steps + 2, node + a - b);
//                 }
//             }
//         }
//         return -1;
//     }
// };
// ��2
// class Solution {
// public:
//     vector<int> visited;
// 	int cnt = 1000000;
// 	void dfs(int x, int a, int b, int count, int t){ //t������¼����ߵĴ���
// 		if(x == 0){
// 			cnt = min(cnt, count); //�õ���С����
// 			return ;
// 		} 
// 		if(x - a >= 0 && visited[x - a] != 1){ //���յ�������
// 			visited[x - a] = 1;
// 			dfs(x - a, a, b, count + 1, 0);
//             // visited[x - a] = 0; // ���ﲻ�����ã�����
// 		}
// 		if(x + b < 6001 && visited[x + b] != 1 && t == 0){ //���յ���ǰ�ߣ�ע������t��tΪ0����ִ��
// 			visited[x + b] = 1;
// 			dfs(x + b, a, b, count + 1, 1);//�˴���t���ǣ��Է�����������
//             visited[x + b] = 0; //����
// 		}
// 	}
//     int minimumJumps(vector<int>& forbidden, int a, int b, int x) {
// 		visited.resize(6001, 0);
// 		for(int i = 0; i < forbidden.size(); i++) visited[forbidden[i]] = 1;
// 		dfs(x, a, b, 0, 0); //���յ�������
// 		if(cnt < 1000000) return cnt;
// 		else return -1;
//     }
// };
// 
// 282. 给表达式添加运算�?
// class Solution {
// public:
//     vector<string> addOperators(string num, int target) {
//         int n = num.length();
//         vector<string> ans;

//         function<void(string&, int, long, long)> backtrack = [&](string &expr, int i, long res, long mul) {
//             if (i == n) {
//                 if (res == target) {
//                     ans.emplace_back(expr);
//                 }
//                 return;
//             }
//             int signIndex = expr.size();
//             if (i > 0) {
//                 expr.push_back(0); // 占位，下面填充符�?
//             }
//             long val = 0;
//             // 枚举截取的数字长度（取多少位），注意数字可以是单�?0 但不能有前导�?
//             for (int j = i; j < n && (j == i || num[i] != '0'); ++j) {
//                 val = val * 10 + num[j] - '0';
//                 expr.push_back(num[j]);
//                 if (i == 0) { // 表达式开头不能添加符�?
//                     backtrack(expr, j + 1, val, val);
//                 } else { // 枚举符号
//                     expr[signIndex] = '+'; backtrack(expr, j + 1, res + val, val);
//                     expr[signIndex] = '-'; backtrack(expr, j + 1, res - val, -val);
//                     expr[signIndex] = '*'; backtrack(expr, j + 1, res - mul + mul * val, mul * val);
//                 }
//             }
//             expr.resize(signIndex);
//         };

//         string expr;
//         backtrack(expr, 0, 0, 0);
//         return ans;
//     }
// };
