#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int o=0;o<t;o++){
        long a,b,c;
        cin>>a>>b>>c;
        long ta,tb;
        ta=abs(a-1);
        tb=abs(b-c)+abs(c-1);
        if(tb<ta)
        cout<<"2"<<endl;
        if(tb>ta)
        cout<<"1"<<endl;
        if(tb==ta)
        cout<<"3"<<endl;
    }
    return 0;
}