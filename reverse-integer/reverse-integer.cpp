class Solution {
public:
    int reverse(int x) {
       long long int res=0;
        while(x!=0){
            int rem=x%10;
            res=res*10+rem;
            x=x/10;
        }
        if(res>INT_MAX || res<INT_MIN){
            return 0;
        }
        return res;
    }
};