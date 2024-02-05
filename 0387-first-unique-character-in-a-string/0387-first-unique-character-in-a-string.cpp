class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.size();                                        //97 to 122
        int Hash[26]={0};
        for(int i=0;i<n;i++){
            Hash[s[i]-97]++;
        }
        for(int j=0;j<n;j++){
            if(Hash[s[j]-97]==1){
                return j;
            }
        }
        return -1;
    }
};