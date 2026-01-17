class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        for(int j = 1; j < nums.size(); ++j){
            if(nums[j-1] == 0){
                if(nums[j] != 0){
                    swap(nums[i++], nums[j]);
                }
                else{
                    continue;
                }
            }else{
                ++i;
            }
        }
    }
};