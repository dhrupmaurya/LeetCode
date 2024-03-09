class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
         int n1=nums1.size();
         int n2=nums2.size();
         int i=0,j=0,minEle=INT_MAX;
         vector<int>num;
         while(i<n1 && j<n2){
             if(nums1[i]<nums2[j]){
                 i++;
             }
             else if(nums1[i]>nums2[j]){
                 j++;
             }
             else{
                 num.push_back(nums1[i]);
                 i++;
                 j++;
             }
         }
         if(num.empty()){
             return -1;
         }
         for(int k=0;k<num.size();k++){
             minEle=min(minEle,num[k]);
         }
         return minEle;
    }
};