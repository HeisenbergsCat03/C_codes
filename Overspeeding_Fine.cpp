#include <bits/stdc++.h> 
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int fine = 0;
        if(n>70&&n<=100){
            fine = 500;
        }
        if(n>100){
            fine = 2000;
        }
        cout<<fine<<endl;
    }
}
