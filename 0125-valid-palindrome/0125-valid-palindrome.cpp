class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        vector<char> str(n);
        vector<char> str1(n);
        for(int i=0;i<n;i++){
           if(isalnum(s[i])){
               str.push_back(tolower(s[i]));
           }
        }
        for(int i=n-1;i>=0;i--){
           if(isalnum(s[i])){
               str1.push_back(tolower(s[i]));
           }
        }
        return str==str1;
    }
};