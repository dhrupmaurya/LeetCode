class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n=s.size(),z=0;
        string str(n,'0');
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                z++;
            }
        }
        for(int i=0;i<z-1;i++){
            str[i]='1';
        }
        str[n-1]='1';
        return str;
    }
};