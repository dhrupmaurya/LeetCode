class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0,mid=0;
        int h=n-1;
        while(l<=h){
            mid=l+(h-l)/2;
            if(target==nums[mid]){
                return mid;
            }
            else if(target<nums[mid]){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};