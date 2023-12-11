#include <bits/stdc++.h> 
using namespace std;
int main()
{ int n1;
cin>>n1;
for(int o=0;o<n1;o++){
    int n,flag=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    sort(arr, arr + n);
    for(int i=0;i<n;i++)
    if (arr[i]==arr[i+1]){
        flag=1;
        break;
    }
    if (flag)
    cout<<"NO"<<endl;
    else 
    cout<<"YES"<<endl;
}}
