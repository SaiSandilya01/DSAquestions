// Time Complexity: O(n^2) 
// Auxiliary Space: O(1)
// Boundary Cases: Insertion sort takes maximum time to sort if elements are sorted in reverse order. And it takes minimum time (Order of n) when elements are already sorted.
// Algorithmic Paradigm: Incremental Approach
// Sorting In Place: Yes
// Stable: Yes
// Online: Yes
// Uses: Insertion sort is used when number of elements is small. It can also be useful when input array is almost sorted, only few elements are misplaced in complete big array.
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
  
  vector<int> arr = {5,4,3,2,1,10, 3, 2, 1,5, 11};

  solve(arr);

}