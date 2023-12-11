#include <bits/stdc++.h> 
using namespace std;
stack<int> reverse(stack<int> st){
    stack <int> rev;
    int temp = 0;
    while(!st.empty()){
        temp = st.top();
        rev.push(temp);
        st.pop();
    }
    return rev;
}
int main(){
    stack<int> st;
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
    stack<int> re = reverse(st);
    cout<<"Stack before reversing"<<endl;
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    cout<<"Stack after reversing"<<endl;
    while(!re.empty()){
        cout<<re.top()<<endl;           
        re.pop();
    }
    return 0;
}