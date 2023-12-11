#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int o=0;o<t;o++){
        int sum=0;
        int a11,a12,a21,a22;
        cin>>a11>>a12>>a21>>a22;
        sum=a11+a12+a21+a22;
        if(sum==0)
        cout<<"0"<<endl;
        if(sum==1||sum==2||sum==3)
        cout<<"1"<<endl;
        if(sum==4) 
        cout<<"2"<<endl;
    }
    return 0;
}