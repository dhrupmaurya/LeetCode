class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        int n=nums.size();
        int i;
        sort(nums.begin(),nums.end());
        if(n<3){
            return -1;
        }
        for (int i = n - 1; i >= 2; i--) {
           long long  int max = nums[i];
           long long int sum=0;
           for(int j=i-1;j>=0;j--){
               sum+=nums[j];
           }
            if (sum > max) {
                return sum + max;
            }
        }
        return -1;
    }
};