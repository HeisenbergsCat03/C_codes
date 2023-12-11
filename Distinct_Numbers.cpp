#include <bits/stdc++.h> 
using namespace std;
bool notPartofArray(int a, int arr[],int n){
    int flag=1;
    for (int i=0;i<n;i++)
    {   
        if (a == arr[i])
        flag=0;
    }
    return flag;
}
int main()
{ int n1;
cin>>n1;
for(int o=0;o<n1;o++){
    int n,k,count=0,sumOfScores=0;
    cin>>n>>k;
    int arr[n+k];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=n;i<n+k;i++){
        arr[i]=0;
    }
    int n2 = sizeof(arr) / sizeof(arr[0]);
    for(int i=1;i<=2*n;i++)
    {
        
        if(notPartofArray(i,arr,n+k))
        {
            arr[n+count]=i;
            count++;
            sumOfScores+=*max_element(arr, arr + n + k)-i;
            if(count>k)
            break;
        }
    }
    cout<<sumOfScores<<endl;
    }
    return 0;}