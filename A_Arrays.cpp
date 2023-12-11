#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n1,n2,k,m;
    cin>>n1>>n2>>k>>m;
    int a[n1];int b[n2];
    for(int i=0;i<n1;i++)
    cin>>a[i];
    for(int i=0;i<n2;i++)
    cin>>b[i];
    if(n2-m>=0){
        if(a[k-1]<b[n2-m])
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
}
    else
    {
        if(a[n1-1]<b[0])
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
}
return 0;
}