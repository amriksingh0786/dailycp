#include <bits/stdc++.h>
using namespace std;

class Solution {
    bool check(int N) {
        return (int(log10(N) + 1) & 1) == 1;
    }

    public:
    int solve(vector<int>& nums) {
        int ans = 0;
        for (auto n : nums) {
            if (check(n)) ++ans;
        }
        return ans;
    }
};


int solve(vector<int>& nums) {
    return (new Solution())->solve(nums);
}
