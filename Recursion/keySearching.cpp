#include <iostream>
using namespace std;

bool find(int arr[], int key, int size){
    if(size == 0)return false;
    if(key == arr[0])return true;
    return find(arr+1,key,size-1);
}
int main(){
    int arr[5] = {1,4,3,6,8};
    int key = 6;
    cout<<find(arr,2,5);

}

