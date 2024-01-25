class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       unordered_set<int> num1;
       for(int i:nums){
           if(num1.count(i)){ //It returs true if num1.count(i) will encounter
                              //any element which is already present
               return true;
           }
           num1.insert(i);
       }

        
        return false;

    }
};