#include <bits/stdc++.h>

using namespace std;
// Creating Max heap 
void heapify(int arr[], int n, int i){
    // Left child index
    int left = 2*i +1;
    // Right child index 
    int right = 2*i +2; 
    int root = i;
    if(left< n && arr[left]> arr[i]){
        root = left;

    }
    else if( right< n && arr[right]>arr[i]){
        root = right; 
    }
    if(root != i){
        swap(arr[i], arr[root]);
        heapify(arr, n, root);
    }
}

void heapsort(int arr[], int n ){
    // Heapify the entire array
    for (int i = n/2-1; i> 0 ; i-- ){
        heapify(arr, n, 0);
    }
    // Replace the first element with the ith element 
    for(int i = n-1; i>0; i--){
        heapify(arr, i, 0);
        swap(arr[0],arr[i]);

    }
}




int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n; i++){
        cin>>arr[i];
    }
    heapsort(arr, n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    

}