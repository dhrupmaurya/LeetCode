class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int i=0,res=0;
        while(tickets[k]>0){
            for(int i=0;i<tickets.size();i++){
                if(tickets[i]>0){
                res+=1;
                tickets[i]--;
                if(i == k && tickets[k] == 0)
                        return res;
                 }

            }
        }
        return res;
    }
};