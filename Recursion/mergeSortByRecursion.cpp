#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int start, int end){
    int mid = start+(end-start)/2;
    int size1 = mid-start+1;
    int size2 = end -(mid+1)+1;
    
    // creating two new arrays
    int* arr1 = new int [size1];
    int* arr2 = new int [size2];

    // copy values from start->mid in first array
    int k = start;
    for(int i=0; i<size1; i++){
        arr1[i] = arr[k++];
    }

    // copy values from mid->end in second array
    k = mid+1;
    for(int i=0; i<size2; i++){
        arr2[i] = arr[k++];
    }

    // after the values are copied, we need to sort and merge the arrays
    int i=0, j=0;
    k = start;
    while(i<size1 && j<size2){
        if(arr1[i]<arr2[j]){
            arr[k++] = arr1[i++];
        }else{
            arr[k++] = arr2[j++];
        }
    }

    // need to check for remaining elements
    while(i<size1){
        arr[k++] = arr1[i++];
    }
    while(j<size2){
        arr[k++] = arr2[j++];
    }

    delete []arr1;
    delete []arr2;

}


void mergeSort(int arr[], int start, int end){

    if(start>=end)return;

    int mid = start+(end-start)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);

    merge(arr,start,end);

    
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}