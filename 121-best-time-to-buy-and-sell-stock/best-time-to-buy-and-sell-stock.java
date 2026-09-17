class Solution {
    public int maxProfit(int[] prices) {
       
        int minprice = Integer.MAX_VALUE;
        int currentprofit=0;
        int maxprofit = 0;
        
        
        for(int i=0;i<prices.length;i++){
            if(minprice>prices[i]){
                minprice = prices[i];
            }
            else{
                currentprofit=prices[i] - minprice;
                if(currentprofit>maxprofit){
                    maxprofit=currentprofit;
                }

            }
        }
        return maxprofit;
        

    }
}