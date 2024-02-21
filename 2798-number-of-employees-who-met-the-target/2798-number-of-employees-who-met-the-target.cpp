class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        sort(hours.begin(),hours.end());
        auto it =lower_bound(hours.begin(),hours.end(),target);
        return hours.end()-it;
    }
};