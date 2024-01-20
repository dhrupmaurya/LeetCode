#include <vector>

class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> str;
        int n = chars.size();
        int z = 1, i = 0, j;

        while (i < n) {
            char currentChar = chars[i];
            z = 1;
            for (j = i + 1; j < n && chars[i] == chars[j]; j++) {
                z++;
            }
            str.push_back(currentChar);
            if (z > 1) {
                string countStr=to_string(z);
                for(char k:countStr){
                    str.push_back(k);
                }
            }

            i = j;
        }
        chars = str;

        return chars.size();
    }
};
