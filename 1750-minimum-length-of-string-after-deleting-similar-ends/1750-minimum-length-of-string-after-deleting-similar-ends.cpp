class Solution {
public:
    int minimumLength(string s) {
        int n = s.size();
        int i = 0;
        int j = n - 1;
        while (i < j && s[i] == s[j]) {
            char curr = s[i];
            while (i <= j && s[i] == curr) {
                i++;
            }
            while (j>=i && s[j] == curr) {
                j--;
            }
        }
        
        return j - i + 1;
    }
};
