class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size();
        int z=0,i=0,j=1;
       while(i<n-1){
           for(j=1;j<n;j++){
            if(nums[i]==nums[j] && i<j){
                z++;
            }
           }
           i++;
        }
        return z;
    }
};