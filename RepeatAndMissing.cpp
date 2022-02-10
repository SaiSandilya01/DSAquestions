#include<bits/stdc++.h>

using namespace std;

int duplicate(vector<int> &v){
  for(int i = 0; i< v.size(); i++){
    int index = abs(v[i])-1;
    if(v[index]<0){
      cout<<index+1<<endl;
      return index+1;

    }
    v[index] = -1* v[index];
  }
  return 0;
}

void solve(){
  vector<int> v;
  int n ;
  cin>>n;
  for(int i =0; i<n; i++){
    int x;
    cin>>x;
    v.push_back(x);
  
  }
  int s = (n*(n+1))/2;
  int sv = 0;
  for(int i = 0; i<n; i++){
    sv+=v[i];
  }

  int dup = duplicate(v);

  sv = sv - dup;

  cout<<"Missing value:-"<<(s - sv)<<" Duplicate value:-"<<dup; 




}

int main(){
  int t;
  cin>>t;
  for(int i = 0; i<t; i++){
    solve();
  }
}