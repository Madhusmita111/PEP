#include <iostream>
using namespace std;

string reverse(string &st){
    int start=0, end=st.length()-1;
    while(start<end){
        swap(st[start++],st[end--]);
    }
    return st;
}

int main(){
    string st = "Hello";
    cout<<reverse(st);
    return 0;
}