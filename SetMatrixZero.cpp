//Given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and then return the matrix.//

#include<bits/stdc++.h>

using namespace std;
// THIS IS THE BRUTE FORCE APPROACH TO SOLVING THIS QUESTION.
// void solve(){
//   int n,m;
//   cin>>n>>m;
//   int matrix[n][m];
//   int out[n][m];
//   for(int i =0; i< n; i++){
//     for(int j = 0 ; j< m; j++){
//       cin>> matrix[i][j];
//     }
//   }

//   for(int i=0; i<n; i++){
//     for (int j =0; j< m; j++){
      
//       if(matrix[i][j]==0){
//         int r,c;
//         r = i-1;
//         while(r>=0){
//           if(matrix[r][j]!=0){
//           matrix[r][j] = -1;
//           }
//           r--;

//         } 
//         r = i+1;
//         while(r<n){
//           if(matrix[r][j]){
//           matrix[r][j]= -1;
//           }
//           r++;
//         } 
//         c = j-1;
//         while(c>=0){
//           if(matrix[i][c]!=0){
//           matrix[i][c] = -1;
//           }
//           c--;
//         }
//         c= j+1;
//         while(c<m){
//           if(matrix[i][c]!= 0){
//           matrix[i][c] = -1;
//           }
//           c++;
//         }

//       }

//     }
//   }
//   for(int i =0; i< n; i++){
//     for(int j = 0 ; j< m; j++){
//       if(matrix[i][j] == -1){
//         matrix[i][j] = 0;
//       }
//     }
    
//   }

//  for(int i =0; i< n; i++){
//     for(int j = 0 ; j< m; j++){
//       cout<<matrix[i][j]<<" ";
//     }
//     cout<<endl;
//   }
// }

void setZeroes(vector < vector < int >> & matrix) {
    
    int m = matrix.size();
    int n = matrix[0].size();
    
    vector<int> dummy1(m, -1);
    vector<int> dummy2(n, -1);
    
    for(int i =0; i<m; i++){
        for(int j=0; j<n; j++){
            if(matrix[i][j] == 0){
                dummy1[i]= 1;
                dummy2[j] = 1;
                
            }
        }
    }
    
    for(int i =0; i<m; i++){
        for(int j =0; j<n; j++){
            if(dummy1[i] == 1 || dummy2[j] ==1){
                matrix[i][j] = 0;
            }
        }
    }
    for(int i =0; i< n; i++){
       for(int j = 0 ; j< m; j++){
          cout<<matrix[i][j]<<" ";
      }
    cout<<endl;
    }


    
}


int main(){

  int t;
  cin>> t;
  vector<vector<int>> matrix;
  matrix = {{1,1,1},{1,0,1},{1,1,1}};
  
    setZeroes(matrix);
    
  


}