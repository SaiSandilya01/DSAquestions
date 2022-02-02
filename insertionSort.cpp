#include<bits/stdc++.h>

using namespace std; 


void solve(vector<int> &arr){

  for(int i = 1; i< arr.size(); i++){
    int key = arr[i];
    int k = i;
    int j = i-1;
    while(j>=0 && key<arr[j]){
      
        swap(arr[j], arr[k]);
        j--;
        k--;
      
     

    }

  }
  for(int i = 0; i< arr.size(); i++){
    cout<< arr[i]<<" ";
  }

}


int main(){
  
  vector<int> arr = {5,4,3,2,1};

  solve(arr);

}