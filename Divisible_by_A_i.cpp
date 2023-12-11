#include <bits/stdc++.h> 
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int o = 0;o<t;o++)
    { 
        int n,k;
        cin>>n;
        int arr[n];
        for (int i = 0;i<n;i++){
            cin>>arr[i];
        }
        int gcd =arr[0];
        for(int i = 1;i<n;i++){
            gcd = __gcd(gcd,arr[i]);
        }
        for (int i = 0;i<n;i++)
        {
            cout<<arr[i]/gcd<<" ";
        }
        cout<<endl;
    }
return 0;
} 
