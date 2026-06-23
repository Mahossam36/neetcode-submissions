class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = prices[0];
        int min = max;
        int diff = 0;
        for (int item : prices){
            if (item > max){ 
                max = item ;
                int localdiff = max - min;

                if(diff<localdiff)	
                    diff = localdiff;
            }
            if(item <min){
                max = item;
                min = item;
            }   
        }
            return diff;
    }
};
