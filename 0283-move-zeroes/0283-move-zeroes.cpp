class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        vector<int>num1(n,0);
        int j=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                num1[j]=nums[i];
                j++;
            }
        }
        for(int i=0;i<n;i++){
            nums[i]=num1[i];
        }
    }
};