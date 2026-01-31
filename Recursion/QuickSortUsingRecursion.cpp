#include <iostream>
using namespace std;

int partition(int arr[], int start, int end){
    // find pivot
    int pivot = arr[start];

    // counting how many elements are less than pivot
    int count = 0;
    for(int i=start+1; i<=end; i++){
        if(arr[i]<pivot)count++;
    }

    // after counting, we got to know about the right place of the pivot;
    // now we will create a pivot index at that position.

    int pivotIndex = start + count;
    swap(arr[pivotIndex],arr[start]);

    // now we will handle left and right part of the pivot where left part should have smaller elemnet than pivot;
    int i = start, j  = end;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<pivot)i++;
        while(arr[j]>pivot)j--;
        swap(arr[i++],arr[j--]);
    }
   
    return pivotIndex;

}


void quickSort(int arr[], int start, int end){
    if(start>=end)return;
    int p = partition(arr,start,end);
    quickSort(arr,start,p-1);
    quickSort(arr,p+1,end);

}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    quickSort(arr,0,n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}