#include<bits/stdc++.h>

using namespace std;

int findDuplicate(vector<int>& nums) {
        
        for(int i =0; i<nums.size(); i++){
            
                int index = abs(nums[i])-1;
                if(nums[index]<0){
                  return index+1;
                }
                nums[index] = -1*nums[index];
            
        }
        
        return 0;
        
        
    }

int main(){

  vector<int> arr = {4,3,2,1,2};

  cout<<findDuplicate(arr);


}