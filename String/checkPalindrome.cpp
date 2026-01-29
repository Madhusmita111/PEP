#include <iostream>
using namespace std;

string isPalindrome(string &st){
    int i = 0, j = st.length()-1;
    while(i<j){
        if(st[i]==st[j]){
            return "true";
        }
        i++, j--;
    }
    return "false";
}

int main(){
    string st = "MOMO";
    cout<<isPalindrome(st);
}