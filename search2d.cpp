#include<bits/stdc++.h>

using namespace std;

// BETTER THAN BRUTE FORCE BUT NOT OPTIMAL APPROACH - O(n)
// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
//         int tr= 0;
//         int m = matrix.size()-1;
//         int n = matrix[0].size()-1;
//         for(int i = 0; i< matrix.size(); i++){
            
//             if(matrix[i][0]<= target && matrix[i][n]>=target){
//                 tr = i;
//                 break;
//             }
//         }
        
//         for(int i = 0 ; i<=n ; i++){
//             if( matrix[tr][i]== target){
//                 return true;
//             }
//         }
//         return false; 
        
//     }
// };


// OPTIMAL APPROACH 
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
      int low = 0;
      int high =  (matrix.size())*(matrix[0].size())-1;
         if(matrix[matrix.size()-1][matrix[0].size()-1]< target){
             return false; 
             
         }
        
        while(low<= high){
            int mid = low + (high-low)/2;
            if(matrix[mid/matrix[0].size()][mid%matrix[0].size()]== target){
                return true;
            }
            else if(matrix[mid/matrix[0].size()][mid%matrix[0].size()]<target ){
                low  = mid+1;
            }
            else{
                high = mid-1; 
            }
        }
    
        return false; 
    }
};