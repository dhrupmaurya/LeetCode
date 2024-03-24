class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int i=0,j=1;
        while(j<n){
            if(nums[i]==nums[j]){
                return nums[i];
            }
             i++;
             j++;
        }
        return -1;
    }
};