class Solution {
public:
    static bool compare(const vector<int>&a,const vector<int>&b){
        return a[1]<b[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        int n=points.size();
        if(n==0){
            return 0;
        }
        sort(points.begin(),points.end(),compare);
        int pos=points[0][1];
        int shot=1;
        for(int i=1;i<n;i++){
            if(points[i][0]<=pos){
                continue;
            }
            else{
                pos=points[i][1];
                shot++;
            }

        }
        return shot;
    }
};