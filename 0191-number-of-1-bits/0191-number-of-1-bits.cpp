class Solution {
public:
    int hammingWeight(uint32_t n) {
        int z=0;
        while(n!=0){
            z++;
            n=n&(n-1);
        }
        return z;
    }
};