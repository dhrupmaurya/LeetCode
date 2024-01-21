class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n!=m){
            return false;
        }
        int Hash[26]={0};
        for(int i=0;i<n;i++){
            Hash[s[i]-97]+=1;//As ASCII value of a is 97
        }
        for(int i=0;i<m;i++){
            Hash[t[i]-97]-=1;
            if(Hash[t[i]-97]<0){
                return false;
            }
        }
        return true;
        
    }
};