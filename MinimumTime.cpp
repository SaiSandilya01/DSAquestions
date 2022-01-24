 #include<bits/stdc++.h>

 using namespace std;

 
 int max(int a, int b){
        if(a>b){
            return a;
        }
        else{
            return b;
        }
    }
    int min(int a, int b){
        if(a<b){
            return a;
        }
        else{
            return b;
        }
    }
    
    int no_docs(int S1, int S2, int t){
        int docs = (t/S1)+(t/S2);
        return docs;
    }
    int minTime(int S1, int S2, int N){
        
        int maxi = max(S1,S2)*N;
        int mini = 1;
        int mid;
        while(mini<maxi){
            mid = (maxi+mini)/2;
            int d = no_docs(S1, S2, mid);
            if(d < N){
                mini = mid+1;
            }
            
            else{
                maxi= mid;
            }
            
            
            
            
        }
       return maxi;
        
        // code here
    }

    int main(){

      int S1,S2,N;
      cin>>S1>>S2>>N;
      int t = minTime(S1,S2,N);
      cout<<t;
    }