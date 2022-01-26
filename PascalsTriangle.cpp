#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> l;
        l.resize(numRows);
        for(int i =0; i< numRows; i++){
            
            l[i].resize(i+1);
            
            l[i][0] = 1;
            l[i][i] = 1;
            
            for( int j = 1; j< i; j++){
                
                l[i][j] = l[i-1][j-1] + l[i-1][j];
                
                
            }
            
            
            
            
        }
        return l;
        
        
    }
};