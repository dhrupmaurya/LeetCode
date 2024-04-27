class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            int j=i;
            int count=0;
            while(j){
                count=count+(j&1);
                j=j>>1;
            }
            if(count==k){
                sum+=nums[i];
            }
        }
        return sum;
    }
};