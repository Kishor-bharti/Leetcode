//  Find the missing number (1…N)
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size(), sum = (n*(n+1))/2;
        int total = 0;
        for(int i = 0; i < n; ++i){
            total += nums[i];
        }
        return sum - total;
    }
};