#include <bits/stdc++.h> 
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        
        int a,b,c;
        cin>>a>>b>>c;
        if(a*b<0||b*c<0||c*a<0){
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
}
