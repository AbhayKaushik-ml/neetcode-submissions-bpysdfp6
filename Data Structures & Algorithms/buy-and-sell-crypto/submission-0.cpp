class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res=0;
        int i=0;
        int j = 1;
        while(j<prices.size()){
            if(prices[j]>prices[i]){
                res=max((prices[j]-prices[i]),res);
            }
            else i=j;
            j++;
        }
        return res;
    }
};
