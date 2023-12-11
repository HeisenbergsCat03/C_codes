#include <bits/stdc++.h> 
using namespace std;
int LargButMinFreq(int arr[], int n){
    vector<int> a(1000001, 0);
        int max = INT_MIN;
        int freq = INT_MAX;

    for(int i = 0;i < n; i++){
        a[arr[i]]++;
    }
    for(int i = 1000001;i>=0;i-- ){
        if(a[i]==0)
        continue;
        if(a[i]!=0){
            if(a[i]<freq){
                freq = a[i];
                max = i;
            }        
            }

    }
    return max;

}
int main(){
    int arr[4] = {3,3,5,5};
    int n =4;
    cout<<LargButMinFreq(arr,n)<<endl;
}