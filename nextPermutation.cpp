 #include<bits/stdc++.h>
 using namespace std;

// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
        
//         int flag=1 ;
//         int p;
//         for(int p = nums.size()-2; p>=0; p--){
            
//             if(nums[p+1]> nums[p] ){
//                 flag = 0;
//                 break;
//             }
//         }
//         if(flag ==1){
//             std:: sort(nums.begin(),nums.end());
//             return;
            
//         }
//         else{
//         for(int i = nums.size()-1; i>p ;i --){
//             if(nums[i]>nums[p]){
//                 std:: swap(nums[i],nums[p]);
//                 break;
//             }
            
//         }
        
//         std:: reverse(nums.begin()+p+1, nums.end());
            
//         }
        
        
//     }
// };

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(), k, l;
    	for (k = n - 2; k >= 0; k--) {
            if (nums[k] < nums[k + 1]) {
                break;
            }
        }
    	if (k < 0) {
    	    reverse(nums.begin(), nums.end());
    	} else {
    	    for (l = n - 1; l > k; l--) {
                if (nums[l] > nums[k]) {
                    break;
                }
            } 
    	    swap(nums[k], nums[l]);
    	    reverse(nums.begin() + k + 1, nums.end());
        }
    }
};