class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        if(k == 0) return;

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k , nums.end());
    }
};

// 2nd Solution...
/*
*   class Solution {
*   public:
*       void rotate(vector<int>& nums, int k) {
*           int n = nums.size();
*           k %= n;
*           k = n - k;   // 🔥 key fix
*   
*           int l = 0, r = k - 1;
*           while (l < r) swap(nums[l++], nums[r--]);
*   
*           l = k; r = n - 1;
*           while (l < r) swap(nums[l++], nums[r--]);
*   
*           l = 0; r = n - 1;
*           while (l < r) swap(nums[l++], nums[r--]);
*       }
*   };
*/