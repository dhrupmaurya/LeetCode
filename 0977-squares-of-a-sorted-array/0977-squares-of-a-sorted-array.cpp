class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>num;
        for(int i=0;i<n;i++){
            num.push_back(nums[i]*nums[i]);
        }
        sort(num.begin(),num.end());
        return num;
    }
};