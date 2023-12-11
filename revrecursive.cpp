#include <bits/stdc++.h> 
using namespace std;
    stack<int> st;

void reverse(stack<int> &s){
    stack<int> rev,rev1;
    if(s.empty()){
        return rev;
    }
    else{
        rev.push(s.top());
        s.pop();
        reverse(s);
    }
    while(!rev1.empty()){
        rev.push(rev1.top());
        rev1.pop();
    }
}

void print(stack<int> s)
{
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
int main(){
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
    cout<<"Stack before reversal"<<endl;;
    print(st);
    cout<<"Stack after reversal"<<endl;
    print(reverse(st));
}