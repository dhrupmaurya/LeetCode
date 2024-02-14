class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>Nnum;
        vector<int>Pnum;
        vector<int>ans;
        int n=nums.size();
        int i,j;
        
        for(i=0;i<n;i++){
            if(nums[i]<0){
                Nnum.push_back(nums[i]);
            }
            else if(nums[i]>0){
                Pnum.push_back(nums[i]);
            }
        }
        i=0;j=0;
        while(i<Nnum.size() && j<Pnum.size()){
            ans.push_back(Pnum[i++]);
            ans.push_back(Nnum[j++]);
        }
        for( ;i<Nnum.size();i++){
            ans.push_back(Nnum[i]);
        }
        for( ;j<Pnum.size();j++){
            ans.push_back(Pnum[j]);
        }
        return ans;
    }
};