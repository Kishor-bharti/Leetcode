class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        if(arr.size() == 1){
            return true;
        }
        for(int i = 1; i < arr.size(); i++){
            if(arr[i-1] > arr[i]){
                return false;
            }
        }
        return true;
    }
};