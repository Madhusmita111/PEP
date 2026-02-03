#include <iostream>
using namespace std;

bool binary(int arr[],int i, int j, int n, int key){
    // int i=0, j=n;
    int mid = i+j/2;
    if(j>=i)return false;
        if(key == arr[mid]){
            return true;
        }else if(key<arr[mid]){
           return binary(arr,i,mid-1,n,key);
        }else{
            return binary(arr,mid+1,j,n,key);
        }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binary(arr,0,n-1,n,key);
}