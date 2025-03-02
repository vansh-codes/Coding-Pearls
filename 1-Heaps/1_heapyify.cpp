#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[], int i, int n){  // O(logN)
    int largest = i;
    int left = i*2+1, right = i*2+2;

    if(left < n && arr[largest] < arr[left]){
        largest = left;
    }
    if(right < n && arr[largest] < arr[right]){
        largest = right;
    }
    if(largest != i){
        swap(arr[largest], arr[i]);
        heapify(arr, largest, n);
    }
}

int main(){ // O(N)
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    for(int i=(n/2-1);i>=0;i--){
        heapify(arr, i, n);
    }

    cout<<"Heapified: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}