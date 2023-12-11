#include <bits/stdc++.h> 
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int o = 0;o<t;o++)
    { 
        bool flag = false;
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            k=k/__gcd(arr[i],k);
            if(k==1){
                flag = true;
            }
        }
        if(flag)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
} 