class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int count=1,z=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                count++;
            }
            else{
                z=max(z,count);
                count=1;
            }
        }
        return max(z,count);
    }
};