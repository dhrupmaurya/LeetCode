class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n=accounts.size();
        vector<int>num;
        for(int i=0;i<n;i++){
            num.push_back(accumulate(accounts[i].begin(), accounts[i].end(), 0));
        }
        return *max_element(num.begin(),num.end());
    }
};