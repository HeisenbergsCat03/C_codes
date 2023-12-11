#include <iostream>
#include <cmath>
using namespace std;
int main()
{ int n;
cin>>n;
for(int o=0;o<n;o++){
    int x,y;
    cin>>x>>y;
    bool ex=(2*y>=x);
    if(ex)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}return 0;
}