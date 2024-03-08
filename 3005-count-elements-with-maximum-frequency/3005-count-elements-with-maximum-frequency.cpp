class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>Hash(101,0);

        for(int i=0;i<n;i++){
            Hash[nums[i]]++;
        }
        int n1=*max_element(Hash.begin(),Hash.end());
        int z=0;
        for(int i=0;i<101;i++){
            if(Hash[i]==n1){
                z++;
            }
        }
        return z*n1;
       
    }
};