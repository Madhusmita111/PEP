
#include <iostream>
using namespace std;

void rec(long long num){
    if(num<10){
        cout<<num<<" ";
        return;
    }
    rec(num/10);
    cout<<num%10<<" ";
}
int main() {
    int n;
    cin>>n;
    while(n>0){
        long long num;
        cin>>num;
        n--;
        rec(num);
        cout<<"\n";
    }
    return 0;
}