public class program11 {
    public static int maxProfit(int[] prices, int n) {
        int profit = 0;
        for (int i = 1; i < n; i++) {
            if (prices[i] > prices[i - 1]) {
                profit += prices[i] - prices[i - 1];
            }
        }
        return profit;
    }

    public static void main(String[] args) {
        int[] prices = {100, 180, 260, 310, 40, 535, 695};
        int n = prices.length;
        
        int max_profit = maxProfit(prices, n);
        System.out.println("Maximum Profit: " + max_profit);
    }
}