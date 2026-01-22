// Check if array is sorted
class Solution {
public:
    bool isSorted(int *arr, int st, int end){
        if(st==end) return true;
        if(st < end){ 
            if(arr[st] <= arr[st+1]){ // my code was almost correct but one thing  was missing , i.e, '=' when 1,2,2,3 happens (suggested and added by chatgpt)
                return isSorted(arr, st+1, end);
            }
        }
        return false;
    }
};

/*
✅ Fix (non-decreasing order — standard definition)
bool isSorted(int *arr, int st, int end){
    if(st >= end) return true;

    if(arr[st] <= arr[st + 1])
        return isSorted(arr, st + 1, end);

    return false;
}

*/

/*
🔥 Clean & professional version
bool isSorted(int *arr, int st, int end){
    if(st >= end) return true;
    return (arr[st] <= arr[st + 1]) && isSorted(arr, st + 1, end);
}
*/