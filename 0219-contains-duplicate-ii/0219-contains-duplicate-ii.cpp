class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
       // sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n && j <= i+k;j++)
            if(nums[i] == nums[j] && abs(i - j) <= k){
                return true;
            }
        }
        return false;
    }
};