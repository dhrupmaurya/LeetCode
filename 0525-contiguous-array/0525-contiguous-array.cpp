class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        unordered_map<int,int>mp;
        int lsub=0;
        mp[0]=-1;
        for(int i=0;i<n;i++){
            sum+=nums[i]==0?-1:1;
            if (sum == 0) {
                 lsub = max(lsub, i + 1);
            }

            else if(mp.find(sum)!=mp.end()){
               lsub=max(lsub,i-mp[sum]);
            }
            else{
                mp[sum]=i;
            }
        }
        return lsub;
    }
};