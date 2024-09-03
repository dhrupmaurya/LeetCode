class Solution {
public:
    bool isPalindrome(string s) {
        
       vector<char>str;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(isalnum(s[i])){
                str.push_back(tolower(s[i]));
            }
        }
        int i=0;
        int j=str.size()-1;
        for(i,j;i<j;i++,j--){
            if(str[i]!=str[j]){
                return false;
            }
        }
        return true;
    }
};

