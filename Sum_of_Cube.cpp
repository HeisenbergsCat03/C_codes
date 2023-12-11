#include <bits/stdc++.h> 
using namespace std;    
unsigned long long int sum_of_subarray(int a[],int i,int j){
    unsigned long long int result = 0;
    for(;i<=j;i++){
        result += a[i];
    }
return result;
}
int main(){
    int t;
    cin>>t;
    for(int o = 0;o<t;o++)
    {int n,p=0;
    unsigned long long int res=0;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    unsigned long long int sum = 0;
    for(int i = 0;i<n;i++){
        for(int j = i; j<n;j++){
            sum = sum_of_subarray(a,i,j);
            res += ((((sum%998244353998244353)*(sum%998244353998244353))%998244353998244353)*(sum%998244353998244353))%998244353998244353;
            //cout<<sum[p]<<endl;
            p++;
        }
    }
    cout<<res<<endl;}
    return 0;
    }