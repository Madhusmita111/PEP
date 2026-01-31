#include <iostream>
using namespace std;

bool isSorted(int arr[], int size){
    if(size==0 || size == 1)return true;
    if(arr[0]>arr[1])return false;
    return isSorted(arr+1,size-1);
}

int main(){
    int size;
    cin>>size;

    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<isSorted(arr,size);
}