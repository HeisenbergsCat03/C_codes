#include <iostream>
#include <cmath>
using namespace std;
int main()
{int t;
    cin>>t;
    for(int o=0;o<t;o++){
    long l,r,a,mx=-1,result=0;
    cin>>l>>r>>a;
        for(int i=l;i<=r;i++){
            result=(i/a)+i%a;
            mx=max(mx,result);
        }
    cout<<mx<<endl;}
    return 0;}