#include <iostream>
#include <string>
using namespace std;
int main(){
    int a,b,m;
    cin>>a>>b;
    if(a>b)
    m=a;
    else 
    m=b;
    int c=0;
    for(int i=m;i<=6;i++){
    c++;
    }
    if(c==1){
        cout<<"1/6";
    }
    if(c==2){
        cout<<"1/3";
    }
    if(c==3)
    {
        cout<<"1/2";
    }
    if(c==5)
    cout<<"5/6";
    if(c==6)
    cout<<"1/1";
    if(c==4)
    cout<<"2/3";
    return 0;
}