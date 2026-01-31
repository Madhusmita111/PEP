#include <iostream>
using namespace std;

bool find(int arr[][10], int n, int m, int key){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == key){
                return true;
            }
        }
    }
    return false;
}
int main(){
    // int arr[3][2] = {1,2,3,4,5,6};
    int n,m;
    cin>>n>>m;
    int key,x;
    
    int arr[n][10];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>x;
            arr[i][j]=x; 
        }
    }
    cin>>key;

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(int i=0; i<m; i++){
    //     for(int j=0; j<n; j++){
    //         cout<<arr[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }

    cout<<find(arr,n,m,key);

}