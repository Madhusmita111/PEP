#include <iostream>
using namespace std;

string removeDuplicate(string &st){
    bool visited[256] = {false};
    string res;
    for(char i:st){
        if(!visited[i]){
            res.push_back(i);
            visited[i] = true;
        }
    }
    return res;
}

int main(){
    string st = "BanaEnaE";
    cout<<removeDuplicate(st);
    return 0;
}