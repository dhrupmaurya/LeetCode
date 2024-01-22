class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        for(int i=0,j=n-1;i<=j;i++,j--){
            int t=s[i];
            s[i]=s[j];
            s[j]=t;
        }

    }
};