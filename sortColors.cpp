#include<bits/stdc++.h>

using namespace std; 


void sortColors(vector<int>& nums) {
        
        int r=0;
        int w=0;
        int b=0;
        
        for(int i = 0; i< nums.size(); i++ ){
            
            if(nums[i]==0){
                r++;
            }
            else if(nums[i] == 1){
                w++;
            }
            else if(nums[i] == 2){
                b++;
            }
            
            
        }
        int c = 0;
        
        for(int i=0; i<r; i++){
            nums[c] = 0;
            c++;
        }
        
         for(int i=0; i<w; i++){
            nums[c] = 1;
             c++;
        }
        for(int i = 0; i<b; i++){
            nums[c]= 2;
            c++;
        }
        
        for(int i = 0; i< nums.size(); i++ ){
          cout<<nums[i]<<" ";
        }
        
    }


    int main(){

        vector<int> a; 

        a = {1, 0 ,1, 2, 0 ,1 ,2 ,2,0};

        sortColors(a);




    }