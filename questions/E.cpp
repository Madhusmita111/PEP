#include <iostream>
using namespace std;

void rec(long long num){
    if(num<2){
        cout<<num;
        return;
    }
    rec(num/2);
    cout<<num%2;
}
int main() {
    int n;
    cin>>n;
    while(n--){
        long long num;
        cin>>num;
        rec(num);
        cout<<"\n";
       

    }
    return 0;
}