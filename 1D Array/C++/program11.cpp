#include <iostream>
using namespace std;

int maxProfit(int prices[], int n) {
    int profit = 0;
    for (int i = 1; i < n; i++) {
        if (prices[i] > prices[i - 1]) {
            profit += prices[i] - prices[i - 1];
        }
    }
    return profit;
}

int main() {
    int prices[] = {100, 180, 260, 310, 40, 535, 695};
    int n = sizeof(prices) / sizeof(prices[0]);
    
    int max_profit = maxProfit(prices, n);
    cout << "Maximum Profit: " << max_profit << endl;
    
    return 0;
}