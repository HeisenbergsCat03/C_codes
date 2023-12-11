#include <bits/stdc++.h> 
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int a[2*n];
        for(int i = 0;i<2*n;i++){
            cin>>a[i];
        }
        int left[n], right[n],count = 0,l=0,r=0;
        for(int i = 0;i<n;i++){
            left[i]= 0;
            right[i]=0;
        }
        for(int j = n;j<2*n;j++){ //traversing right
            if(a[j]<=n){
                right[r] = j;
                r++;
                count+=j;
            }
        }   
        for(int j = n-1;j>=0;j--){ //traversing left
            if(a[j]>n){
                left[l] = j;
                l++;
                count-=j;
            }
        }       
        cout<<count<<endl;
    }
    return 0;}