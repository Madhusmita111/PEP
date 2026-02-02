#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void wavePrint(int arr[][10], int n, int m){
    for(int i=0; i<n; i++){
        if(i%2 == 0){
        for(int j=0; j<m; j++){