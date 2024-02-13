class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        vector<string>str;
        str=words;
        int n=words.size();
        for(int i=0;i<n;i++){
            reverse(str[i].begin(),str[i].end());
            if(str[i]==words[i]){
                return words[i];
            }

        }
        return "";
    }
};