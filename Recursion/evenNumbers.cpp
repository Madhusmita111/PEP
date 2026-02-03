#include <iostream>
using namespace std;

void rec(int num){
    if(num == 0)return;
    cout<<num<<" ";
    rec(num - 2); 
}
int main(){
    int num;
    cin>>num;
    rec(num);
}