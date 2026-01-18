// Check if a string is a palindrome
class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.size()-1;
        while(l < r){
            if(isalnum(s[l]) && isalnum(s[r])){
                s[l] = tolower(s[l]); s[r] = tolower(s[r]);
                if(s[l++] == s[r--]) continue;
                else{
                    return false;
                }
            }
            else{
                if(!isalnum(s[l])) l++;
                else r--;
            }
        }
        return true;
    }
};