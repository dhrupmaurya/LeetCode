class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n=tokens.size();
        sort(tokens.begin(),tokens.end());
        int z=0;
        int i=0,j=n-1;
        if(n==0 || power<tokens[0]){
            return 0;
        }
        while(i<=j){
            if(tokens[i]<=power){
                power=power-tokens[i];
               z++;
               i++;
            }
            else if(z>0 && i!=j){
                 power=power+tokens[j];
                z--;
                j--;
            }
            else{
                break;
            }
        }
        return z;
        
        
    }
};