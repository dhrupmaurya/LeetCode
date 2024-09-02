class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>arr;
        int n=nums.size();
        int nz=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                arr.push_back(nums[i]);
            }
            else{
                nz++;
            }
        }
        for(int i=0;i<nz;i++){
            arr.push_back(0);
        }
        for(int i=0;i<n;i++){
            nums[i]=arr[i];
        }
    }
};