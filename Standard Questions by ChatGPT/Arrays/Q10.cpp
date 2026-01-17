// solution by chatGPT...
class Solution {
public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        int i = 0, j = 0;
        vector<int> res;

        while (i < a.size() && j < b.size()) {
            if (a[i] < b[j]) {
                if (res.empty() || res.back() != a[i])
                    res.push_back(a[i]);
                i++;
            }
            else if (a[i] > b[j]) {
                if (res.empty() || res.back() != b[j])
                    res.push_back(b[j]);
                j++;
            }
            else {  // a[i] == b[j]
                if (res.empty() || res.back() != a[i])
                    res.push_back(a[i]);
                i++;
                j++;
            }
        }

        while (i < a.size()) {
            if (res.empty() || res.back() != a[i])
                res.push_back(a[i]);
            i++;
        }

        while (j < b.size()) {
            if (res.empty() || res.back() != b[j])
                res.push_back(b[j]);
            j++;
        }

        return res;
    }
};