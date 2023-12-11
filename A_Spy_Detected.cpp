#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int o=0;o<t;o++){
        int n,c=0,index0=0,m=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
        cin>>a[i];
        m=a[0];
        
        }
        for(int i=0;i<n;i++){
            a[i]-=m;
            if(a[i]==0){
            c++;
        }
        if(a[i]!=0)
        index0=i+1;}
        if(c==1)
        cout<<"1"<<endl;
        else 
        cout<<index0<<endl;
        }
return 0;
}