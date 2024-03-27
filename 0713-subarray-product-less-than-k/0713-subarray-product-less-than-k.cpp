class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=0 || nums.empty()){
            return 0;
        }
        int n=nums.size();
        int count=0,product=1;
       for(int left=0,right=0;right<n;right++){
        product=product*nums[right];
        while(product>=k && left<=right){
            product=product/nums[left];
            left++;
        }
        count=count+(right-left+1);

       }
       return count;
    }
};