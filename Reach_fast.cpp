#include <bits/stdc++.h> 
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int o = 0;o<t;o++)
    {
    int a,b,k;
    cin>>a>>b>>k;
    float diff= abs(a-b);
    cout<<ceil(diff/k)<<endl;

    }}
