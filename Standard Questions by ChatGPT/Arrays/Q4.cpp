class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int max = INT_MIN, secondMax;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] > max){
                secondMax = max;
                max = arr[i];
            }
            else if(arr[i] < max && arr[i] > secondMax){
                secondMax = arr[i];
            }
        }
        return secondMax;
    }
};