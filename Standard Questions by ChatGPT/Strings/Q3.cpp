// Count vowels and consonants
class Solution {
public:
    void countVowelsAndConsonants(string s) {
        int vowels = 0, consonants = 0;

        for (int i = 0; i < s.size(); ++i) {
            if (isalpha(s[i])) {   // only letters
                char c = tolower(s[i]);
                if (c == 'a' || c == 'e' || c == 'i' || 
                    c == 'o' || c == 'u') {
                    vowels++;
                } else {
                    consonants++;
                }
            }
        }

        cout << "Vowels: " << vowels
             << "\nConsonants: " << consonants << endl;
    }
};