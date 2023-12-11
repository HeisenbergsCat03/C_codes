#include <bits/stdc++.h> 
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        if((x1*x1 +y1*y1)>(x2*x2+y2*y2)){
            cout<<"ALEX"<<endl;
        }
        else if(((x1*x1) + (y1*y1))<(x2*x2+y2*y2)){
            cout<<"BOB"<<endl;
    }
        else if((((x1*x1) + (y1*y1))==(x2*x2+y2*y2))) 
            cout<<"EQUAL"<<endl;
}
return 0;
}
