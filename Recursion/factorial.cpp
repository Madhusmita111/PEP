#include <iostream>
using namespace std;

int rec(int num){
    if(num == 0 || num == 1)return 1;
    // rec(num - 1);
    return num*rec(num-1);
}

int por(int num,int power){
    if(power == 1)return num;
    return num*por(num,power-1);
}


int main(){
    int num; 
    cin>>num;
    int power;
    cin>>power;
    // cout<<rec(num);
    cout<<por(num,power);
}