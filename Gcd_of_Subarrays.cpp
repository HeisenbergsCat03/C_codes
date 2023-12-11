#include <bits/stdc++.h> 
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int o = 0;o<t;o++)
    { 
        int n,k;
        cin>>n>>k;
        unsigned long long int arr[n];
        if(k<n*(n+1)/2){
        cout<<-1;
        continue;}
        for (int i = 0;i<n-1;i++){
            cout<<"1 ";
        }
        cout<<k-(n*(n+1)/2) + 1<<endl;}}