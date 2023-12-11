#include <bits/stdc++.h> 
#define n 1000
using namespace std;
class Stack {
    int* arr;
    int top;

public:
    Stack() {
        arr = new int[n];
        top = -1;
        }

    void push(int x) {
        if (top == n - 1) {
            cout << "Stack overflow" <<endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    int getTop() {
        if (top == -1) {
            cout << "No element in stack" <<endl;
            return -1;
        }
        return arr[top];
    }

    bool empty() {
        return top == -1;
    }

    void pop() {
        if (top == -1) {
            cout << "No element to pop" <<endl;
            return;
        }
        top--;
    }
};

int main() {
    Stack st;
    st.push(6);
    st.push(8);
    cout<<st.getTop() <<" "<<st.empty()<<endl;
    st.pop();
    st.pop();
    cout<<st.empty()<<endl;
    return 0;
}
