#include <bits/stdc++.h> 
using namespace std;
int mergeArrays(int arr1[], int arr2[], int n1)
                        
{
    int n2 = n1;
    int arr3[n1+n2];
    int i = 0, j = 0, k = 0;
      // traverse the arr1 and insert its element in arr3
    while(i < n1){
    arr3[k++] = arr1[i++];
    }
        
      // now traverse arr2 and insert in arr3
    while(j < n2){
    arr3[k++] = arr2[j++];
    }
        
      // sort the whole array arr3
    sort(arr3, arr3+n1+n2);
    int mini = INT_MAX;
    for(int i = 0; i <= n1 ; i++){
        mini = min(mini , arr3[n1-1+i]-arr3[i]);
    }
    return(mini) ;
    
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int j = 0;j<n;j++){
            cin>>a[j];
        }
        for(int j = 0;j<n;j++){
            cin>>b[j];
        }
        int ans = mergeArrays(a,b,n);
        cout<< ans<<endl;
    }
}

