#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,c=0,max=0;
    cin>>n;
    int a[n];
    for(int k=0;k<n;k++)
    {
        cin>>a[k];
    }
    for(int i=0;i<n;i++){
        int count=0;
    if(a[i]==0)
    continue;
    else{
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==0)
            count++;
            else 
            break;
        }
        if(max<count)
        max=count;
    }
    }
    
    return 0;

}