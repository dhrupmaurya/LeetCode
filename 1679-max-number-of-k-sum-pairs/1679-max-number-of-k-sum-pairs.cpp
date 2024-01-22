class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n=nums.size()-1,m=0;
        int z=0;
        sort(nums.begin(),nums.end());
       while(m<n){
           if(nums[m]+nums[n]==k){
               z++;
               n--;
               m++;
           }
           else if(nums[m]+nums[n]>k){
               n--;
           }
           else{
               m++;
           }
       }
        return z;
    }
};