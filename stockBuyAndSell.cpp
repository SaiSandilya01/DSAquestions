// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
       int maxi = 0;
        int mini = INT_MAX;
        for(int i =0; i<prices.size(); i++){
            mini = min(prices[i], mini);
            maxi = max(maxi, prices[i]-mini);
            
        }
        return maxi; 
        
        
        
        
    }
};