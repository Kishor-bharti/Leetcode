// Replace All Digits with Characters
class Solution {
public:
    string replaceDigits(string s) {
        string temp = "";
        for(int i = 0; i < s.size(); i++){
            if(i % 2 != 0){
                int n1 = s[i]-'0';
                int n2 = s[i-1] + n1;
                char ch = n2;
                temp += ch;
            }else{
                temp += s[i];
            }
        }
        return temp;
    }
};