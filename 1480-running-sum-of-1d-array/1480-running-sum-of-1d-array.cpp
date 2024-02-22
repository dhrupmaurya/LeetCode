class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>num;
        num.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            num.push_back(num[i-1]+nums[i]);
        }
        return num;
    }
};