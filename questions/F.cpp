#include <iostream>
using namespace std;

void rec(int* arr, int n){
    if(n<1)return;
    if((n-1)%2 == 0){
        cout<<arr[n-1]<<" ";
    }
    rec(arr, n-1);
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    rec(arr,n);
    return 0;
}