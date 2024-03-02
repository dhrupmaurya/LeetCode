class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0;
        int sum1=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        }
         for(int i=0;i<nums.size();i++){
              int n=nums[i];
            while(n>0){
                sum1+=n%10;
                n/=10;
            }
        }
        
      
        return abs(sum-sum1);
        
    }
};