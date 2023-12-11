#include <iostream>
using namespace std;

int * operate(int n,int *a){
    for(int i=0;i<n;i++){
        if(a[i]!=0)
        a[i]-=1;
    }
    return a;
}
int main(){
    int t;
    cin>>t;
    for(int o=0;o<t;o++){
        int n,fdiff,max=0;
        cin>>n;

        int a[n];
        int b[n];
        int diff[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        if(max<a[i]){
            max=a[i];
        }
        if(b[i]!=0)
        fdiff=a[i]-b[i];
        diff[i]=a[i]-b[i];
        }
    
    int i=0;
    bool eq=true;
    int *ne;
    while(i<max){
        ne=operate(n,a);
    }
    if(eq)
    cout<<"YES "<<endl;
    else 
    cout<<"NO "<<endl;
    }


    
    return 0;
}
