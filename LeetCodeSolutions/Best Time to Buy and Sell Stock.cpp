class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int total = 0, max = 0, temp = 0 ;
        for(int i = 0 ;i< prices.size()-1;i++){
            temp = prices.at(i+1) - prices.at(i);
            
            total+=temp;
            if(total < 0)
            total = 0;
            
            if(total > max)
            max = total;
            
            
        }
        return max;
    }
};