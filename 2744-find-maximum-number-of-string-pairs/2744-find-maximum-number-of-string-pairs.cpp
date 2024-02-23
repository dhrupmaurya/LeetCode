class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int z=0;
        vector<string>st;
        for(int i=0;i<words.size();i++){
           string rev = words[i];
           reverse(rev.begin(),rev.end());
           st.push_back(rev);
           for(int j=0;j<i;j++){
               if(st[j]==words[i]){
               z++;
               }
           }
        }
        return z;
    }
};