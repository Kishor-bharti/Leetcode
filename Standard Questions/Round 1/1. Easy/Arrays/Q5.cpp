// Remove duplicates from a sorted array
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 1) return 1;
        int unique = 1;
        int i = 1;
        for(int j = 1; j < nums.size(); ++j){
            if(nums[j-1] == nums[j]) continue;
            nums[i++] = nums[j];
            unique++;
        }
        return unique;
    }
};