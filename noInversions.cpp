#include<bits/stdc++.h>

using namespace std;


int merge(vector<int> &v, int start, int mid, int end){

  vector<int> temp;
  int l = start;
  int r = mid+1; 
  int count = 0;

  while(l<= mid && r<=end){
    if(v[l]>v[r]){
      temp.push_back(v[r]);
      r++;
      count= count+(mid-l+1);
    }
    else if(v[l]<=v[r]){
      temp.push_back(v[l]);
      l++;

    }
  }

  while(l<=mid){
    temp.push_back(v[l]);
    l++;
  }
  while(r<=end){
    temp.push_back(v[r]);
    r++;
  }
  
  for(int i = start; i<=end; i++){
    v[i] = temp[i-start];
  }

  return count;

}

int MergeSort(vector<int> &v, int start, int end){
  
  int count = 0;
  if(start<end){
    
    int mid = start + (end-start)/2;
    count+=MergeSort(v, start, mid);
    
    count+=MergeSort(v, mid+1, end);
    
    count+=merge(v, start, mid, end);
    
  }

  return count;
}


int main(){

  vector<int> v= {2,5,1,3,4};
  
  cout<<MergeSort(v, 0, 4);
}