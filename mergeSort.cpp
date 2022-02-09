#include<bits/stdc++.h>

using namespace std;

// Function to merge intervals
void merge(vector<int> &v, int start, int end, int mid){
  int i = start;
  int j = mid+1;
  vector<int> temp;
  while(i<=mid && j<=end){
    if(v[i]<=v[j]){
      temp.push_back(v[i]) ;
      i++;
    }
    else{
      temp.push_back(v[j]);
      j++;
    }

  }
// If i or j get exhausted, append the rest from the other sub part of the array into temp
  while(i<=mid){
    temp.push_back(v[i]);
    i++;
  }
  while(j<=end){
    temp.push_back(v[j]);
    j++;
  }
// shifting all the element from the sorted subarray temp into the main array
  for(int i = start; i<= end; i++){
    v[i] = temp[i-start];
  }

}


// function for dividing the array into sub arrays until each sub array consists of only 1 element
void mergeSort(vector<int> &v, int start, int end){

  if(start<end){
    int mid = start + (end-start)/2;

    mergeSort(v,start, mid);
    mergeSort(v,mid+1,end);
    merge(v, start, end, mid);
  }
 
}


int main(){

  vector<int> v;
  v = {5 ,4 ,3, 2, 1};

  mergeSort(v, 0, 4);
  for(int i =0 ; i< v.size(); i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;



}

