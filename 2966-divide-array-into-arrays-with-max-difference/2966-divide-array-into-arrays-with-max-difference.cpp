class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>>num1;
        vector<vector<int>>num2;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=0,j=1,l=2,z=0,a=0;
        while(l<n){
            if(nums[j]-nums[i]<=k && nums[l]-nums[j]<=k && nums[l]-nums[i]<=k){
                vector<int>Arr={nums[i],nums[j],nums[l]};
                 num1.push_back(Arr);
            }
          
           i=i+3;
           j=j+3;
           l=l+3;
        }
        if(num1.size()*3!=n){
            return num2;
        }
        return num1;
    }
};