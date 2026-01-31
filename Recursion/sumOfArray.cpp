#include <iostream>
using namespace std;

int sum(int arr[], int size){
    if(size == 0)return 0;
    if(size == 1)return arr[0];
    return (sum(arr+1,size-1)+sum(arr+2,size-2));
}

int main(){
    int size;
    cin>>size;

    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<sum(arr,size);
}