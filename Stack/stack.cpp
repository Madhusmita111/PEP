#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int>st;
    st.push(2);
    st.push(3);
    st.push(4);
    while(st.size()){
        cout<<st.top()<<" ";
        st.pop();
    }
}