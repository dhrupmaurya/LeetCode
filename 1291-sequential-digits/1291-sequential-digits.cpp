class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> num;
        string s="123456789";
        for(int i=0;i<s.size();i++){
            for(int j=i+1;j<s.size();j++){
                int num1=stoi(s.substr(i,j-i+1));
                if(num1>high) break;
                if(num1>=low){
                    num.push_back(num1);
                }
            }
        }
        
        sort(num.begin(), num.end());
        return num;
    }
};
