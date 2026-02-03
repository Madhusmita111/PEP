#include <iostream>
#include <bits/stdc++.h>
using namespace std;



// important
void spiralPrint(int arr[][10], int n, int m){
    int topRow = 0, buttomRow = n-1, leftCol = 0, rightCol = m-1;
    while(topRow<=buttomRow && leftCol<=rightCol){
        // print top row
        for(int i=leftCol; i<=rightCol; i++){
            cout<<arr[topRow][i]<<" ";
        }
        topRow++;

        // print right col
        for(int j=topRow; j<=buttomRow; j++){
            cout<<arr[j][rightCol]<<" ";
        }
        rightCol--;

        // print bottom row;
        for(int i=rightCol; i>=leftCol; i--){
            cout<<arr[buttomRow][i]<<" ";
        }
        buttomRow--;

        // print left col
        for(int j=buttomRow; j>=topRow; j--){
            cout<<arr[j][leftCol]<<" ";
        }
        leftCol++;
    }
}



// void wavePrint(int arr[][10], int n, int m){
//     for(int i=0; i<n; i++){
//         if(i%2 == 0){
//         for(int j=0; j<m; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         // cout<<endl;
//         }else{
//             for(int j=m-1; j>=0; j--){
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//         cout<<endl; 
//     }
// }


// void colSum(int arr[][10], int n, int m){
//     int ans = 0;
//     // vector<int> res(n);
//     for(int i=0; i<n; i++){4 4

//         for(int j=0; j<m; j++){
//             ans += arr[j][i];
//             // res.push_back(ans);
//             cout<<ans<<endl;
//         }
//         ans = 0;
//     }
// }
// // bool find(int arr[][10], int n, int m, int key){
// //     for(int i=0; i<n; i++){
// //         for(int j=0; j<m; j++){
// //             if(arr[i][j] == key){
// //                 return true;
// //             }
// //         }
// //     }
// //     return false;
// // }
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
    // cin>>key;

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

    // cout<<find(arr,n,m,key);

    // int ans = 0;
    // vector<int> res(n);
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         ans += arr[i][j];
    //         res.push_back(ans);
    //     }
    //     ans = 0;
    // }
    // int maxi = INT_MIN;
    // int b = 0;
    // for(int i=0; i<n; i++){
    //     if(res[i]>maxi){
    //         b = i;
    //     }
    // }
    // cout<<b;
    
    // for(int i=0; i<m; i++){
    //     for(int j=0; j<n; j++){
    //         ans += arr[i][j];
    //         res.push_back(ans);
    //     }
    //     ans = 0;
    // }

    // int maxi = INT_MIN;
    // int b = 0;
    // for(int i=0; i<m; i++){
    //     if(res[i]>maxi){
    //         b = i;
    //     }
    // }
    // cout<<b;
    // colSum(arr,n,m);

    // wavePrint(arr,n,m);
    spiralPrint(arr,n,m);
    return 0;

}