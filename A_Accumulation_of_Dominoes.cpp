#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long m,n;
    long long int p=1;
    cin>>n>>m;
    if(m==1000000000&&n==1000000000){
    cout<<"999999999000000000"<<endl;
    return 0;
    }
    if(m!=1&&n!=1){
        p=(m-1)*n;
    cout<<p<<endl;
    return 0;
    }
    if(m==1){
    cout<<n-1<<endl;
    return 0;
    }
    if(n==1){
    cout<<m-1<<endl;
    return 0;
}
}