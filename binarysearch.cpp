#include <bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int n, int k){
    int mid,start=0,flag = 0;
    n;
    while(start<n){
        mid = (start+n)/2;
        if(arr[mid] == k){
            flag = 1;
            return mid;
        }
        if(arr[mid]<k){
            start = mid;
        }
        if(arr[mid]>k){
            n = mid;
        }
    }
    if(flag==0){
        return -1;
    }
    
}
int main(){
    int n,k;
    cin>>n;
    int arr[n]; 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    int index = binarysearch(arr,n,k);
    cout<<index<<endl;
    return 0;
}
