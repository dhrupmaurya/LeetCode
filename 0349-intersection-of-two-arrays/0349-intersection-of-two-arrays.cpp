class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       int n1=nums1.size();
       int n2=nums2.size();
        vector<int>num;
        int i=0,j=0;
        for(i=0;i<n1;i++){
            for(j=0;j<n2;j++){
                if(nums1[i]==nums2[j]){
                    num.push_back(nums1[i]);
                }
            }
        }
        sort(num.begin(),num.end());
        num.erase(unique(num.begin(),num.end()),num.end());
        return num;
    }
};